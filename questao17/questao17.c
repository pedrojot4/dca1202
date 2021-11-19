#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void soma(int *v1, int *v2, int *v3, int m){

int r;

    for(r=0; r<m; r++){                            //Função que soma os vetores e exibe o resultado.
    v3[r]=(v1[r]+v2[r]);
}
printf("\n vet1 + vet2 = ( ");

for(r=0; r<m; r++){
    printf("%d ", v3[r]);
}
printf(")");

}

int main (){

int n, i;

printf("\n Tamanho dos vetores: ");               //Digite o tamanho dos vetores.
scanf("%d", &n);
printf("\n");

int vet1[n], vet2[n], vet3[n];

for(i=0; i<n; i++){
    printf("vet1[");
    printf("%d", i);
    printf("] = ");                              //Digite o conteudo do vetor 1.
    scanf("%d", &vet1[i]); 
}
printf("\n");

for(i=0; i<n; i++){
    printf("vet2[");
    printf("%d", i);
    printf("] = ");                               //Digite o conteudo do vetor 2.
    scanf("%d", &vet2[i]); 
}

soma(vet1, vet2, vet3, n);                         //Chama a função soma.

    return 0;
}
