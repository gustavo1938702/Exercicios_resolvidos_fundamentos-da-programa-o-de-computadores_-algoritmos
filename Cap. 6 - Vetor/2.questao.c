/*Faça um programa que preencha um vetor com sete números inteiros, calcule e mostre: 
¦¦ os números múltiplos de 2; 
¦¦ os números múltiplos de 3; 
¦¦ os números múltiplos de 2 e de 3.*/
#include <stdio.h>

int main()
{
	int vetor[7];
	int i, v = 0;
	
	printf("Preencha um vetor[7]\n\n");
	for(i = 0; i < 7; i++)
	{
		printf("[%d] Numero: ",i+1);
		scanf("%d",&vetor[i]);
	}
	
	printf("\n\nMultiplos de 2 ----> ");
	for(i = 0; i < 7; i++)
	{
		if(vetor[i] % 2 == 0)
		{
			printf("%d ",vetor[i]);
		}
	}
	
	v = 0;
	printf("\n\nMultiplos de 3 ----> ");
	for(i = 0; i < 7; i++)
	{
		if(vetor[i] % 3 == 0)
		{
			printf("%d ",vetor[i]);
		}
	}
	
	v = 0;
	printf("\n\nMultiplos de 2 e 3 ----> ");
	for(i = 0; i < 7; i++)
	{
		if(vetor[i] % 2 == 0 && vetor[i] % 3 == 0)
		{
			printf("%d ",vetor[i]);
		}
	}
	
	return 0;
}
