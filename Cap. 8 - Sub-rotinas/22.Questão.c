#include <stdio.h>

void matriz(float mat[10][5])
{
	int i, j;
	
	for(i = 0; i < 10; i++)
	{
		printf("%d Linha\n---------\n\n",i+1);
		for(j = 0; j < 5; j++)
		{
			printf("[%d] Numero: ",j+1);
			scanf("%f",&mat[i][j]);
		}
	}
}

void so(float *soma, float mat[10][5])
{
	int i, j;
	*soma = 0;
	
	for(i = 5; i < 10; i++)
	{
		for(j = 0; j < 5; j++)
		{
			*soma += mat[i][j];
		}
	}
}
int main()
{
	float mat[10][5];
	float soma;
	
	matriz(mat);
	so(&soma, mat);
	
	printf("\nSoma de todos os elementos localizados abaixo da sexta linha da matriz: %.2f",soma);
	
	return 0;
}
