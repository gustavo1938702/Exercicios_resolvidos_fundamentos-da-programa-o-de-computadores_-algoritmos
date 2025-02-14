/*Faça um programa que receba três números, calcule e mostre a multiplicação desses números.*/
#include <stdio.h>

int main()
{
    int a, b, c, mult;

    printf("Primeiro numero: ");
    scanf("%d",&a);
    printf("Segundo numero: ");
    scanf("%d",&b);
    printf("Terceiro numero: ");
    scanf("%d",&c);

    mult = a * b * c;

    printf("\n%d x %d x %d = %d",a,b,c,mult);

    return 0;
}