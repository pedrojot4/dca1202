#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void FuncaoOrdena(int x, int *a) 
{

    int aux;
    for (int i = 0; i < x; i++){                                   
        for (int k = i + 1; k < x; k++){                               
            if (a[i] > a[k]){                
                aux = a[i];  
                a[i] = a[k]; 
                a[k] = aux;             
            }                
        }
    }
}

int main()
{

    int tam, i, k;                                                         //  Os ponteiros são variáveis que guardam um endereço de memória.
    float *var, aux;                                                       //  Os ponteiros para uma funçao representa uma melhor otimizaçao do codigo, 
                                                                           //  uma implementaçao mais generica.
    printf("\n");                                                          //  Já que, em muitos casos substituem o trabalho braçal de reescrever a função.
    printf("Tamanho do vetor: ");
    scanf("%d", &tam);
    printf("\n");

    var = malloc(tam * sizeof(int)); 

    if (var == NULL){
        printf("Nao ha memoria dinamica suficiente \n");
    }
    
    else{
        for (i = 0; i < tam; i++){
            printf("Digite o vetor[%d]: ", i);
            scanf("%f", &var[i]);
        }
        printf("\n");
        
        FuncaoOrdena(tam, var);
        for (i = 0; i < tam; i++){
            printf("Vetor ordenado[%d]: %f\n", i, var[i]);
        }
    }
    printf("\n");

    free(var);
    return 0;
}