#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void funcao_ordenacao(int n, int *a) /* Função de ordem crescente. */
{

    int aux;
    for (int i = 0; i < n; i++)         // #===========================================================#
    {                                   // #  Este for fez-se necessário a sua criação, para realizar  #
        for (int k = i + 1; k < n; k++) // #  a comparação entre o vetor anterior (var[i]) com o vetor #
                                        // # de posição a frente (var[k]) do mesmo. Perceba que este   #
        {                               // # vetor começa na posição i+1.                              #
                                        // #===========================================================#

            if (a[i] > a[k])
            {                // #===============================================================================================#
                aux = a[i];  // # Suponha que no a[i=0] = 5 e o a[k=1]= 2. Logo, o contéudo de a[i=0] irá para a variável aux.  #
                a[i] = a[k]; // # O conteúdo que estava em a[k=1]=2 irá para a[i=0], atualizando assim, o seu conteúdo.         #
                a[k] = aux;  // # Dessa forma, o contéudo do aux=5 irá para o a[k=1]. Trocando assim suas posições.             #
            }                // #===============================================================================================#
        }
    }
}

int main()
{

    int tam_vector, i, k;
    float *var, aux;

    printf("Digite o valor do tamanho do vetor: ");
    scanf("%d", &tam_vector);

    var = malloc(tam_vector * sizeof(int)); // Tamanho do vetor tipo int, ou seja, tam_vector* 4 bytes = (var) em bytes.

    /* 
#=================#
# char:   1 byte  #
# int:    4 bytes #
# float:  4 bytes #
# double: 8 bytes #
#=================#
*/

    if (var == NULL)
    {

        printf("Nao ha memoria dinamica suficiente para a operacao! \n");
    }

    else
    {

        for (i = 0; i < tam_vector; i++)
        {

            printf("Digite o numero do vetor[%d]: ", i); //Digitar o tamanho do vetor.
            scanf("%f", &var[i]);
        }

        funcao_ordenacao(tam_vector, var);

        for (i = 0; i < tam_vector; i++)
        {

            /* Impressão dos valores em ordem crescente. */
            printf("O vetor[%d]: %f\n", i, var[i]);
        }
    }

    free(var);
    return 0;
}