#include "sculptor.h"
#include <cstdlib>
#include <iostream>
#include <vector>
#include <fstream>
#include <cmath>
#include <iomanip>

using namespace std;

// Construtor da classe Sculptor referente a construção da matriz 3D.
sculptor::sculptor(int _nx, int _ny, int _nz)
{
    nx = _nx;
    ny = _ny;
    nz = _nz;
    r = g = b = a = 0;

    M3D = new Voxel **[nx]; // Informa o tipo de estrutura para realização da alocação dinâmica.

    for( int i = 0; i < nx; i++ )
    {     
        M3D[i] = new Voxel *[ny];

        for (int j = 0; j < ny; j++)
        {
            
            M3D[i][j] = new Voxel [nz];

            for (int k = 0; k < nz; k++)
            {                
                // Inicialização padrão dos valores da matriz 3D.
                M3D[i][j][k].r = 0;
                M3D[i][j][k].g = 0;
                M3D[i][j][k].b = 0;
                M3D[i][j][k].a = 0; 
                M3D[i][j][k].isOn = false; // Por iniciar em falso. Implica dizer que a matriz será toda transparente.
            }            

        }        

    }

}

//Destrutor da classe Sculptor referente a construção da matriz 3D.
sculptor::~sculptor()
{

    for (int i = 0; i < nx; i++)
    {
        for (int j = 0; j < ny; j++)
        {
            for (int k = 0; k < nz; k++)
            {
                delete [] M3D[i][j];   // Liberação de memória da coordenada Z.                             
            }
                delete [] M3D[i]; // Liberação de memória da coordenada Y.          
        }   
                delete [] M3D; // Liberação de memória da coordenada X.      
    }
}

//Definição das cores atuais do desenho.
void sculptor::setColor(float _r, float _g, float _b, float _alpha)
{
    r = _r;
    g = _g;
    b = _b;
    a = _alpha;

}

//Ativação do voxel nas posições x, y e z, sendo o isOn nível lógico alto.
void sculptor::putVoxel(int x, int y, int z)
{
    M3D[x][y][z].r = r;
    M3D[x][y][z].g = g;
    M3D[x][y][z].b = b;
    M3D[x][y][z].a = a;
    M3D[x][y][z].isOn = a;
}

//Desativação do volex nas posições x, y e z, sendo o isOn nível lógico baixo.
void sculptor::cutVoxel(int x, int y, int z)
{    
    M3D[x][y][z].isOn = false;
}

//Ativação dos voxels nos intervalos inciais (x0,y0,z0) e finais(x1,y1,z1) e atribuição deles nas cores atuais do desenho.
void sculptor::putBox(int x0, int x1, int y0, int y1, int z0, int z1) //x0,y0,z0 = inciais; x1,y1,z1=finais
{

    for(int i = x0; i < x1; i++)
    {
        for(int j = y0; j < y1; j++)
        {
            for(int k = z0; k< z1; k++)
            {
                putVoxel(i,j,k); // Chamada da função para ativar o voxel na posição x, y e z, isOn nível lógico alto, atribuindo a cor do atual desenho.
            }
        }
    }

}

//Desativação dos voxels nos intervalos inciais (x0,y0,z0) e finais(x1,y1,z1) e atribuição deles nas cores atuais do desenho.
void sculptor::cutBox(int x0, int x1, int y0, int y1, int z0, int z1) //x0,y0,z0 = iniciais; x1,y1,z1=finais
{

    for(int i = x0; i < x1; i++)
    {
        for(int j = y0; j < y1; j++)
        {
            for(int k = z0; k< z1; k++)
            {
                cutVoxel(i,j,k); // Chamada da função para desativar o voxel na posição x, y e z, isOn nível lógico baixo, atribuindo a cor do atual desenho.
            }
        }
    }

}

//Ativação dos voxels que satisfazem a equação da esfera e atribui as mesmas cores ao atual de desenho.
void sculptor::putSphere(int xcenter, int ycenter, int zcenter, int radius)
{
    for(int i = 0; i<nx; i++)
    {
        for(int j = 0; j<ny; j++)
        {
            for(int k = 0; k<nz; k++)
            {
                if(((i - xcenter)*(i - xcenter) + (j - ycenter)*(j - ycenter) + (k - zcenter)*(k - zcenter)) <= radius*radius)
                {
                    M3D[i][j][k].r = r;
                    M3D[i][j][k].g = g;
                    M3D[i][j][k].b = b;
                    M3D[i][j][k].a = a;
                    M3D[i][j][k].isOn = true;
                }
            }
        }
    }
}

//Desativação dos voxels que satisfazem a equação da esfera e atribui as mesmas cores ao atual de desenho.
void sculptor::cutSphere(int xcenter, int ycenter, int zcenter, int radius)
{
    for(int i = 0; i<nx; i++)
    {
        for(int j = 0; j<ny; j++)
        {
            for(int k = 0; k<nz; k++)
            {
                if(((i - xcenter)*(i - xcenter) + (j - ycenter)*(j - ycenter) + (k - zcenter)*(k - zcenter)) <= radius*radius)
                {
                    M3D[i][j][k].isOn = false;                    
                }
            }
        }
    }
}


//Ativação dos voxels que satisfazem a elipsóide e atribui as mesmas cores ao atual de desenho.
void sculptor::putEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
    for(int i = 0; i<nx; i++)
    {
        for(int j = 0; j<ny; j++)
        {
            for(int k = 0; k<nz; k++)
            {
                if(((pow((i - xcenter),2)/(float)pow(rx,2) + (pow((j - ycenter),2))/(float)pow(ry,2) + (pow((k - zcenter),2))/(float)pow(rz,2)) <= 1))
                {
                    M3D[i][j][k].r = r;
                    M3D[i][j][k].g = g;
                    M3D[i][j][k].b = b;
                    M3D[i][j][k].a = a;
                    M3D[i][j][k].isOn = true;
                }
            }
        }
    }
}

//Desativação dos voxels que satisfazem a equação da elipsóide e atribui as mesmas cores ao atual de desenho.
void sculptor::cutEllipsoid(int xcenter, int ycenter, int zcenter, int rx, int ry, int rz)
{
    for(int i = 0; i<nx; i++)
    {
        for(int j = 0; j<ny; j++)
        {
            for(int k = 0; k<nz; k++)
            {
                if(((pow((i - xcenter),2)/(float)pow(rx,2) + (pow((j - ycenter),2))/(float)pow(ry,2) + (pow((k - zcenter),2))/(float)pow(rz,2)) <= 1))
                {
                    M3D[i][j][k].isOn = false;
                }
            }
        }
    }
}

// Escopo para a criação do arquivo em formato *.off.
void sculptor::writeOFF(const char* filename)
{
    /* FORMATO DO ARQUIVO OFF
        OFF
        NVertices  NFaces  NArestas
        x[0]  y[0]  z[0]
        ...
        x[NVertices-1]  y[NVertices-1]  z[NVertices-1]
        Nv v[0] v[1] ... v[Nv-1]  r g b a
        Nv v[0] v[1] ... v[Nv-1]  r g b a
        ...
        Nv v[0] v[1] ... v[Nv-1]  r g b a
    */

    int x, y, z, t, index;
    float lado = 0.5;
    ofstream f;
    t = 0;
    f.open(filename);
    f << "OFF\n";

    for(x = 0; x < nx; x++)
    {
        for(y = 0; y < ny; y++)
        {
            for(z = 0; z < nz; z++)
            {
                if(M3D[x][y][z].isOn)
                {
                    t++;  // Enviar informações de voxel para o arquivo OFF, isto é, quais valores dimensionais da matriz estão ligados a ela.
                }
            }
        }
     }

    f << t*8 << " " << t*6 << " 0 \n"; // 8 vertíces, 6 faces  e 0 arestas, para a formação de um cubo.
    for(x = 0; x < nx; x++)
    {
        for(y = 0; y < ny; y++)
        {
            for(z = 0; z < nz; z++)
            {
                if(M3D[x][y][z].isOn)
                {
                    /* 
                     Os vértices do voxel para a formação do cubo.
                     Por padrão: x= -0.5 ; y= 0.5 ; z= -0.5 -> Posição (0;0;0) */
                    f << x - lado << " " << y + lado << " " << z - lado << "\n" << flush; //Vertice 0
                    f << x - lado << " " << y - lado << " " << z - lado << "\n" << flush; //Vertice 1
                    f << x + lado << " " << y - lado << " " << z - lado << "\n" << flush; //Vertice 2
                    f << x + lado << " " << y + lado << " " << z - lado << "\n" << flush; //Vertice 3
                    f << x - lado << " " << y + lado << " " << z + lado << "\n" << flush; //Vertice 4
                    f << x - lado << " " << y - lado << " " << z + lado << "\n" << flush; //Vertice 5
                    f << x + lado << " " << y - lado << " " << z + lado << "\n" << flush; //Vertice 6
                    f << x + lado << " " << y + lado << " " << z + lado << "\n" << flush; //Vertice 7
                }
            }
        }
    }

    t = 0; // Contador de voxel iniciará em zero. 
 
    for(x = 0; x < nx; x++)
    {
        for(y = 0; y < ny; y++)
        {
            for(z = 0; z < nz; z++)
            {
                if(M3D[x][y][z].isOn)
                {
                    index = t*8;
                    // PRIMEIRA FACE (Face 0: P0 P3 P2 P1)
                    f << fixed;
                    f << 4 << " " << index + 0 << " " << index + 3 << " " << index + 2 << " " << index + 1 << " ";
                    f << setprecision(2) << M3D[x][y][z].r << " " << setprecision(2) << M3D[x][y][z].g << " " << setprecision(2) << M3D[x][y][z].b << " " << setprecision(2) << M3D[x][y][z].a << "\n";
                    
                    // SEGUNDA FACE (Face 1: P4 P5 P6 P7)
                    f << 4 << " " << index + 4 << " " << index + 5 << " " << index + 6 << " " << index + 7 << " ";
                    f << setprecision(2) << M3D[x][y][z].r << " " << setprecision(2) << M3D[x][y][z].g << " " << setprecision(2) << M3D[x][y][z].b << " " << setprecision(2) << M3D[x][y][z].a << "\n";
                    
                    // TERCEIRA FACE (Face 2: P0 P1 P5 P4)
                    f << 4 << " " << index + 0 << " " << index + 1 << " " << index + 5 << " " << index + 4 << " ";
                    f << setprecision(2) << M3D[x][y][z].r << " " << setprecision(2) << M3D[x][y][z].g << " " << setprecision(2) << M3D[x][y][z].b << " " << setprecision(2) << M3D[x][y][z].a << "\n";
                    
                    // QUARTA FACE (Face 3: P0 P4 P7 P3)
                    f << 4 << " " << index + 0 << " " << index + 4 << " " << index + 7 << " " << index + 3 << " ";
                    f << setprecision(2) << M3D[x][y][z].r << " " << setprecision(2) << M3D[x][y][z].g << " " << setprecision(2) << M3D[x][y][z].b << " " << setprecision(2) << M3D[x][y][z].a << "\n";
                    
                    // QUINTA FACE (Face 4: P7 P6 P2 P3)
                    f << 4 << " " << index + 7 << " " << index + 6 << " " << index + 2 << " " << index + 3 << " ";
                    f << setprecision(2) << M3D[x][y][z].r << " " << setprecision(2) << M3D[x][y][z].g << " " << setprecision(2) << M3D[x][y][z].b << " " << setprecision(2) << M3D[x][y][z].a << "\n";
                    
                    // SEXTA FACE (Face 5: P1 P2 P6 P5)
                    f << 4 << " " << index + 1 << " " << index + 2 << " " << index + 6 << " " << index + 5 << " ";
                    f << setprecision(2) << M3D[x][y][z].r << " " << setprecision(2) << M3D[x][y][z].g << " " << setprecision(2) << M3D[x][y][z].b << " " << setprecision(2) << M3D[x][y][z].a << "\n";
                    
                    
                    t++;  // Esse contador fará o incremento de todos os voxel, formando assim, um cubo.
                }
            }
        }
    }

    f.close();
}