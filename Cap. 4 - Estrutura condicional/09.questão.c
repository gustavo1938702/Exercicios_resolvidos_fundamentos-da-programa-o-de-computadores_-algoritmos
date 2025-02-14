#include <stdio.h>

int main()
{
	float saldo_medio, valor_credito;
	float aux;
	
	printf("Digite o saldo medio: ");
	scanf("%f",&saldo_medio);
	
	if(saldo_medio <= 200)
	{
		valor_credito = saldo_medio * 0.10;
	}
	else if(saldo_medio <= 300)
	{
		valor_credito = saldo_medio * 0.20;
	}
	else if(saldo_medio <= 400)
	{
		valor_credito = saldo_medio * 0.25;
	}
	else
	{
		valor_credito = saldo_medio * 0.30;
	}
	
	printf("\nSaldo medio: %.2f",saldo_medio);
	printf("\nValor do credito: %.2f",valor_credito);
	printf("\nValor total: %.2f",saldo_medio + valor_credito);
	
	return 0;
}
