#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){

int mat[4], *p, x;

p = mat + 1;              // Incrementa um bit no bot menos significativo do próximo byte 
p = mat++;                // Incrementa um bit no bot menos significativo do próximo byte 
p = ++mat;                // Errado. O ++ deveria está após o t do mat para haver o incremento.
x = (*mat)++;             // Errado. A indicação do poteiro deveria está fora do parantese, por exemplo: *(mat)++

printf ("%d", p);
 

    return 0;
}