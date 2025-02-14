/*Faça um programa que preencha um vetor com seis elementos numéricos inteiros. Calcule e mostre: 
¦¦ todos os números pares; 
¦¦ a quantidade de números pares; 
¦¦ todos os números ímpares; 
¦¦ a quantidade de números ímpares.*/
#include <stdio.h>

int main()
{
	int vetor[6];
	int i;
	int pares = 0;
	int impares = 0;
	
	printf("Preenha um vetor[6]:\n\n");
	for(i = 0; i < 6; i++)
	{
		printf("[%d] Numero: ",i+1);
		scanf("%d",&vetor[i]);
		if(vetor[i] % 2 == 0)
		{
			pares++;
		}
		else
		{
			impares++;
		}
	}
	
	// Numeros pares
	printf("\nQuantidade de pares: %d  ---->  ",pares);
	for(i = 0; i < 6; i++)
	{
		if(vetor[i] % 2 == 0)
		{
			printf("%d ",vetor[i]);
		}
	}
	
	
	// Numeros impares
	printf("\n\nNumeros impares: ");
	for(i = 0; i < 6; i++)
	{
		if(vetor[i] % 2 == 1)
		{
			printf("%d ",vetor[i]);
		}
	}
	
	printf("\nQuantidade de impares: %d",impares);
	
	
	
	
	return 0;
}
