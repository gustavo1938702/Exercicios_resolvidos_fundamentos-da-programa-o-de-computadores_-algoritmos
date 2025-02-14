/*Faça um programa que preencha e mostre a média dos elementos da diagonal principal de uma matriz 
[10][10].*/
#include <stdio.h>

int main()
{
	int matriz[5][5];
	int i, j;
	int soma = 0;
	
	printf("Preencha uma matriz [10][10]\n\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d LINHA\n------------\n",i+1);
		for(j = 0; j < 5; j++)
		{
			printf("[%d] Numero: ",j+1);
			scanf("%d",&matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nElementos da diagonal da matriz: ");
	for(i = 0 ; i < 5; i++)
	{
		soma += matriz[i][i];
		printf("%d ",matriz[i][i]);
	}
	
	printf("\n\nMedia da diagonal principal da matriz: %.2f",soma/5.0);
	
	
	return 0;
}
