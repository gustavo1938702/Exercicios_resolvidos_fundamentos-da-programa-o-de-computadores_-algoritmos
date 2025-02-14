#include <stdio.h>

int main()
{
	float ag_1, ag_2, ag_3 = 180;
	
	printf("Digite a medida de dois angulos:\n\n");
	printf("Primeiro: ");
	scanf("%f",&ag_1);
	printf("Segundo: ");
	scanf("%f",&ag_2);
	
	ag_3 = 180 - (ag_1 + ag_2);
	
	printf("\nMedida do terceiro anngulo: %.2f",ag_3);
	
	return 0;
}
