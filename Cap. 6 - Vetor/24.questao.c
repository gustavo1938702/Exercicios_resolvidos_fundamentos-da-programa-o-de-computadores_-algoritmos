/*Faça um programa que leia um vetor com quinze posições para números inteiros. Crie, a seguir, um vetor
resultante que contenha todos os números primos do vetor digitado. Escreva o vetor resultante.*/
#include <stdio.h>

int main()
{
    int vetor[15];
    int primos[15];
    int i, j;

    for(i = 0; i < 15; i++)
    {
        printf("[%d] Numero: ",i+1);
        scanf("%d",&vetor[i]);
    }

    for(i = 0; i < 15; i++)
    {
        for(j = 1; j <= vetor[i]; j++)
        {
            if(vetor[i] % 1 == vetor[i] && vetor[i] % j == 1)
            {
                printf("%d ",vetor[i]);
            }
        }
    }



    return 0;
}