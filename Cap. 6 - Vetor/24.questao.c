/*Fa�a um programa que leia um vetor com quinze posi��es para n�meros inteiros. Crie, a seguir, um vetor
resultante que contenha todos os n�meros primos do vetor digitado. Escreva o vetor resultante.*/
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