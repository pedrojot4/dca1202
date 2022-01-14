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
    togemon.putEllipsoid(22,25,10, 12,20,10);  
    
    // Braços
    togemon.setColor( 0, 1, 0, 1); // Verde           
    togemon.putBox(34, 38, 20, 26, 10 , 14); // Braço Direita      
    togemon.putBox(7, 11, 20, 26, 10 , 14); // Braço Esquerdo      

    // Mãos
    togemon.setColor( 0, 1, 0, 1); // Verde           
    togemon.putBox(38, 43, 20, 26, 10 , 20); // Mão Direita      
    togemon.putBox(2, 7, 20, 26, 10 , 20); // Mão Esquerda  

    // Luvas
    togemon.setColor( 1, 0, 0, 1); // Vermelho           
    togemon.putSphere(40,23,24,5); //Luva Direita
    togemon.putSphere(4,22,24,5); //Luva Esquerda

    // Pernas
    togemon.setColor( 0, 1, 0, 1); // Verde
    togemon.putBox(24.5, 28.5, 1, 14, 10 , 14); // Perna Direita
    togemon.putBox(17.5, 21.5, 1, 14, 10 , 14); // Perna Esquerda

    // Pés
    togemon.setColor( 0, 1, 0, 1); // Verde 
    togemon.putBox(24.5,28.5,1,3,14,19); // Pé direito   
    togemon.putBox(17.5,21.5,1,3,14,19); // Pé esquerdo    
    
    // Olhos
     togemon.setColor( 0, 0, 0, 1); // Preto
     togemon.putBox(24,27,33,36,19,20); // Olho direito               
     togemon.putVoxel(25,36,19); // Detalhes do olho direito 
     togemon.putVoxel(25,32,19); // Detalhes do olho direito
     togemon.putBox(18,21,33,36,19,20); // Olho esquerdo    
     togemon.putVoxel(19,36,19); // Detalhes do olho esquerdo 
     togemon.putVoxel(19,32,19); // Detalhes do olho esquerdo       
 
     // Boca
     togemon.setColor( 0, 0, 0, 1); // Preto     
     togemon.putBox(21, 24, 23, 31, 19 , 21);      
     togemon.putVoxel(22,31,20); // Detalhes da boca 
     togemon.putVoxel(22,22,20); // Detalhes da boca     
  
    // Coroa
     togemon.setColor( 1, 0.5, 0, 1); // Laranja     
     togemon.putBox(20, 25, 45, 46, 8 , 13); // Detalhes da base
     togemon.putBox(21, 24, 46, 47, 9 , 12); // Detalhes da base
     togemon.putVoxel(22,44,10); // Detalhes da sub-base
     togemon.putVoxel(22,45,10); // Detalhes da sub-base
     togemon.putVoxel(22,46,10); // Detalhes da sub-base 

    togemon.putVoxel(23,47,10); // Detalhes à direita
     togemon.putVoxel(24,48,10); // Detalhes à direita
     togemon.putVoxel(25,49,10); // Detalhes à direita
     togemon.putVoxel(26,50,10); // Detalhes à direita
     togemon.putVoxel(27,51,10); // Detalhes à direita
     togemon.putVoxel(28,50,10); // Detalhes à direita
     togemon.putVoxel(29,49,10); // Detalhes à direita    

     togemon.putVoxel(21,47,10); // Detalhes à esquerda
     togemon.putVoxel(20,48,10); // Detalhes à esquerda
     togemon.putVoxel(19,49,10); // Detalhes à esquerda
     togemon.putVoxel(18,50,10); // Detalhes à esquerda
     togemon.putVoxel(17,51,10); // Detalhes à esquerda
     togemon.putVoxel(16,50,10); // Detalhes à esquerda
     togemon.putVoxel(15,49,10); // Detalhes à esquerda   

     togemon.putVoxel(22,50,7); // Detalhes à atrás
     togemon.putVoxel(22,49,8); // Detalhes à atrás
     togemon.putVoxel(22,48,9); // Detalhes à atrás
     togemon.putVoxel(22,51,6); // Detalhes à atrás
     togemon.putVoxel(22,52,5); // Detalhes à atrás
     togemon.putVoxel(22,53,4); // Detalhes à atrás
     togemon.putVoxel(22,52,3); // Detalhes à atrás
     togemon.putVoxel(22,51,2); // Detalhes à atrás     

     togemon.putVoxel(22,47,10); // Detalhes à frente
     togemon.putVoxel(22,48,11); // Detalhes à frente
     togemon.putVoxel(22,49,12); // Detalhes à frente
     togemon.putVoxel(22,50,13); // Detalhes à frente
     togemon.putVoxel(22,49,14); // Detalhes à frente

    // Salva o escultor digital em formato "togemon.off"
    togemon.writeOFF("togemon.off");

    return 0;
}
