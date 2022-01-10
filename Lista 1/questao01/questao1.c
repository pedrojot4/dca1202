#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){

 int i=3, j=5;
 int *p, *q, equacao;
 p = &i;            // p recebe o end 3
 q = &j;            // q recebe o end 5

 p == &i;           // Comparando o endereço de p e i     
 *p - *q;           // 3 - 5 = -2

 **&p;              // Matriz! 

 equacao = 3 - *p/(*q) + 7;

 printf ("Resultado: %d", equacao); 

 /*
 #=============================================================#
 # O resultado é 10. Devido a expressão *p/(*q) ser zero.      #
 # Uma vez que, na linha 12, os endereços são diferentes.      #
 # Logo a sentença é falsa e possui nível lógico baixo (0).    #
 #=============================================================#
 */

    return 0;
}