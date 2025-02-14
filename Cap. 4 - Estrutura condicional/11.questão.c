#include <stdio.h>

int main()
{
    float salario, aumento;

    printf("Digite o seu salario: ");
    scanf("%f",&salario);

    if(salario < 300)
    {
        aumento = salario * 0.15;
    }
    else if(salario < 600)
    {
        aumento = salario * 0.10;
    }
    else if(salario < 900)
    {
        aumento = salario * 0.05;
    }
    else
    {
        aumento = 0;
    }

    printf("\nValor do aumento: %.2f",aumento);
    printf("\nNovo salario: %.2f",salario+aumento);

    return 0;
}