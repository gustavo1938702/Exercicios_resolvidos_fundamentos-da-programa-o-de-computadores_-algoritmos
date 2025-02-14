	/* Faça um programa que preencha uma matriz [8][6] de inteiros, calcule e mostre a média dos elementos
	das linhas pares da matriz.*/
	#include <stdio.h>
	
	int main()
	{
		int matriz[8][6];
		int i, j;
		float soma = 0;
		
		printf("Preencha uma matriz [8][6]\n\n");
		for(i = 0; i < 8; i++)
		{
			printf("%d LINHA\n--------------\n",i+1);
			for(j = 0; j < 6; j++)
			{
				printf("[%d] Numero: ",j+1);
				scanf("%d",&matriz[i][j]);
			}
			printf("\n");
		}
		
		printf("\nElementos das linhas pares da matriz:\n\n");
		for(i = 0; i < 8; i = i + 2)
		{
			printf("[%d] Linha ----->	",i);
			for(j = 0; j < 6; j++)
			{
				soma += matriz[i][j];
				printf("%d\t",matriz[i][j]);
			}
			printf("\n");
		}
		
		printf("\nMedia dos elementos das linhas pares da matriz: %.2f",soma / 24.0);
		
		return 0;
	}
