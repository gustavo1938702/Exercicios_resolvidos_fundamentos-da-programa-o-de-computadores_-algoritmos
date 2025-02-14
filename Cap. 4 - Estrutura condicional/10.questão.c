#include <stdio.h>

int main()
{
	float preco_fabrica, preco_consumidor;
	
	printf("Preco de fabrica: ");
	scanf("%f",&preco_fabrica);
	
	if(preco_fabrica < 12000)
	{
		preco_consumidor = preco_fabrica * 1.05;
	}
	else if(preco_fabrica <= 25000)
	{
		preco_consumidor = (preco_fabrica * 1.10) + (preco_fabrica * 0.15);
	}
	else
	{
		preco_consumidor = (preco_fabrica * 1.15) + (preco_fabrica * 0.20);
	}
	
	printf("\nPreco ao consumidor: %.2f",preco_consumidor);
	
	return 0;
}