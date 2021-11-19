#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void produtomatricial(int lineA, int ColA, int ColB, int mmA[lineA][ColA], int mmB[ColA][ColB], int mmC[lineA][ColB])
{

    for (int i = 0; i < lineA; i++)
    {
        for (int j = 0; j < ColB; j++)
        {
            for (int k = 0; k < ColA; k++)
            {
                mmC[i][j] = mmC[i][j] + (mmA[i][k] * mmB[k][j]);
            }
        }
    }
}

int main()
{

    /*
    i linha  ;
    j coluna ;
    */
    int ai, bi, abj, i, j;
    printf("\n Numero de linhas da Matriz A:");
    scanf("%d", &ai);

    printf("\n Numero de colunas da Matriz A e Linhas Matriz B:");
    scanf("%d", &abj);

    printf("\n Numero de colunas da Matriz B:");
    scanf("%d", &bi);

    int mtA[ai][abj], mtB[abj][bi], mtC[ai][bi];

    for (i = 0; i < ai; i++)
    {
        for (j = 0; j < abj; j++)
        {
            printf("\nDigite os conteudos da matriz A[%d][%d]:", i, j);
            scanf("%d", &mtA[i][j]);
            mtC[i][j] = 0;
        }
    }

    for (i = 0; i < abj; i++)
    {
        for (j = 0; j < bi; j++)
        {
            printf("\nDigite os conteudos da matriz B[%d][%d]:", i, j);
            scanf("%d", &mtB[i][j]);
            mtC[i][j] = 0;
        }
    }

    produtomatricial(ai, abj, bi, mtA, mtB, mtC);

    for (i = 0; i < ai; i++)
    {
        for (j = 0; j < bi; j++)
        {

            printf("\nMatriz C:[%d][%d]: %d", i, j, mtC[i][j]);
        }
    }

    return 0;
}
