#include <stdio.h>

void habitantes(float *salario, int *filhos, float *media, float *media_filhos, int tam, float *maior, int *cont)
{
	int i;
	*media_filhos = 0;
	*media = 0;
	*cont = 0;
	
	// Laço para receber as entradas
	for(i = 0; i < tam; i++)
	{
		printf("[%d] - Habitante\n-----------------\n\n",i+1);
		printf("Salario: ");
		scanf("%f",&salario[i]);
		*media += salario[i];
		printf("Numero de filhos: ");
		scanf("%d",&filhos[i]);
		*media_filhos += filhos[i];
		printf("\n");
	}
	
	// Laço para saber o maior salario e o percentual de pessoas com salario menor que 380
	*maior = salario[0];
	
	
	for(i = 0; i < tam; i++)
	{
		if(salario[i] > *maior)
		{
			*maior = salario[i];
		}
		if(salario[i] < 380)
		{
			(*cont)++;
		}
	}
}

int main()
{
	float media = 0;
	float media_filhos = 0;
	float maior;
	int tam, cont = 0;
	
	printf("Habitantes: ");
	scanf("%d",&tam);
	printf("\n");
	float salario[tam];
	int filhos[tam];
	
	habitantes(salario, filhos, &media, &media_filhos, tam, &maior, &cont);
	
	printf("\nMedia dos salarios dos habitantes: \n\n----> R$ %.2f",media/tam);
	printf("\n\nMedia de numero de filhos: \n\n---->  %.2f filhos",media_filhos/tam);
	printf("\n\nMaior salario: \n\n----> R$ %.2f",maior);
	printf("\n\nPercentual de pessoas com salario menor que 380:\n\n----> %.2f%%",(cont * 100.0) / tam);
	
	return 0;
}
