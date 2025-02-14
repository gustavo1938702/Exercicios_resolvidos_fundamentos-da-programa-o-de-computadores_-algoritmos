#include <stdio.h>

int main()
{
    float valor_investimento, retorno;
    int opcao;

    printf("Quanto quer investir? ");
    scanf("%f",&valor_investimento);

    printf("\n-----MENU-----\n\n");
    printf("1. Poupanca\n2. Fundos de renda fixa\n\n");
    printf("Digite aqui: ");
    scanf("%d",&opcao);

    switch(opcao)
    {
        case 1:
            retorno = valor_investimento * 1.03;
            break;
        case 2:
            retorno = valor_investimento * 1.04;
            break;
        default:
            printf("\nOpcao invalida!");
            break;
    }

    printf("\nValor corrigido: %.2f",retorno);

    return 0;
}