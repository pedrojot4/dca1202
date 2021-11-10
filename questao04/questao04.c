#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main() {
int valor;
int *p1;
float temp;
float *p2;
char aux;
char *nome = "Ponteiros";
char *p3;
int idade;
int vetor[3];
int *p4;
int *p5;

/* (a) */
valor = 10;
p1 = &valor; //        Aqui está sendo mostrado o conteúdo de p1. Caso a linha 21 estivesse na linha 20.
*p1 = 20;    //        Então mostraria o conteúdo valendo 20. As linhas 27 e 28 seguem a mesma lógica.

printf("Conteudo atulizado do valor referente a p1: %d \n", valor);

/* (b) */
temp = 26.5;
p2 = &temp;
*p2 = 29.0;
printf("Conteudo atulizado do valor referente a p2: %.1f \n", temp);

/* (c) */
p3 = &nome[0];
aux = *p3;
printf("Mostra o caracter da primeira posicão associado a palavra Ponteiros: %c \n", aux);

/* (d) */
p3 = &nome[4];
aux = *p3;
printf("Mostra o caracter da quinta posicão associado a palavra Ponteiros: %c \n", aux);

/* (e) */
p3 = nome;
printf("Associando a posição zero da palavra Ponteiros: %c \n", *p3);

/* (f) */
p3 = p3 + 4;
printf("Mostrara o quinto caracter da palavra Ponteiros %c \n", *p3);

/* (g) */
p3--;
printf("Decrementara um caracter: %c \n", *p3);

/* (h) */
vetor[0] = 31;
vetor[1] = 45;
vetor[2] = 27;
p4 = vetor;
idade = *p4;
printf("Mostrara o primeiro conteúdo do vetor: %d \n", idade);

/* (i) */
p5 = p4 + 1;
idade = *p5;
printf("Mostra o valor do vetor[1]: %d \n", idade);

/* (j) */
p4 = p5 + 1;
idade = *p4;
printf("Mostra o valor do vetor[2]:% d \n", idade);

/* (l) */
p4 = p4 - 2;
idade = *p4;
printf("Volta para o vetor[1]: %d \n", idade);

/* (m) */
p5 = &vetor[2] - 1;
printf("Volta para o veotr[1]: %d \n", *p5);
/* (n) */
p5++;
printf("Volta para o vetor[2]: %d \n", *p5);
return(0);
}