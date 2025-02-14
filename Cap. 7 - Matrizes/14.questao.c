/*Faça um programa que preencha uma matriz [2][3], calcule e mostre a quantidade de elementos da matriz que não pertencem ao intervalo [5,15].*/
#include <stdio.h>

int main()
{
	int matriz [2][3];
	int i, j;
	int cont = 0;
	
	printf("Preencha uma matriz [2][3]\n\n");
	for(i = 0; i < 2; i++)
	{
		printf("%d LINHA\n---------------\n",i+1);
		for(j = 0; j < 3; j++)
		{
			printf("[%d] Numero: ",j+1);
			scanf("%d",&matriz[i][j]);
		}
		printf("\n");
	}
	
	for(i = 0; i < 2; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(matriz[i][j] < 5 || matriz[i][j] > 15)
			{
				cont++;
			}
		}
	}
	
	printf("\n\nQuantidade de elementos que nao pertencem ao intervalo [5,15]: %d",cont);
	
	return 0;
}
