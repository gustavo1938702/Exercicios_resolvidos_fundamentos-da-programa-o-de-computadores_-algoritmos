/*Faça um programa que preencha uma matriz [3][4], calcule e mostre:
¦¦ a quantidade de elementos pares; 
¦¦ a soma dos elementos ímpares; 
¦¦ a média de todos os elementos.*/
#include <stdio.h>

int main()
{
	int matriz[3][4];
	int i, j;
	int pares = 0;
	int soma = 0;
	int soma_geral = 0;
	float media;
	
	printf("Preencha a matriz [3][4]\n\n");
	for(i = 0; i < 3; i++)
	{
		printf("%d LINHA\n----------------\n",i+1);
		for(j = 0; j < 4; j++)
		{
			printf("[%d] Numero: ",j+1);
			scanf("%d",&matriz[i][j]);
			soma_geral += matriz[i][j];
		}
		printf("\n");
	}
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(matriz[i][j] % 2 == 0)
			{
				pares++;
			}
		}
	}
	
	printf("\nQuantidade de elementos pares: %d",pares);
	
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 4; j++)
		{
			if(matriz[i][j] % 2 == 1)
			{
				soma += matriz[i][j];
			}
		}
	}
	
	printf("\nSoma dos elementos impares: %d",soma);
	printf("\nMedia de todos os elementos: %.2f",soma_geral / 12.0);
	
	return 0;
}
