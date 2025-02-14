/*Elabore um programa que preencha uma matriz M de ordem 4 ? 6 e uma segunda matriz N de ordem 6 ?
4, calcule e imprima a soma das linhas de M com as colunas de N.*/
#include <stdio.h>

int main()
{
	int M[4][6];
	int N[6][4];
	int soma_1[4] = {0};
	int soma_2[4] = {0};
	int soma[4];
	int i, j;
	
	for(i = 0; i < 4; i++)
	{
		printf("%d LINHA\n--------------------\n",i+1);
		for(j = 0; j < 6; j++)
		{
			printf("[%d] Numero: ",j+1);
			scanf("%d",&M[i][j]);
			soma_1[i] += M[i][j];
		}
		printf("\n");
	}
	
	for(i = 0; i < 6; i++)
	{
		printf("%d LINHA\n--------------------\n",i+1);
		for(j = 0; j < 4; j++)
		{
			printf("[%d] Numero: ",j+1);
			scanf("%d",&N[i][j]);
			soma_2[j] += N[i][j];
		}
		printf("\n");
	}
	
	printf("\n1 MATRIZ\n-------------------------------------\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 6; j++)
		{
			printf("%d\t",M[i][j]);
		}
		printf("\tSOMA: %d",soma_1[i]);
		printf("\n");
	}
	
	printf("\n2 MATRIZ\n---------------------------------------\n");
	for(j = 0; j < 4; j++)
	{
		for(i = 0; i < 6; i++)
		{
			printf("%d\t",N[i][j]);
		}
		printf("\tSOMA: %d",soma_2[j]);
		printf("\n");
	}
	
	printf("\nSoma das linhas de M com as colunas de N\n--------------------------------------------\n");
	for(i = 0; i < 4; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%d\t",soma_1[i] + soma_2[j]);
		}
		printf("\n");
	}
	
	return 0;
}
