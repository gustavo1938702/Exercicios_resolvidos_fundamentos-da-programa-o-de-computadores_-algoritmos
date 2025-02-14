#include <stdio.h>

int main()
{
    float preco, desconto, novo_preco;

    printf("Digite o preco do produto: ");
    scanf("%f",&preco);

    if(preco < 30) {
        desconto = 0;
    }
    else if(preco <= 100) {
        desconto = preco * 0.10;
    }
    else {
        desconto = preco * 0.15;
    }

    novo_preco = preco - desconto;

    printf("\nDesconto: %.2f",desconto);
    printf("\nNovo preco: %.2f",novo_preco);

    return 0;
}