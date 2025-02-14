#include <stdio.h>

float soma(float vet[], int tam)
{
	int i;
	float soma_total = 0; 
	
	printf("Preencha um vetor com 15 elementos reais:\n--------------------------------------------\n\n");
	for(i = 0; i < tam; i++)
	{
		printf("[%d] - Numero: ",i+1);
		scanf("%f",&vet[i]);
		soma_total += vet[i];
	}
	
	return soma_total;
}
int main()
{
	float vet[15];
	
	float res = soma(vet, 15);
	
	printf("\nSoma dos elementos do vetor: %.2f",res);
	
	return 0;
}
