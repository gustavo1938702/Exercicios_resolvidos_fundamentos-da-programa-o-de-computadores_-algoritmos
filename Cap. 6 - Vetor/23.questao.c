/*Faça um programa que leia dois vetores (A e B) com cinco posições para números inteiros. O programa
deve, então, subtrair o primeiro elemento de A do último de B, acumulando o valor, subtrair o segundo
elemento de A do penúltimo de B, acumulando o valor e assim por diante. Ao final, mostre o resultado 
de todas as subtrações realizadas.*/
#include <stdio.h>

int main()
{
	int A[5], B[5], diferenca[5];
	int i;
	
	printf("Preencha o 1 vetor:\n\n");
	for(i = 0; i < 5; i++)
	{
		printf("[%d] Numero: ",i+1);
		scanf("%d",&A[i]);
	}
	
	printf("\n\nPreencha o 2 vetor:\n\n");
	for(i = 0; i < 5; i++)
	{
		printf("[%d] Numero: ",i+1);
		scanf("%d",&B[i]);
	}

	printf("\n\nVetores com o mesmo sentido:\n\n");
	printf("----------------------------------->\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d\t",B[i]);
	}
	printf("\n----------------------------------->\n");
	
	// 2 Vetor invertido
	printf("\n2 Vetor com a ordem inversa:\n\n");
	printf("----------------------------------->\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d\t",A[i]);
	}
	printf("\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d\t",B[4-i]);
	}
	printf("\n<-----------------------------------\n\n");
	
	// Impressao da diferenca
	printf("\nResultado:\n\n");
	for(i = 0; i < 5; i++)
	{
		diferenca[i] = A[i] - B[4-i];
		printf("%d - %d = %d\n",A[i],B[4-i],diferenca[i]);
	}
	
	return 0;
}
