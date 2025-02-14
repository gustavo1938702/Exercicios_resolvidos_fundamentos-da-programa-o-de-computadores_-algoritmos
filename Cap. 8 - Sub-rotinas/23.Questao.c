#include <stdio.h>

int triangulo(float a, float b, float c)
{
	if(a < b + c && b < a + c && c < a + b)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	float a, b, c;
	
	printf("Digite as medidas dos tres lados de um triangulo:\n\n");
	printf("A: ");
	scanf("%f",&a);
	printf("B: ");
	scanf("%f",&b);
	printf("C: ");
	scanf("%f",&c);
	
	int res = triangulo(a,b,c);
	
	if(res == 0)
	{
		printf("\nNao forma triangulo!");
	}
	else
	{
		printf("\nForma triangulo!");
	}
	
	return 0;
}
