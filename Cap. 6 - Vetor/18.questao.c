/*Faça um programa que preencha um vetor com quinze números, determine e mostre:
?? o maior número e a posição por ele ocupada no vetor;
?? o menor número e a posição por ele ocupada no vetor.*/
#include <stdio.h>

int main()
{
    int vetor[15];
    int i;
    int p_maior, p_menor;

    for(i = 0; i < 15; i++)
    {
        printf("[%d] Numero: ",i+1);
        scanf("%d",&vetor[i]);
    }

    // Maior
    int maior = vetor[0];
    for(i = 0; i < 15; i++)
    {
        if(maior < vetor[i])
        {
            maior = vetor[i];
            p_maior = i;
        }
    }

    // Menor
    int menor = vetor[0];
    for(i = 0; i < 15; i++)
    {
        if(menor > vetor[i])
        {
            menor = vetor[i];
            p_menor = i;
        }
    }

    // Exibindo os resultados
    printf("\n\nRESULTADOS\n------------");
    printf("\n\nMAIOR: %d\nPOSICAO: %d\n",maior, p_maior+1);
    printf("\nMENOR: %d\nPOSICAO: %d",menor, p_menor+1);

    return 0;
}