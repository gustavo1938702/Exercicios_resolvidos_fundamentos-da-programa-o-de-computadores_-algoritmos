#include <stdio.h>

int main()
{
	float real, dolar = 1.80, marco_alemao = 2, libra = 3.57;
	
	printf("Valor em real: ");
	scanf("%f",&real);
	
	printf("\nDolar: %.2f",real / dolar);
	printf("\nMarco alemao: %.2f",real / marco_alemao);
	printf("\nLibra: %.2f",real / libra);
	
	return 0;
}
