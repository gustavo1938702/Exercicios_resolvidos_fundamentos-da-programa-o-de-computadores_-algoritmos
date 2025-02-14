/*Faça um programa que receba cinco números e mostre a saída a seguir: 
Digite o 1º número 5
Digite o 2º número 3
Digite o 3º número 2
Digite o 4º número 0
Digite o 5º número 2
Os números digitados foram: 5 + 3 + 2 + 0 + 2 = 12*/
#include <stdio.h>

int main()
{
	int vetor[5];
	int soma = 0;
	int i;
	
	printf("Preencha um vetor[5]\n\n");
	for(i = 0; i < 5; i++)
	{
		printf("[%d] Numero: ",i+1);
		scanf("%d",&vetor[i]);
		soma += vetor[i];
	}
	
	printf("\nSoma:\n\n");
	for(i = 0; i < 5; i++)
	{
		printf("%d ",vetor[i]);
		if(i < 4)
		{
			printf("+ ");
		}
	}
	
	printf("= %d",soma);
	
	
	return 0;
}
