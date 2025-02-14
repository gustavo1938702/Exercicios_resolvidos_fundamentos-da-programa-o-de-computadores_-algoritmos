/*Faça um programa que receba dois números, calcule e mostre a divisão do primeiro número pelo 
segundo. Sabe-se que o segundo número não pode ser zero, portanto, não é necessário se preocupar 
com validações. */
#include <stdio.h>

int main()
{
    float a, b, resultado;

    printf("Digite dois numero:\n\n");
    printf("A: ");
    scanf("%f",&a);
    printf("B: ");
    scanf("%f",&b);

    resultado = a / b;

    printf("\nA divisao de %.2f por %.2f e %.2f",a,b,resultado);


    return 0;
}