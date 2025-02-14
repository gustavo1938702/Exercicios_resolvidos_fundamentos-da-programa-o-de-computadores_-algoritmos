/*Faça um programa que leia dois vetores de dez posições e faça a multiplicação dos elementos de mesmo 
índice, colocando o resultado em um terceiro vetor. Mostre o vetor resultante.*/
#include <stdio.h>

int main()
{
	int A[15], B[15], C[15];
	int i;
	
	printf("Preencha dois vetores, A[15] e B[15]\n\n");
	printf("1 Vetor:\n\n");
	for(i = 0; i < 15; i++)
	{
		printf("[%d] Numero: ",i+1);
		scanf("%d",&A[i]);
	}
	
	printf("\n\n2 Vetor:\n\n");
	for(i = 0; i < 15; i++)
	{
		printf("[%d] Numero: ",i+1);
		scanf("%d",&B[i]);
	}
	
	// Exibicao do 1 vetor em linha
	printf("\n\n1 VETOR -----> ");
	for(i = 0; i < 15; i++)
	{
		printf("%d ",A[i]);
	}
	
	// Exibicao do 2 vetor em linha
	printf("\n\n2 VETOR -----> ");
	for(i = 0; i < 15; i++)
	{
		printf("%d ",B[i]);
	}
	
	// Resultado
	printf("\n\n");
	printf("Resultado:\n\n");
	for(i = 0; i < 15; i++)
	{
		C[i] = A[i] * B[i];
		printf("[%d] - %d x %d = %d\n",i+1, A[i], B[i], C[i]);
	}
	
	return 0;
}
