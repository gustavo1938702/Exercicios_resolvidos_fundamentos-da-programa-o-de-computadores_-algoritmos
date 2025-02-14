#include <stdio.h>

int main()
{
    float preco, novo_preco;

    printf("Preco do produto: ");
    scanf("%f",&preco);

    novo_preco = preco * 0.90;

    printf("\nNovo preco, apos o desconto: %.2f",novo_preco);

    return 0;
}