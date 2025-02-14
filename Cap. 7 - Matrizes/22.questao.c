/*Crie um programa que preencha uma matriz [6][10], some as colunas individualmente e acumule as somas na 7a
linha da matriz. O programa deverá mostrar o resultado de cada coluna.*/
#include <stdio.h>

int main()
{
    int matriz[6][10];
    int soma[10] = {0};
    int i, j;

    for(i = 0; i < 6; i++)
    {                                                       
        printf("%d LINHA\n------------\n",i+1);
        for(j = 0; j < 10; j++)
        {                                      
            printf("[%d] Numero: ",j+1);
            scanf("%d",&matriz[i][j]);
        }
        printf("\n");
    }

    // Matriz normal
    for(i = 0; i < 6; i++)
    {
        for(j = 0; j < 10; j++)
        {
            printf("%d\t",matriz[i][j]);
        }
        printf("\n");
    }

    // Soma das colunas
    printf("----------------------------------------------------------------------------\n");
    for(j = 0; j < 10; j++)
    {
        for(i = 0; i < 6; i++)
        {
            soma[j] += matriz[i][j];
        }
        printf("%d\t",soma[j]);
    }

    return 0;
}