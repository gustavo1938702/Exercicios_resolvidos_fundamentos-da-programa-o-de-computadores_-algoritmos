/*Elabore um programa que: preencha uma matriz [6][4]; recalcule a matriz digitada, onde cada linha deverá ser multiplicada pelo maior elemento da linha*/
#include <stdio.h>

int main()
{
	int matriz[6][4];
	int i, j;
	int maior[6];
	
	printf("Preencha uma matriz[6][4]\n\n");
	for(i = 0; i < 6; i++)
	{
		printf("%d LINHA\n-------------\n",i+1);
		for(j = 0; j < 4; j++)
		{
			printf("[%d] Numero: ",j+1);
			scanf("%d",&matriz[i][j]);
		}
		printf("\n");
	}

	// Percorre toda a matriz em busca do maior numero
	for(i = 0; i < 6; i++)
	{
		maior[i] = matriz[i][0];
		for(j = 0; j < 4; j++)
		{
			if(maior[i] < matriz[i][j])
			{
				maior[i] = matriz[i][j];
			}
		}
	}
	
	// Imprime a matriz normal
	printf("\nMatriz normal:\n\n");
	for(i = 0; i < 6; i++)
	{
		for(j = 0; j < 4; j++)
		{
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	
	// Imprime a matriz apos as multiplicações
	printf("\nMatriz com cada linha multiplicada pelo maior numero:\n\n");
	for(i = 0; i < 6; i++)
	{
		printf("Maior numero: %d ---->	",maior[i]);
		for(j = 0; j < 4; j++)
		{
			printf("%d\t",matriz[i][j] * maior[i]);
		}
		printf("\n");
	}
	
	return 0;
}
