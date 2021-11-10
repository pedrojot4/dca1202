#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){

 int pulo[]={1,2,3,4,5}, a;

 a = *(pulo + 2); // Para referenciar o conteudo do teceiro elemento do vetor.
 
printf("Terceiro elemento do vetor: %d", a);

    return 0;
}