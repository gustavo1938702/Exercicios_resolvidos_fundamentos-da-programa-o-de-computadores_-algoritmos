#include <stdio.h>

int potencia(int x, int y)
{
	int calc = 1, i;
	for(i = 0; i < y; i++)
	{
		calc *= x;
	}

	return calc;
}
int main()
{
	int a, b;

	printf("Digite a base: ");
	scanf("%d",&a);
	printf("Digite o expoente: ");
	scanf("%d",&b);

	int resultado = potencia(a,b);

	printf("\n%d^%d = %d",a,b,resultado);

	return 0;
}