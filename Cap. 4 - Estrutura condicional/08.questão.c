#include <stdio.h>

int main()
{
	float salario;
	
	printf("Digite o seu salario: ");
	scanf("%f",&salario);
	
	if(salario > 300)
	{
		float novo_salario = salario * 1.15;
		printf("\nNovo salario com um reajuste de 15%%: %.2f",novo_salario);
	}
	else
	{
		float novo_salario = salario * 1.35;
		printf("\nNovo salario com um reajuste de 35%%: %.2f",novo_salario);
	}
	
	return 0;
}
