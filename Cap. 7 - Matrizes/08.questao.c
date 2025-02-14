/*Crie um programa que preencha duas matrizes 3 ? 8 com números inteiros, calcule e mostre:
¦¦ a soma das duas matrizes, resultando em uma terceira matriz também de ordem 3 ? 8; 
¦¦ a diferença das duas matrizes, resultando em uma quarta matriz também de ordem 3 ? 8.*/
#include <stdio.h>

int main()
{
	int v1[3][8];
	int v2[3][8];
	int v3[3][8];
	int v4[3][8];
	int i, j;
	
	printf("1 Matriz:\n");
	for(i = 0; i < 3; i++)
	{
		printf("%d LINHA\n----------------\n",i+1);
		for(j = 0; j < 8; j++)
		{
			printf("[%d] Numero: ",j+1);
			scanf("%d",&v1[i][j]);
		}
		printf("\n");
	}
	
	printf("\n2 Matriz:\n");
	for(i = 0; i < 3; i++)
	{
		printf("%d LINHA\n----------------\n",i+1);
		for(j = 0; j < 8; j++)
		{
			printf("[%d] Numero: ",j+1);
			scanf("%d",&v2[i][j]);
		}
		printf("\n");
	}
	
	printf("\nSOMA\n----------------------------\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 8; j++)
		{
			printf("%d\t",v1[i][j] + v2[i][j]);
		}
		printf("\n");
	}
	
	printf("\nDIFERENCA\n----------------------------\n");
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 8; j++)
		{
			printf("%d\t",v1[i][j] - v2[i][j]);
		}
		printf("\n");
	}
	
	return 0;
}
