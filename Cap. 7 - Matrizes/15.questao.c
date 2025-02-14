/*Crie um programa que preencha uma matriz [12][13] e divida todos os elementos de cada linha pelo
maior elemento em módulo daquela linha. O programa deverá escrever a matriz lida e a modificada.*/
#include <stdio.h>
#define linha 4
#define coluna 5

int main()
{
	float matriz[linha][coluna];
	int i, j;
	float maior[linha];
	
	// Entradas
	printf("Preenche uma matriz[%d][%d]:\n\n",linha,coluna);
	for(i = 0; i < linha; i++)
	{
		printf("%d LINHA\n----------------\n",i+1);
		for(j = 0; j < coluna; j++)
		{
			printf("[%d] Numero: ",j+1);
			scanf("%f",&matriz[i][j]);
		}
		printf("\n");
	}
	
	// Verificação do maior em cada linha
	for(i = 0; i < linha; i++)
	{
		maior[i] = matriz[i][0];
		for(j = 0; j < coluna; j++)
		{
			if(maior[i] < matriz[i][j])
			{
				maior[i] = matriz[i][j];
			}
		}
	}
	
	printf("\nMatriz normal:\n\n");
	for(i = 0; i < linha; i++)
	{
		printf("Maior ----> %.2f	|	",maior[i]);
		for(j = 0; j < coluna; j++)
		{
			printf("%.2f ",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n");
	printf("Matriz depois de dividir cada elemento da linha pelo maior numero:\n\n");
	for(i = 0; i < linha; i++)
	{
		printf("Maior ----> %.2f	|	",maior[i]);
		for(j = 0; j < coluna; j++)
		{
			printf("%.2f ",matriz[i][j] / maior[i]);
		}
		printf("\n");
	}
	
	return 0;
}
