#include<stdio.h>
#include<stdlib.h>
#include<math.h>

 int main(){

  int vet[] = {4,9,13};
  int i;

    for(i=0;i<3;i++)
    {

    printf("\n Endereco de cada posicao: %X",vet+i);

    }

/*
#=========================================================#
# Ele exibe o valor do endereço de cada posição do vetor. #
#=========================================================#
*/
 
    return 0;
}