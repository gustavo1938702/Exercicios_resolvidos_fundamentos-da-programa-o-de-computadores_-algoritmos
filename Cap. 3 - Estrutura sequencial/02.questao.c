/*Fa�a um programa que receba tr�s n�meros, calcule e mostre a multiplica��o desses n�meros.*/
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