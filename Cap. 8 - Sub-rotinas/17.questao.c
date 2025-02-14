#include <stdio.h>

int MDC(int a, int b)
{
	int menor;
	int maior = 1;
	
	int i;
	
	if(a > b)
	{
		menor = b;
	}
	else
	{
		menor = a;
	}
	
	for(i = 1; i <= menor; i++)
	{
		if(a % i == 0 && b % i == 0)
		{
			maior = i;
		}
	}
	
	return maior;
}

int main()
{
	int a, b;
	
	printf("Digite um numero: ");
	scanf("%d",&a);
	printf("Digite mais um: ");
	scanf("%d",&b);
	
	int maior_mdc = MDC(a,b);
	
	printf("\nMaior MDC entre %d e %d: %d",a,b,maior_mdc);
	
	return 0;
}
