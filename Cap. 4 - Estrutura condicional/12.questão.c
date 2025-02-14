#include <stdio.h>
#define desconto 0.93

int main()
{
    float salario, novo_salario;

    printf("Digite o seu salario: ");
    scanf("%f",&salario);

    if(salario < 350) {
        novo_salario = (salario * desconto) + 100;
    }
    else if(salario < 600) {
        novo_salario = (salario * desconto) + 75;
    }
    else  if(salario < 900) {
        novo_salario = (salario * desconto) + 50;
    }
    else {
        novo_salario = (salario * desconto) + 35;
    }

    printf("\nValor a receber: %.2f",novo_salario);

    return 0;
}