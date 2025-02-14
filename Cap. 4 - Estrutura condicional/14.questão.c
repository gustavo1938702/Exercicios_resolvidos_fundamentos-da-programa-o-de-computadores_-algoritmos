#include <stdio.h>

int main()
{
    float salario, novo_salario;

    printf("Digite o seu salario: ");
    scanf("%f",&salario);

    if(salario < 300) {
        novo_salario = salario * 1.50;
    }
    else if(salario <= 500) {
        novo_salario = salario * 1.40;
    }
    else if(salario <= 700) {
        novo_salario = salario * 1.30;
    }
    else if(salario <= 800) {
        novo_salario = salario * 1.20;
    }
    else if(salario <= 1000) {
        novo_salario = salario * 1.10;
    }
    else {
        novo_salario = salario * 1.05;
    }

    printf("\nNovo salario: %.2f",novo_salario);

    return 0;
}