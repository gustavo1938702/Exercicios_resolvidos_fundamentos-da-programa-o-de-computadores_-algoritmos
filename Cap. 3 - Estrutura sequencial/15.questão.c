#include <stdio.h>

int main()
{
    float salario, resto_salario, multa_1, multa_2;

    printf("Salario: ");
    scanf("%f",&salario);

    printf("\nValor da primeira multa: ");
    scanf("%f",&multa_1);
    printf("Valor da segunda multa: ");
    scanf("%f",&multa_2);

    resto_salario = salario - ((multa_1 * 1.02) + (multa_2 * 1.02));

    printf("\nRestara R$%.2f apos pagar as  multas!",resto_salario);

    return 0;
}