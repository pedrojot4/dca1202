#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void mult(int *mA, int *mB, int *mC, int x, int y, int z){

    int i, p, q;

    for(i=0; i<x; i++){
    for(p=0; p<y; p++){
        for(q=0; q<z; q++){
            mC[i][p] = mC[i][p]+(mA[i][m]*mB[m][p]);              //Multiplica as matrizes
        }
    }
} 

}

int main (){

int n, m, r, p, i, s;

printf("\n Numero de linhas da Matriz A: ");
scanf("%d", &n);

printf("\n Numero de colunas da Matriz A = Numero de linhas da Matriz B: ");             //Digite o tamanho das matrizes
scanf("%d", &m);

printf("\n Numero de colunas da Matriz B: ");
scanf("%d", &r);
printf("\n");

int mtA[n][m], mtB[m][r], mtC[n][r];

for(i=0; i<n; i++){
    for(p=0; p<m; p++){
        printf("mtA[");
        printf("%d", i);
        printf("]");
        printf("[");                                              //Digite o conteudo da matriz A.
        printf("%d", p);
        printf("] = ");                                
        scanf("%d", &s);
        mtA[i][p] = s;
        mtC[i][p] = 0;
    }
}
printf("\n");

for(i=0; i<m; i++){
    for(p=0; p<r; p++){
        printf("mtB[");
        printf("%d", i);
        printf("]");
        printf("[");
        printf("%d", p);                                         //Digite o conteudo da matriz B.
        printf("] = ");                                
        scanf("%d", &s);
        mtB[i][p] = s;
        mtC[i][p] = 0;
    }
}
printf("\n");

mult(mtA, mtB, mtC, n, r, m);                                     //Chama a função mult.

printf("\n mtA * mtB = \n\n");

for(i=0; i<n; i++){
    for(p=0; p<r; p++){
        printf("%4d ", mtC[i][p]);                                     //Exibe o resultado.
    }
    printf("\n");
}

printf("\n");

    return 0;
}
