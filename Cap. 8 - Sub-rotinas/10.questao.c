/*Elabore uma sub-rotina que receba como parâmetro um valor N (inteiro e maior ou igual a 1) e determine
o valor da sequência S, descrita a seguir*/
#include <stdio.h>

float N (int a)
{
    int i;
    float s = 0;
    for(i = 1; i <= a; i++)
    {
        s += 1 / (float) i;
    }

    return s;
}
int main()
{
    int b;

    do{
        printf("Digite um numero inteiro e maior ou igual a 1: ");
        scanf("%d",&b);
    }while(b < 1);

    float soma = N(b);

    printf("\n%.2f",soma);

    return 0;
}
