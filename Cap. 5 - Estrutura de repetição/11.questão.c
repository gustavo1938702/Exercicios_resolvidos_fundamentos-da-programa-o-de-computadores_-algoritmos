#include <stdio.h>

int main()
{
    float valor_carro;
    int i;

    printf("Digite o valor do carro: ");
    scanf("%f",&valor_carro);

    printf("\n----------TABELA----------\n\n");
    printf("Preco final para compra a vista com desconto de 20%%: %.2f",valor_carro * 0.80);
    printf("\n\nPreco do carro por parcelas:\n\n");
    for(i = 6; i <= 60; i = i + 6) {
        printf("%d Parcelas ---- R$%.2f\n\tAcrescimo dos juros: R$%.2f\n\tTotal: R$%.2f\n\n",i ,valor_carro / (float) i, valor_carro * (i / 2.0) / 100.0, valor_carro + valor_carro * (i / 2.0) / 100.0);
    }

    return 0;
}
