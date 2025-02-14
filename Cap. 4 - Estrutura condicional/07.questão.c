#include <stdio.h>

int main()
{
	float salario;
	
	printf("Digite o seu salario: ");
	scanf("%f",&salario);
	
	if(salario <= 300)
	{
		float novo_salario = salario * 1.30;
		printf("\nNovo salario com um reajuste de 30%%: %.2f",novo_salario);
	}
	else
	{
		printf("\nFuncionario nao tem direito a aumento!");
	}
	
	return 0;
}
