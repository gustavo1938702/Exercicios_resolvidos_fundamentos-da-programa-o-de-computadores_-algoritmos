/*Fa�a um programa que receba dois n�meros, calcule e mostre a subtra��o do primeiro n�mero pelo
segundo.*/
#include <stdio.h>

int main()
{
    int a, b, soma;

    printf("Primeiro numero: ");
    scanf("%d",&a);
    printf("Segundo numero: ");
    scanf("%d",&b);

    soma = a + b;

    printf("\nA soma de %d + %d e igual a %d",a ,b ,soma);

    return 0;
}