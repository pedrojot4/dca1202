#include<stdio.h>
#include<stdlib.h>
#include<math.h>

void soma(float *v1, float *v2, float *v3, int m){

int r;

    for(r=0; r<m; r++){
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

printf("\n Tamanho dos vetores: ");
scanf("%d", &n);
printf("\n");

float vet1[n], vet2[n], vet3[n];

for(i=0; i<n; i++){
    printf("vet1[");
    printf("%d", i);
    printf("] = ");
    scanf("%d", &vet1[i]); 
}
printf("\n");

for(i=0; i<n; i++){
    printf("vet2[");
    printf("%d", i);
    printf("] = ");
    scanf("%d", &vet2[i]); 
}

soma(vet1, vet2, vet3, n);

    return 0;
}