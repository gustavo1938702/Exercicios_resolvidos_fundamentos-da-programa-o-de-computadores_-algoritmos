/*Faça um programa que preencha um vetor com quinze elementos inteiros e verifique a existência de elementos 
iguais a 30, mostrando as posições em que apareceram.*/
#include <stdio.h>

int main()
{
	int vetor[15];
	int i, cont = 0;
	
	printf("Preencha um vetor[15]\n\n");
	for(i = 0; i < 15; i++)
	{
		printf("[%d] Numero: ",i+1);
		scanf("%d",&vetor[i]);
		if(vetor[i] == 30)
		{
			cont++; // Variavel acumuladora
		}
	}
	
	if(cont > 0) // Estrutura condicional responsavel por verificar se existem numeros iguais a 30 no vetor
	{
		printf("\nPossicoes em que o numero 30 aparece\n-----------------------------------------\n\n");
		for(i = 0; i < 15; i++)
		{
			if(vetor[i] == 30)
			{
				printf("POSSICAO [%d]\n",i+1);
			}
		}
	}
	else
	{
		printf("\n\Nao tem nenhum numero igual a 30 no vetor lido.");
	}
	
	return 0;
}
