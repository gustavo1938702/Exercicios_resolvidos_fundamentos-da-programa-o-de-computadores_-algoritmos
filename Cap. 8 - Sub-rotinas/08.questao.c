/*Faça uma sub-rotina que receba um valor inteiro e positivo, calcule e mostre seu fatorial.*/
#include <stdio.h>

int fatorial (int a)
{
    int i;
    int b = 1;
    for(i = a; i > 0; i--)
    {
        b *= i;
    }

    return b;
}
int main()
{
    int a;

    printf("Digite um numero: ");
    scanf("%d",&a);

    int fat = fatorial(a);

    printf("\nFatorial de %d: %d",a ,fat);

    return 0;
}
