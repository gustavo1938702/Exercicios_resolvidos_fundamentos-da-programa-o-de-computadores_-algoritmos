/*Faça um programa que leia um vetor com dez posições para números inteiros e mostre somente os números positivos.*/
#include <stdio.h>

int main()
{
	int vetor[10];
	int i;
	
	printf("Preencha um vetor[10]\n\n");
	for(i = 0 ; i < 10; i++)
	{
		printf("[%d] Numero: ",i+1);
		scanf("%d",&vetor[i]);
	}
	
	printf("\n\nNumero positivos: ");
	for(i = 0 ; i < 10; i++)
	{
		if(vetor[i] > 0)
		{
			printf("%d ",vetor[i]);
		}
	}
	
	return 0;
}
