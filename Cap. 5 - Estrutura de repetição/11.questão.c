#include <stdio.h>

int main()
{
    float valor_carro, acrescimo, parcelas, preco_final;
    int i;

    printf("Digite o valor do carro: ");
    scanf("%f",&valor_carro);

    printf("\n----------TABELA DE PRECOS----------\n\n");
    printf("Preco do carro a vista, com desconto de 20%%: %.2f\n\n",valor_carro * 0.80);

    printf("Parcelas | Valor da parcela | Acrescimo | Valor final\n------------------------------------------------------\n");
    for(i = 6; i <= 60; i = i + 6) {
        switch(i) {
            case 6:
                acrescimo = 0.03;
            break;
            case 12:
                acrescimo = 0.06;
            break;
            case 18:
                acrescimo = 0.09;
            break;
            case 24:
                acrescimo = 0.12;
            break;
            case 30:
                acrescimo = 0.15;
            break;
            case 36:
                acrescimo = 0.18;
            break;
            case 42:
                acrescimo = 0.21;
            break;
            case 48:
                acrescimo = 0.24;
            break;
            case 54:
                acrescimo = 0.27;
            break;
            case 60:
                acrescimo = 0.30;
            break;
        }

        preco_final = valor_carro * (1 + acrescimo);
        parcelas = acrescimo * valor_carro;

        printf("  %d\t |     %.2f\t    | \t  %.0f\t|  %.2f\n",i, parcelas, acrescimo * 100, preco_final);
    }
    return 0;
}
