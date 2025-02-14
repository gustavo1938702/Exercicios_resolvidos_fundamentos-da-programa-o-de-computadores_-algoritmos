/*Elabore um programa que preencha uma matriz [5][5] com números reais e encontre o maior valor da
matriz. A seguir, o programa deverá multiplicar cada elemento da diagonal principal pelo maior valor 
encontrado e mostrar a matriz resultante após as multiplicações.*/
#include <stdio.h>

int main()
{
	float matriz[5][5];
	float maior;
	float nova[5];
	int i, j;
	
	printf("Preencha uma matriz[5][5]\n\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d LINHA\n-------------\n",i+1);
		for(j = 0; j < 5; j++)
		{
			printf("[%d] Numero: ",j+1);
			s
		}
		printf("\n");
	}
	
	maior = matriz[0][0];
	
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			if(maior < matriz[i][j])
			{
				maior = matriz[i][j];
			}
		}
	}
	
	for(i = 0; i < 5; i++)
	{
		nova[i] = matriz[i][i] * maior;
		
	}
	
	printf("\nMatriz original:\n\n");
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz depois de multiplicar os elementos da diagonal pelo maior numero:\n\n");
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	return 0;
}
