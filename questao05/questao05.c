#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main(void){
float vet[5] = {1.1,2.2,3.3,4.4,5.5};
float *f;
int i;
f = vet;

printf("contador/valor/valor/endereco/endereco");

    for(i = 0 ; i <= 4 ; i++)
    {
    printf("\n i = %d ",i);                     // Imprime inicial o i até o contador.
    printf("vet[%d] = %.1f ",i, vet[i]);        // Assume os valores dos vetores de cada posicao
    printf("*(f + %d) = %.1f ",i, *(f+i));      // Sera atribuido ao ponteiro os valores do vetor
    printf("&vet[%d] = %X ",i, &vet[i]);        // Informandos os enderecos na memoria de cada vetor
    printf("(f + %d) = %X",i, f+i);             // Sera designado o endereco dos elementos do vetor ao ponteiro
    }
}