/*Fa�a um programa que receba cinco n�meros e mostre a sa�da a seguir: 
Digite o 1� n�mero 5
Digite o 2� n�mero 3
Digite o 3� n�mero 2
Digite o 4� n�mero 0
Digite o 5� n�mero 2
Os n�meros digitados foram: 5 + 3 + 2 + 0 + 2 = 12*/
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
