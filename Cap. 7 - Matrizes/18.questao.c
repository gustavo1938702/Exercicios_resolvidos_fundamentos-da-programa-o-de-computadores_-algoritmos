/*crie um programa que preencha uma matriz [5][5] de números reais, calcule e mostre a soma dos elementos da diagonal secundária.*/
#include <stdio.h>

int main()
{
	float matriz[5][5];
	float soma = 0;
	int i, j;
	
	printf("Preencha uma matriz [5][5]\n\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d LINHA\n---------------\n",i+1);
		for(j = 0; j < 5; j++)
		{
			printf("[%d] Numero: ",j+1);
			scanf("%f",&matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\n\nElementos da diagonal secundaria: ");
	for(i = 0; i < 5; i++)
	{
		soma += matriz[i][4-i];
		printf("%.2f ",matriz[i][4-i]);
		if(i < 4)
		{
			printf("| ");
		}
	}
	
	printf("\n\nMedia da diagonal secundaria da matriz: %.2f",soma/5.0);
	
	return 0;
}
