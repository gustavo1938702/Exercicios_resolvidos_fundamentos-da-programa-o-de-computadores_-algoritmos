/*Fa�a um programa que preencha um vetor com dez n�meros reais, calcule e mostre a quantidade de n�meros 
negativos e a soma dos n�meros positivos desse vetor*/
#include <stdio.h>

int main()
{
	float vetor[10];
	int negativos = 0;
	float soma = 0;
	int i;
	
	printf("Preencha um vetor[10]:\n\n");
	for(i = 0; i < 10; i++)
	{
		printf("[%d] Numero: ",i+1);
		scanf("%f",&vetor[i]);
		if(vetor[i] < 0)
		{
			negativos++;
		}
		else
		{
			soma += vetor[i];
		}
	}
	
	printf("\nQuantidade de negativos: %d",negativos);
	printf("\nSoma dos positivos: %.1f",soma);
	
	
	
	
	
	return 0;
}
