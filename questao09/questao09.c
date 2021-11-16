#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){

 char   x[4]= "PQRS", *pc;
 float  y[4]={24,56,39,97}, *pf;
 double z[4]={1000,2000,3000,4000}, *pd;
 int    w[4]={1,2,3,4}, *pi;

pc = &x[0];
pf = &y[0];
pd = &z[0];
pi = &w[0];

 /*
 
 1 byte = 32 bits
 
 char   ocupa 1 byte
 int    ocupa 2 byts
 float  ocupa 4 byts
 double ocupa 8 byte.

 */ 

printf("\nConteudo Char: %c", *x);
printf("\nConteudo Char: %c", *x+1);
printf("\nConteudo Char: %c", *x+2);
printf("\nConteudo Char: %c", *x+3);

printf("\nConteudo Float: %f", *y);
printf("\nConteudo Float: %f", *y+1);
printf("\nConteudo Float: %f", *y+2);
printf("\nConteudo Float: %f", *y+3);

printf("\nConteudo Double: %f", *z);
printf("\nConteudo Double: %f", *z+1);
printf("\nConteudo Double: %f", *z+2);
printf("\nConteudo Double: %f", *z+3);


printf("\nConteudo Int: %d", *w);
printf("\nConteudo Int: %d", *w+1);
printf("\nConteudo Int: %d", *w+2);
printf("\nConteudo Int: %d", *w+3);

    return 0;
}