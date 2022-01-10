#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){

 int i=5, *p;

 p= &i;

 printf (" Endereco: %x\n Conteudo: %d\n Ponteiro Duplo do endereco: %d\n Ponteiro Duplo com 3: %d\n Ponteiro duplo de endereco +4 byte: %d\n", p, *p+2, **&p, 3**p, **&p+4);

  // Endereco: 4094 (real = 61ff1c);
  // Conteudo: 7;
  // Ponteiro Duplo do endereco: 5;
  // Ponteiro Duplo com 3: 15;
  //Ponteiro duplo de endereco +4 byte: 9.


 /*

#===============#
#               #
#===============#
#               #
#===============#
#               #
#===============#
 
 */

    return 0;
}