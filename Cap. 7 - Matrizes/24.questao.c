/*. Elabore um programa que preencha uma matriz 4 ? 5, calcule e mostre um vetor com cinco posições,
onde cada posição contém a soma dos elementos de cada coluna da matriz. O programa deverá mostrar 
apenas os elementos do vetor maiores que dez. Se não existir nenhum elemento maior que dez, deverá 
mostrar uma mensagem.*/
#include <stdio.h>

int main()
{
    int matriz[4][5];
    int vetor[5] = {0};
    int veri = 0;
    int i, j;

    for(i = 0; i < 4; i++)
    {                                                       
        printf("%d LINHA\n------------\n",i+1);
        for(j = 0; j < 5; j++)
        {                                      
            printf("[%d] Numero: ",j+1);
            scanf("%d",&matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nSoma das colunas:\n\n");
    for(i = 0; i < 4; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\n-----------------------------------\n");
    for(j = 0; j < 5; j++)
    {
        for(i = 0; i < 4; i++)
        {
            vetor[j] += matriz[i][j];
            if(vetor[j] > 0)
            {
                veri = 1;
            }
        }
        if(vetor[j] >= 10)
        {
            printf("%d\t",vetor[j]);
        }
    }

    if(veri == 0)
    {
        printf("\nNenhum elemento maior d dez na matriz");
    }

    return 0;
}