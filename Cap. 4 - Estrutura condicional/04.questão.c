#include <stdio.h>

int main()
{
	float n1, n2, n3;
	
	printf("Digite dois numeros:\n\n");
	printf("A: ");
	scanf("%f",&n1);
	printf("B: ");
	scanf("%f",&n2);
	printf("C: ");
	scanf("%f",&n3);
	
	if(n1 == n2 && n1 == n3)
	{
		printf("\nNao tem numero maior, todos sao iguais!");
	}
	else if(n1 > n2 && n1 > n3)
	{
		printf("\nMaior: %.2f",n1);
	}
	else if(n2 > n1 && n2 > n3)
	{
		printf("\nMaior: %.2f",n2);
	}
	else
	{
		printf("\nMaior: %.2f",n3);
	}
	
	return 0;
}
