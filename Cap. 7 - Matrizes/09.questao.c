/*. Faça um programa que preencha uma matriz 3 ? 3 com números reais e outro valor numérico digitado pelo 
usuário. O programa deverá calcular e mostrar a matriz resultante da multiplicação do número digitado por 
cada elemento da matriz.*/
#include <stdio.h>

int main()
{
	float matriz[3][3];
	float num;
	int i, j;
	
	printf("Digite um numero: ");
	scanf("%f",&num);
	
	printf("\n\nPreencha uma matriz 3x3:\n---------------------------\n\n");
	for(i = 0; i < 3; i++)
	{
		printf("%d LINHA\n\n",i+1);
		for(j = 0; j < 3; j++)
		{
			printf("[%d] Numero: ",j+1);
			scanf("%f",&matriz[i][j]);
		}
		printf("\n");
	}
	
	printf("\nMatriz com cada numero multiplicado por %.2f:\n\n",num);
	for(i = 0; i < 3; i++)
	{
		for(j = 0; j < 3; j++)
		{
			printf("%.2f\t",matriz[i][j] * num);
		}
		printf("\n\n");
	}
	
	return 0;
}
