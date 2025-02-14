/*Crie um programa que preencha uma matriz 5 ? 5 com números inteiros, calcule e mostre a soma:
¦¦ dos elementos da linha 4; 
¦¦ dos elementos da coluna 2; 
¦¦ dos elementos da diagonal principal; 
¦¦ dos elementos da diagonal secundária; 
¦¦ de todos os elementos da matriz.*/
#include <stdio.h>

int main()
{
	int matriz[5][5];
	int soma = 0, soma_2 = 0, soma_todos = 0, soma_diagonal = 0, soma_secundaria = 0;
	int i, j;
	
	// Valores de entrada
	printf("Preencha uma matriz 5x5:\n\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d LINHA\n----------------\n",i+1);
		for(j = 0; j < 5; j++)
		{
			printf("[%d] Numero: ",j+1);
			scanf("%d",&matriz[i][j]);
		}
		printf("\n");
	}
	
	// For responsavel por realizar os calculos
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			// Soma dos elementos da linha 4
			if(i == 4)
			{
				soma += matriz[i][j];
			}
			// Soma dos elementos da coluna 2
			if(j == 2)
			{
				soma_2 += matriz[i][j];
			}
			// Soma de todos os elementos da matriz
			soma_todos += matriz[i][j];
		}
	}
	
	// Diagonal principal
	for(i = 0; i < 5; i++)
	{
		soma_diagonal += matriz[i][i];
	}
	
	// Diagonal secundaria (da esquerda para a direita)
	for(i = 0; i < 5; i++)
	{
		soma_secundaria += matriz[i][4-i];
	}
	
	// Matriz ja preenchida para facilitar a visualizacao
	printf("\n\t Matriz preenchida\n====================================\n");
	for(i = 0; i < 5; i++)
	{
		for(j = 0; j < 5; j++)
		{
			printf("%d\t",matriz[i][j]);
		}
		printf("\n");
	}
	
	// Resultados
	printf("====================================\n");
	printf("\nResultados:\n");
	printf("\nSoma dos elementos da linha 4: %d\n",soma);
	printf("Soma dos elementos da coluna 2: %d",soma_2);
	printf("\nSoma de todos os numeros da matriz: %d",soma_todos);
	printf("\nSoma dos numeros da diagonal principal: %d",soma_diagonal);
	printf("\nSoma dos numeros da diagonal secundaria: %d",soma_secundaria);

	return 0;
}
