#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){

 int i, *p=2, *q=2;

    // p = i;                      Não é adequado. Seria mais adequado criar uma variável ao invés de um poteiro.
    // q = &j;                     Correto
    // p = &*&i;                   Correto
    //i = (*&)j;                   Não é possível acessar o endereço e o conteúdo ao mesmo tempo
    // i = *&j;                    Correto
    // i = *&*&j;                  Não é adequado. Ela fica repetindo a mesma operação por 2x.
    //q = *p;                      Correto.
    // i = (*p)++ + *q;            Incorreto

printf("i = %d", i);

 

    return 0;
}
