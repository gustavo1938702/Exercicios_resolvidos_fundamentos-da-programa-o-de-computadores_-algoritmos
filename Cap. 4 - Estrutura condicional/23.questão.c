#include <stdio.h>

int main()
{
    int codigo, quantidade;
    float preco_total_nota, preco_unitario, desconto, preco_final;

    printf("Digite o codigo do produto: ");
    scanf("%d",&codigo);

    if(codigo < 1 || codigo > 40) {
        codigo = -1;
    }

    if(codigo != -1) {
        printf("Digite a quantidade comprada: ");
        scanf("%d",&quantidade);

        if(quantidade > 0) {
            if(codigo >= 1 && codigo <= 10) {
                preco_unitario = 10;
            }
            else if(codigo >= 11 && codigo <= 20) {
                preco_unitario = 15;
            }
            else if(codigo >= 21 && codigo <= 30) {
                preco_unitario = 20;
            }
            else if(codigo >= 31 && codigo <= 40) {
                preco_unitario = 30;
            }
            
            preco_total_nota = preco_unitario * quantidade;

            if(preco_total_nota <= 250) {
                desconto = preco_total_nota * 0.05;
            }
            else if(preco_total_nota <= 500) {
                desconto = preco_total_nota * 0.10;
            }
            else {
                desconto = preco_total_nota * 0.15;
            }

            preco_final = preco_total_nota - desconto;

            printf("\n-----NOTA FISCAL-----\n");
            printf("\nPreco unitario: R$ %.2f\n",preco_unitario);
            printf("Preco total da nota: R$ %.2f\n",preco_total_nota);
            printf("Valor do desconto: R$ %.2f\n",desconto);
            printf("Preco final: R$ %.2f",preco_final);
        }
        else {
            printf("\nQuantidade invalida!\nPrograma encerrado.");
        }
    }
    else {
        printf("\nCodigo invalido!\nPrograma encerrado.");
    }

    return 0;
}