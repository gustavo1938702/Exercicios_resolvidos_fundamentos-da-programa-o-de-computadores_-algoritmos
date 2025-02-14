#include <stdio.h>

int main()
{
    float salario_minimo, salario_funcionario, quant;

    printf("Digite o valor do salario minimo: ");
    scanf("%f",&salario_minimo);
    printf("Digite o salario do funcionario: ");
    scanf("%f",&salario_funcionario);

    quant = salario_funcionario / salario_minimo;

    printf("\nO funcionario recebe %.2f salarios-minimo",quant);

    return 0;
}