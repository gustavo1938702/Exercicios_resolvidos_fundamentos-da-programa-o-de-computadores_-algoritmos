/*Crie um programa que preencha uma matriz 2 ? 4 com números inteiros, calcule e mostre:
a quantidade de elementos entre 12 e 20 em cada linha; 
a média dos elementos pares da matriz.*/
#include <stdio.h>

int main()
{
	int matriz[2][4];
	int i, j;
	int cont = 0; // Conta as numeros que estao entre 12 e 20
	float soma = 0; // Variavel que vai somaer o numero pares da matriz
	int pares = 0; // Conta o numero de pares
	
	for(i = 0; i < 2; i++)
	{
		printf("%d LINHA\n------------\n",i + 1);
		for(j = 0; j < 4; j++)
		{
			scanf("%d",&matriz[i][j]);
			if(matriz[i][j] >= 12 && matriz[i][j] <= 20)
			{
				cont++;
			}
			if(matriz[i][j] % 2 == 0)
			{
				soma += matriz[i][j];
				pares++;
			}
		}
		printf("\n");
	}
	
	printf("\n\nQuantidade de numeros entre 12 e 20: %d",cont);
	printf("\nMedia: %.2f",soma / pares);
	
	return 0;
}
