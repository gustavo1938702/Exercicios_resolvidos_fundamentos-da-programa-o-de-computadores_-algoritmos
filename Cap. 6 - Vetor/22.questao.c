/*Faça um programa que leia um vetor A de dez posições. Em seguida, compacte o vetor, retirando os
valores nulos e negativos. Armazene esse resultado no vetor B. Mostre o vetor B. (Lembre-se: o vetor 
pode não ser completamente preenchido.)*/
#include <stdio.h>

int main()
{
	int A[10];
	int cont = 0;
	int B[10];
	int i;
	
	printf("Preencha um vetor[10]\n\n");
	for(i = 0; i < 10; i++)
	{
		printf("[%d] Numero: ",i+1);
		scanf("%d",&A[i]);
		if(A[i] > 0)
		{
			cont++;
			B[cont - 1] = A[i];
		}
	}
	
	printf("\n\n");
	for(i = 0; i < cont; i++)
	{
		printf("%d\t",B[i]);
	}
	
	return 0;
}
