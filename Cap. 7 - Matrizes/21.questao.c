/*Faça um programa que preencha uma matriz 5 ? 5 de números reais. A seguir, o programa deverá
multiplicar cada linha pelo elemento da diagonal principal daquela linha e mostrar a matriz após as 
multiplicações.*/
#include <stdio.h>

int main()
{
    float matriz[5][5], novo_num[5][5];
    int i, j;

    printf("Preencha uma matriz[5][5]\n\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d LINHA\n-----------\n",i+1);
        for(j = 0; j < 5; j++)
        {
            printf("[%d] Numero",j+1);
            scanf("%f",&matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz Normal\n\n");
    for(i = 0 ; i < 5; i++)
    {
        printf("Elemento da diagonal ----> %.1f |\t",matriz[i][i]);
        for(j = 0; j < 5; j++)
        {
            printf("%.1f\t",matriz[i][j]);
        }
        printf("\n");
    }

    printf("\nMatriz com cada elemento da linha multiplicado pelo elemento da diagonal\n\n");
    for(i = 0 ; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            novo_num[i][j] = matriz[i][i] * matriz[i][j];
            printf("%.1f\t",novo_num[i][j]);
        }
        printf("\n");
    }

    return 0;
}