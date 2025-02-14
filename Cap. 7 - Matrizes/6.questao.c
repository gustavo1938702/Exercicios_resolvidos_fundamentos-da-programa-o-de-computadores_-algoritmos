/*Faça um programa que preencha uma matriz 20 ? 10 com números inteiros, e some cada uma das colunas,
armazenando o resultado da soma em um vetor. A seguir, o programa deverá multiplicar cada elemento da 
matriz pela soma da coluna e mostrar a matriz resultante.*/
#include <stdio.h>

int main()
{
	int vetor[20][10];
	int soma[10] = {0};
	int i, j;
		
	for(i = 0; i < 20; i++)
	{
		printf("%d LINHA\n------------------\n",i+1);
		for(j = 0; j < 10; j++)
		{
			printf("[%d] Numero: ",j + 1);
			scanf("%d",&vetor[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 20; i++)
	{
		for(j = 0; j < 10; j++)
		{
			soma[j] += vetor[i][j];
		}
	}
	
	printf("\n\nMULTIPLICACAO\n-------------------------------------------------------------------------------\n");
	for(i = 0; i < 20; i++)
	{
		for(j = 0; j < 10; j++)
		{
			printf("%d\t",vetor[i][j] * soma[j]);
		}
		printf("\n");
	}
	
    return 0;
}
