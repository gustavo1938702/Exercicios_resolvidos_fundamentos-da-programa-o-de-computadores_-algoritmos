/*Elabore um programa que preencha uma matriz 5 ? 5 e crie dois vetores de cinco posições cada um, que
contenham, respectivamente, as somas das linhas e das colunas da matriz. O programa deverá escrever 
a matriz e os vetores criados.*/
#include <stdio.h>

int main()
{
    int matriz[5][5];
    int vetor1[5] = {0}, vetor2[5] = {0};
    int i, j;

    for(i = 0; i < 5; i++)
    {
        printf("%d LINHA\n--------------\n",i+1);
        for(j = 0; j < 5; j++)
        {
            printf("[%d] Numero: ",j+1);
            scanf("%d",&matriz[i][j]);
        }
        printf("\n");
    }

    // Soma linhas
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            vetor1[i] +=  matriz[i][j]; 
        }
    }

    //Soma colunas
    for(j = 0; j < 5; j++)
    {
        for(i = 0; i < 5; i++)
        {
            vetor2[i] += matriz[j][i];
        }
    }

    // Matriz normal
    printf("\n\n----------MATRIZ NORMAL----------\n\n");
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 5; j++)
        {
            printf("%d\t",matriz[i][j]);
        }
        printf("------> %d\n",vetor1[i]);
        printf("\n");
    }
    
    printf("\n");
    for(i = 0; i < 5; i++)
    {
        printf(" |\t");
    }
    printf("\n");
    for(i = 0; i < 5; i++)
    {
         printf("%d\t",vetor2[i]);
    }

    return 0;
}