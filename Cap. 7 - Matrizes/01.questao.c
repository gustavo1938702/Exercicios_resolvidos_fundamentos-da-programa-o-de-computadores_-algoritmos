/*Faça um programa que preencha uma matriz 3 ? 5 com números inteiros, calcule e mostre a quantidade de
elementos entre 15 e 20.*/
#include <stdio.h>

int main()
{
	int matriz[3][5];
	int i, j;
	int cont = 0;
	
	for(i = 0; i < 3; i++)
	{
		printf("[%d] Linha\n-------------\n",i+1);
		for(j = 0; j < 5; j++)
		{
			scanf("%d",&matriz[i][j]);
			if(matriz[i][j] >= 15 & matriz[i][j] <= 20)
			{
				cont++;
			}
		}
		printf("\n");
	}
	
	printf("\nQuantidade de numeros entre 15 e 20: %d",cont);
	
	return 0;
}
