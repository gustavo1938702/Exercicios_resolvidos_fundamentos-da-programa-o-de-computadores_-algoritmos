#include <stdio.h>

int main()
{
	float di_1 ,di_2, area;

	printf("Digite a dimensao do primeiro comodo: ");
	scanf("%f",&di_1);
	printf("Digite a dimensao do segundo comodo: ");
	scanf("%f",&di_2);
	
	area = di_1 * di_2;
	
	float potencia = area * 18;
	
	printf("\nArea do comodo: %.2f",area);
	printf("\nPotencia nescessaria: %.2f",potencia);
	
	return 0;
}
