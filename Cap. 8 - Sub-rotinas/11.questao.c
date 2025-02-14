/*Fa�a uma sub-rotina que receba como par�metro um valor inteiro e positivo N, indicando a quantidade
de parcelas de uma soma S, calculada pela f�rmula:
S = 2/4 + 5/5 + 10/6 + 17/7 + 26/8 + ... + (n2 + 1)/(n + 3)*/
#include <stdio.h>

float sequencia (int a)
{
	int i, numerador, denominador;
	float s = 0;
	for(i = 1; i <= a; i++)
	{
		numerador = i * i + 1;	// Usando a formula dada no enunciado, "n^2 + 1"
		denominador = i + 3;	// Usando a f�rmula dada no enunciado, "n + 3"
		printf("%d / %d\n",numerador,denominador);
		s += numerador / (float) denominador;
	}
	
	return s;
}
int main()
{
	int b;
	
	printf("Digite um numero: ");
	scanf("%d",&b);
	
	float s = sequencia(b);
	
	printf("\nSoma: %.2f",s);
	
	return 0;
}
