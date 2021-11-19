#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){

 char   x[4]= "PONT";
 float  y[4]={24,56,39,97};
 double z[4]={10,30,20,40};
 int    w[4]={1,5,3,6};

 /*
 
 1 byte = 32 bits
 
 char   ocupa 1 byte
 int    ocupa 2 byts
 float  ocupa 4 byts
 double ocupa 8 byte.

 */ 

printf("\nConteudo Char: %c", *x);        // = x[0]
printf("\nConteudo Char: %c", *(x+1));    // = x[1]
printf("\nConteudo Char: %c", *(x+2));    // = x[2]  
printf("\nConteudo Char: %c", *(x+3));    // = x[3]

printf("\nConteudo Float: %f", *y);       // = y[0]
printf("\nConteudo Float: %f", *(y+1));   // = y[1]
printf("\nConteudo Float: %f", *(y+2));   // = y[2]           
printf("\nConteudo Float: %f", *(y+3));   // = y[3]

printf("\nConteudo Double: %f", *z);      // = z[0]
printf("\nConteudo Double: %f", *(z+1));  // = z[1]
printf("\nConteudo Double: %f", *(z+2));  // = z[2]
printf("\nConteudo Double: %f", *(z+3));  // = z[3]

printf("\nConteudo Int: %d", *w);         // = w[0]
printf("\nConteudo Int: %d", *(w+1));     // = w[1]
printf("\nConteudo Int: %d", *(w+2));     // = w[2]
printf("\nConteudo Int: %d", *(w+3));     // = w[3]

    return 0;
}