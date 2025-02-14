/*Faça um programa que receba dez números inteiros e armazene-os em um vetor. Calcule e mostre dois
vetores resultantes: o primeiro com os números pares e o segundo, com os números ímpares.*/
#include <stdio.h>

int main()
{
	int vetor[10];
	int pares = 0, impares = 0;
	int i;
	int p = 0, im = 0;
	
	printf("Preenchaa um vetor[10]:\n\n");
	for(i = 0; i < 10; i++)
	{
		printf("[%d] Numero: ",i+1);
		scanf("%d",&vetor[i]);
		if(vetor[i] % 2 == 0)
		{
			pares++; // Conta os pares
		}
		else
		{
			impares++; // Conta os impares
		}
	}
	
	int par[pares], impar[impares]; // Determina o tamanho do vetor com base nas entradas do usuario
	
	for(i = 0; i < 10; i++)
	{
		if(vetor[i] % 2 == 0)
		{
			par[p] = vetor[i]; // p comeca em 0 e vai sendo incrementado a cada itireção do if, para não atribuir um valor antes e depois do limites do vetor
			p++;
		}
		else
		{
			impar[im] = vetor[i];
			im++; // im comeca em 0 e vai sendo incrementado a cada itireção do if, para não atribuir um valor antes e depois do limites do vetor
		}
	}
	
	// Exibe os numeros pares
	printf("\n\nNumeros pares: ");
	for(i = 0; i < pares; i++)
	{
		printf("%d ",par[i]);
	}
	
	// Exibe os numeros impares
	printf("\n\nNumeros impares: ");
	for(i = 0; i < impares; i++)
	{
		printf("%d ",impar[i]);
	}
	return 0;
}
