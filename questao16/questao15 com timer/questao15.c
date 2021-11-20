#include <stdio.h>
#include <stdlib.h> /* qsort */
#include <math.h>
#include <time.h>

int compare(const void *a, const void *b)
{

    return (*(int *)a - *(int *)b);

    /*
 #================================================================================================================#
 #  Uma das exigências de usar o qsort, é que o usuário forneça a leitura de dois ponteiros genéricos para void.  #
 #  Na linha 8, temos a conversão do ponteiro void para ponteiro int. Além disso, o primeiro asterísco indica     #
 #  a recuperação do conteúdo daquela dada posição. No caso do exercício, pede-se que os números sejam em         #
 #  ordem crescente, para isso, o return precisa que o conteúdo da operação seja maior que um. Dessa forma,       #
 #  esses conteúdos serão trocados de posição (alocação dinâmica), deixando assim, o estabelecimento da           #
 #  ordem crescente. Caso o return seja igual a "0", implica dizer que eles possuem o mesmo conteúdo. E em        #
 #  último caso, se o return retorna um termo menor que zero, indica que o conteúdo do ponteiro de a é menor      #
 #  que o conteúdo do ponteiro em b. Logo não haverá a troca do conteúdo dos endereços. Haja visto que se quer    #
 #  deixar em ordem crescente.                                                                                    #
 #================================================================================================================#
 */
}

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

int main(int argc, char *argv[])
{

    float tempo;
    time_t t_ini, t_fim; /* Variáveis do time T. */

    t_ini = time(NULL); /* Retorna o tempo em segundos. */
    for (int i = 0; i < 50000; i++)
    {
        for (int j = 0; j < 50000; j++)
            ;
    }

    int tam_vector, i;
    float *var;

    printf("Digite o valor do tamanho do vetor: ");
    scanf("%d", &tam_vector);

    var = malloc(tam_vector * sizeof(int)); /* Tamanho do vetor tipo int, ou seja, tam_vector* 4 bytes = (var) em bytes. */

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

        printf("Nao ha memoria dinamica suficiente para a operacao! \n"); /* Verificação se há memória dinâmica suficiente disponível. */
    }

    else
    {

        for (i = 0; i < tam_vector; i++)
        {

            printf("Digite o numero do vetor[%d]: ", i); /* Digitar os conteúdos do vetor. */
            scanf("%f", &var[i]);
        }

        qsort(var, tam_vector, sizeof(int), compare); //  #==================================================#
        funcao_ordenacao(tam_vector, var);            //  # var= Vetor.                                      #
                                                      //  # tam_vector = Tamanho do vetor.                   #
                                                      //  # sizeof(int) = Tamanho de cada elemento do vetor. #
                                                      //  # compare = Função compare da linha 5.             #
                                                      //  #==================================================#

        for (i = 0; i < tam_vector; i++)
        {

            printf("O vetor[%d]: %f\n", i, var[i]); /* Impressão dos valores em ordem crescente. */
        }
    }

    free(var);

    t_fim = time(NULL); /* Retorna o tempo final em segundos. */

    tempo = difftime(t_fim, t_ini); /* Função de diferença dos tempo inicial e do tempo final. */
    printf("\nTempo: %f", tempo);

    return 0;
}