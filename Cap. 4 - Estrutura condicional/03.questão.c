#include <stdio.h>

int main()
{
	float n1, n2;
	
	printf("Digite dois numeros:\n\n");
	printf("A: ");
	scanf("%f",&n1);
	printf("B: ");
	scanf("%f",&n2);
	
	if(n1 > n2)
	{
		float menor = n2;
		printf("\nMenor: %.2f",menor);
	}
	else
	{
		float menor = n1;
		printf("\nMenor: %.2f",menor);
	}	
	
	return 0;
}
