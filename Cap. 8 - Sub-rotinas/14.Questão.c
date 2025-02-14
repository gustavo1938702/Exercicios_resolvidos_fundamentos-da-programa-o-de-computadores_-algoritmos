#include <stdio.h>

void separar(int X[], int tamanho, int a[], int *tamA, int b[], int *tamB)
{
	int i;
	*tamA = 0;
	*tamB = 0;
	
	printf("Digite %d numeros\n--------------------\n\n",tamanho);
	for(i = 0; i < tamanho; i++)
	{
		printf("[%d] - Numero: ",i+1);
		scanf("%d",&X[i]);
		if(X[i] > 0)
		{
			a[*tamA] = X[i];
			(*tamA)++;
		}
		else if(X[i] < 0)
		{
			b[*tamB] = X[i];
			(*tamB)++;
		}
	}	
}

int main()
{
	int X[5], a[5], b[5];
	int tamA, tamB;
	int i;
	
	separar(X, 5, a, &tamA, b, &tamB);
	
	printf("\nVetor original:\n\n----> ");
	for(i = 0; i < 5; i++)
	{
		printf("%d",X[i]);
	}
	
	printf("\n\nNumeros maiores que zero:\n\n----> ");
	for(i = 0; i < tamA; i++)
	{
		printf("%d",a[i]);
	}
    
    printf("\n\nNumeros menores que zero:\n\n----> ");
	for(i = 0; i < tamB; i++)
	{
		printf("%d",b[i]);
	}

    return 0;
}