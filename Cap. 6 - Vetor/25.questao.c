/*Fa�a um programa que leia um vetor com quinze posi��es para n�meros inteiros. Depois da leitura, divida todos os seus elementos pelo maior valor do vetor. Mostre o vetor ap�s os c�lculos.*/
#include <stdio.h>

int main()
{
	int vetor[15];
	int i;
	
	printf("Preencha uma matriz[15]\n\n");
	for(i = 0; i < 15; i++)
	{
		printf("[%d] Numero: ",i+1);
		scanf("%d",&vetor[i]);
	}
	
	int maior = vetor[0];
	
	for(i = 0; i < 15; i++)
	{
		if(maior < vetor[i])
		{
			maior = vetor[i];
		}
	}
	
	printf("\n\n");
	for(i = 0; i < 15; i++)
	{
		printf("%d ",vetor[i]);
	}
	
	printf(" | Maior elemento ------> %d",maior);
	
	printf("\n\nVetor apos todos os elementos serem divididos pelo maior numero:\n\n");
	for(i = 0; i < 15; i++)
	{
		printf("%d / %d = %.2f\n",vetor[i],maior,vetor[i] / (float) maior);
	}
	
	return 0;
}
