#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){

 char   x[4];
 float  y[4];
 double z[4];
 int    w[4]={1,2,3,4}, *pc, *pf, *pd, *pi;

pc = x[0];
//pf = y[0];
//pd = z[0];
pi = w[0];
//

 /*
 
 1 byte = 32 bits
 
 char   ocupa 1 byte
 int    ocupa 2 byts
 float  ocupa 4 byts
 double ocupa 8 byte.

 */ 

printf("\nAdress Char: %d", &x);
printf("\nAdress Char: %d", &x+1);
printf("\nAdress Char: %d", &x+2);
printf("\nAdress Char: %d", &x+3);

//printf("\nAdress Float: %d", &y);
//printf("\nAdress Float: %d", &y+1);
//printf("\nAdress Float: %d", &y+2);
//printf("\nAdress Float: %d", &y+3);
//
//printf("\nAdress Double: %d", &z);
//printf("\nAdress Double: %d", &z+1);
//printf("\nAdress Double: %d", &z+2);
//printf("\nAdress Double: %d", &z+3);
//

printf("\nAdress Int: %d", &w);
printf("\nAdress Int: %d", &w+1);
printf("\nAdress Int: %d", &w+2);
printf("\nAdress Int: %d", &w+3);

    return 0;
}