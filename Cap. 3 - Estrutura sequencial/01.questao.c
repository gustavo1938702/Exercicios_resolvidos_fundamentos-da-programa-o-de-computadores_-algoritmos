/*Faça um programa que receba dois números, calcule e mostre a subtração do primeiro número pelo
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