#include <stdio.h>

int main()
{
    float preco, novo_preco;

    printf("Digite o preco do produto: ");
    scanf("%f",&preco);

    if(preco < 50) {
        novo_preco = preco * 1.05;
    }
    else if(preco < 100) {
        novo_preco = preco * 1.10;
    }
    else {
        novo_preco = preco * 1.15;
    }

    if(novo_preco < 80) {
        printf("\nBarato.");
    }
    else if(novo_preco <= 120) {
        printf("\nNormal.");
    }
    else if(novo_preco <= 200) {
        printf("\nCaro.");
    }
    else {
        printf("\nMuito caro.");
    }
    
    return 0;
}