/*
#==================================================#
#  UNIVERSIDADE FEDERAL DO RIO GRANDE DO NORTE     #
#  CENTRO DE CIÊNCIAS E TECNOLOGIA                 #                         
#  DISCIPLINA: PROGRAMAÇÃO AVANÇADA - DCA1202      #
#  AUTORES: MARCELO FERREIRA MOTA JÚNIOR           #
#           JOÃO PEDRO SILVA ALVES                 #
#==================================================#
#   CÓDIGO REFERENTE A PARTE 1 DO PROJETO DE       #
#  CRIAÇÃO DO ESCULTOR 3D - TOGEMON (DIGIMON)      #
#==================================================#
*/

#include <iostream>
#include "sculptor.cpp"

int main(void)
{

   // Tamanho total de voxel da matriz do escultor
    sculptor togemon(100,100,100);  

    // Corpo
    togemon.setColor( 0, 1, 0, 1); // Verde           
    togemon.putEllipsoid(20,23,10, 9,20,10);    
    

    // Braços
    togemon.setColor( 0, 1, 0, 1); // Verde
    togemon.putBox(29, 33, 19, 25, 10 , 15); // Braço Direita      
    togemon.putBox(8, 12, 19, 25, 10 , 15); // Braço Esquerdo      

    // Mãos
    togemon.setColor( 0, 1, 0, 1); // Verde    
    togemon.putBox(33, 38, 19, 25, 10 , 20); // Mão Direita      
    togemon.putBox(3, 8, 19, 25, 10 , 20); // Mão Esquerda  

    // Luvas
    togemon.setColor( 1, 0, 0, 1); // Verde    
    togemon.putSphere(5,21,23,5); //Luva Direita
    togemon.putSphere(35,21,23,5); //Luva Esquerda

    // Pés
    togemon.setColor( 0, 1, 0, 1); // Verde 
    togemon.putSphere(13,3,15,3); // Pés Direita
    togemon.putSphere(27,3,15,3); // Pés Direita
    
    // Pernas
    togemon.setColor( 0, 1, 0, 1); // Verde
    togemon.putBox(12, 15, 1, 14, 10 , 14); // Perna Direita  
    togemon.putBox(26, 29, 1, 14, 10 , 14); // Perna Esquerda 
    
    // Olhos
     togemon.setColor( 0, 0, 0, 1); // Preto
     togemon.putBox(22, 25, 27, 33, 18 , 20); // Olho Direito 
     togemon.cutBox(22, 23, 27,28, 18, 20); // Corte de Voxel de detalhes do olho direito.
     togemon.cutBox(24, 25, 27,28, 18, 20); // Corte de Voxel de detalhes do olho direito.
     togemon.cutBox(24, 25, 32,33, 18, 20); // Corte de Voxel de detalhes do olho direito.
     togemon.cutBox(22, 23, 32,33, 18, 20); // Corte de Voxel de detalhes do olho direito.  
     
     
     togemon.setColor( 0, 0, 0, 1); // Preto
     togemon.putBox(16, 19, 27, 33, 18 , 20); // Olho Esquerdo
     togemon.cutBox(16, 17, 32,33, 18, 20); // Corte de Voxel de detalhes do olho esquerdo.
     togemon.cutBox(18, 19, 32,33, 18, 20); // Corte de Voxel de detalhes do olho esquerdo.
     togemon.cutBox(16, 17, 27,28, 18, 20); // Corte de Voxel de detalhes do olho esquerdo.
     togemon.cutBox(18, 19, 27,28, 18, 20); // Corte de Voxel de detalhes do olho esquerdo.
     
     // Boca
     togemon.setColor( 0, 0, 0, 1); // Preto
     togemon.putBox(19, 22, 15, 24, 20 , 21);      
     togemon.cutBox(19, 20, 15, 16, 20 , 21); // Corte de Voxel de detalhes da boca.
     togemon.cutBox(21, 22, 15, 16, 20 , 21); // Corte de Voxel de detalhes da boca.
     togemon.cutBox(21, 22, 23, 24, 20 , 21); // Corte de Voxel de detalhes da boca.
     togemon.cutBox(19, 20, 23, 24, 20 , 21); // Corte de Voxel de detalhes da boca.

    // Coroa
     togemon.setColor( 1, 0.5, 0, 1); // Laranja     
     togemon.putBox(19, 22, 43, 44, 8 , 13); // Detalhes da base
     togemon.putBox(19, 22, 44, 45, 9 , 12); // Detalhes da base
     togemon.putVoxel(20,43,10); // Detalhes da sub-base
     togemon.putVoxel(20,44,10); // Detalhes da sub-base
     togemon.putVoxel(20,45,10); // Detalhes da sub-base     
     togemon.putVoxel(19,46,10); // Detalhes à direita
     togemon.putVoxel(18,47,10); // Detalhes à direita
     togemon.putVoxel(17,48,10); // Detalhes à direita
     togemon.putVoxel(16,49,10); // Detalhes à direita
     togemon.putVoxel(21,46,10); // Detalhes à esquerda
     togemon.putVoxel(22,47,10); // Detalhes à esquerda
     togemon.putVoxel(23,48,10); // Detalhes à esquerda
     togemon.putVoxel(24,49,10); // Detalhes à esquerda
     togemon.putVoxel(20,49,7); // Detalhes à atrás
     togemon.putVoxel(20,48,8); // Detalhes à atrás
     togemon.putVoxel(20,47,9); // Detalhes à atrás
     togemon.putVoxel(20,46,10); // Detalhes à frente
     togemon.putVoxel(20,47,11); // Detalhes à frente
     togemon.putVoxel(20,48,12); // Detalhes à frente
     togemon.putVoxel(20,49,13); // Detalhes à frente

    // Salva o escultor digital em formato "togemon.off"
    togemon.writeOFF("togemon.off");

    return 0;
}
