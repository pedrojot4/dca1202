#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void somadosvetores(int n, int *a, int *b, int *sumatot)
{

    for (int i = 0; i < n; i++)
    {

        sumatot[i] = a[i] + b[i]; /* Função da operação da soma. */
    }
}

int main()
{

    int *var_1, *var_2, *soma, tam_vector, i;

    printf("Digite o tamanho do vetor:");
    scanf("%d", &tam_vector);

    var_1 = malloc(tam_vector * sizeof(int)); /* Alocação do primeiro vetor de "tam_vector" tamanhos.      */
    var_2 = malloc(tam_vector * sizeof(int)); /* Alocação do segundo vetor de "tam_vector" tamanhos.       */
    soma = malloc(tam_vector * sizeof(int));  /* Alocação do vetor de soma contendo "tam_vector" tamanhos. */

    if ((var_1 || var_2) == NULL)
    {

        printf("Nao ha espaco na memoria!"); /* Verificação se há memória suficiente. */
    }
    else
    {

        for (i = 0; i < tam_vector; i++)
        {

            printf("Digite o valor do Vetor_1[%d]: ", i);
            scanf("%d", &var_1[i]); /* Inserção somente dos valores do primeiro vetor. */
        }

        for (i = 0; i < tam_vector; i++)
        {

            printf("Digite o valor do Vetor_2[%d]: ", i);
            scanf("%d", &var_2[i]); /* Inserção somente dos valores do segundo vetor.  */
        }

        somadosvetores(tam_vector, var_1, var_2, soma); /* Chamada da função da linha 5. */

        for (i = 0; i < tam_vector; i++)
        {
            printf("\n");
            soma[i] = var_1[i] + var_2[i];
            printf("Pos soma:\n");
            printf("Soma[%d] = %d\n", i, soma[i]); /* Impressão dos conteúdos dos vetores após a realização da operação de soma. */
            printf("\n");
        }
    }

    free(soma);
    free(var_2);
    free(var_1);

    return 0;
}