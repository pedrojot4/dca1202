#include<stdio.h>
#include<stdlib.h>
#include<math.h>

int main (){

int tam_vector, i, k;
float *var, aux;

printf("Digite o valor do tamanho do vetor: ");
scanf("%d", &tam_vector);
 
var = malloc(tam_vector *sizeof(int)); // Tamanho do vetor tipo int, ou seja, tam_vector* 4 bytes = (var) em bytes.

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

printf ("Nao ha memoria dinamica suficiente para a operacao! \n");

}

   else
   {   
       
       for (i = 0; i < tam_vector ; i++)
       {        

           printf("Digite o numero do vetor[%d]: ", i);  //Digitar o tamanho do vetor.
           scanf("%f", &var[i]);  
       }

        for (i = 0; i < tam_vector; i++)
        {         
        
            for (k = i+1; k < tam_vector ; k++)         
            {
                    /* 
                    #===========================================================#
                    #  Este for fez-se necessário a sua criação, para realizar  #
                    #  a comparação entre o vetor anterior (var[i]) com o vetor #
                    # de posição a frente (var[k]) do mesmo. Perceba que este   #
                    # vetor começa na posição i+1.                              #
                    #===========================================================#
                    */           
                       

                    if (var[i] > var[k])        
                    {       
                        aux = var[i];
                        var[i] = var[k];
                        var[k] = aux;
    
                    } 
                            /* 
                            #===========================================================#
                            # No if acontece a alocação de memória do vetor. Tem-se uma #
                            # variável do tipo auxilar (aux). Nela, será armazenado o   #
                            # conteúdo do var[i] atual, pois este é maior que var[k].   #
                            # Logo, o valor de var[k] irá para var[i] e este será       #
                            # atualizado. O conteúdo que estava no auxiliar, antes da   #
                            # atualização irá para var[k].                              #
                            #===========================================================#
                            */
    
                                   
            }
        }
              

                            for (i = 0; i < tam_vector; i++)
                            {

                             /* Impressão dos valores em ordem crescente. */
                               printf ("O vetor[%d]: %f\n", i, var[i]);                                

                            }     

   }    

   
    free(var);
    return 0;
}