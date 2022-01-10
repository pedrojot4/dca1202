#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main(){

    int vet[] = {4,9,13};
    int i;
    
        for(i=0;i<3;i++)
        {

        printf("Conteudo de cada posicao: %d\n",*(vet+i));

        }

/*
#=========================================================#
# Ele exibe o valor do conteúdo de cada posição do vetor. #
#=========================================================#
*/
 
    return 0;
}