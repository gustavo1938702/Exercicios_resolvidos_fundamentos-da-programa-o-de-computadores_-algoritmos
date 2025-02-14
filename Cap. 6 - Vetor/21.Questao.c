/*Faça um programa que leia um vetor com dez posições para números inteiros. Crie um segundo vetor, 
substituindo os valores nulos por 1. Mostre os dois vetores*/
#include <stdio.h>

int main()
{
	int vetor[10];
	int vetor2[10];
	int i;
	
	printf("Preencha um vetor[10]\n\n");
	for(i = 0; i < 10; i++)
	{
		printf("[%d] Numero: ",i+1);
		scanf("%d",&vetor[i]);
	}
	
	for(i = 0; i < 10; i++)
	{
		vetor2[i] = vetor[i];
		if(vetor[i] == 0)
		{
			vetor2[i] = 1;
		}
	}
	
	printf("\n\nVetor antes dos zeros serem trocados:\n\n");
	for(i = 0; i < 10; i++)
	{
		printf("%d ",vetor[i]);
	}
	
	printf("\n\nVetor com os valores nulos (0) trocados por 1:\n\n");
	for(i = 0; i < 10; i++)
	{
		printf("%d ",vetor2[i]);
	}
	
	printf("\n\nComparacao direta:\n\n");
	for(i = 0; i < 10; i++)
	{
		printf("%d ",vetor[i]);
	}
	
	printf("\n--------------------\n");
	for(i = 0; i < 10; i++)
	{
		printf("%d ",vetor2[i]);
	}
	return 0;
}
