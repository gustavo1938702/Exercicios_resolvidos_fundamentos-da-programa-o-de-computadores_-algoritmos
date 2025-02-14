#include <stdio.h>

int main()
{
    float salario, vendas, comissao, salario_final;

    printf("Salario: ");
    scanf("%f",&salario);

    printf("Vendas: ");
    scanf("%f",&vendas);

    comissao = (vendas * 0.04);
    salario_final = comissao + salario;

    printf("\nComissao: %.2f",comissao);
    printf("\nSalario final: %.2f",salario_final);

    return 0;
}