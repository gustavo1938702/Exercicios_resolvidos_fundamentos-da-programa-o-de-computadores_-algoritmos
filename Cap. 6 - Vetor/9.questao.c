/*Fa�a um programa que preencha tr�s vetores com dez posi��es cada um: o primeiro vetor, com os nomes de
dez produtos; o segundo vetor, com os c�digos dos dez produtos; e o terceiro vetor, com os pre�os dos produtos. Mostre um relat�rio apenas com o nome, o c�digo, o pre�o e o novo pre�o dos produtos que sofrer�o 
aumento. 
Sabe-se que os produtos que sofrer�o aumento s�o aqueles que possuem c�digo par ou pre�o superior 
R$ 1.000,00. Sabe-se ainda que, para os produtos que satisfazem as duas condi��es anteriores, c�digo 
pre�o, o aumento ser� de 20%; para aqueles que satisfazem apenas a condi��o de c�digo, o aumento ser� 
de 15%; e para aqueles que satisfazem apenas a condi��o de pre�o, o aumento ser� de 10%.*/
#include <stdio.h>

int main()
{
    char nome[10][50];
    int codigo[10];
    float preco[10];
    float novo_preco[10];
    int i;

    // Nomes
    printf("Preencha o vetor com 10 nomes:\n\n");
    for(i = 0; i < 10; i++)
    {
        printf("[%d] Nome: ",i+1);
        scanf("%s",nome[i]);
    }

    // Codigo
    printf("\nPreencha um vetor com 10 codigos:\n\n");
    for(i = 0; i < 10; i++)
    {
        printf("codigo [%s]: ",nome[i]);
        scanf("%d",&codigo[i]);
    }

    // Preco
    printf("\n\nPreencha um vetor com 10 precos:\n\n");
    for(i = 0; i < 10; i++)
    {
        printf("[%d] Preco: ",i+1);
        scanf("%f",&preco[i]);
    }

    // Calculos dos novos precos
    for(i = 0; i < 10; i++)
    {
        if(codigo[i] % 2 == 0 && preco[i] >= 1000)
        {
            novo_preco[i] = preco[i] * 1.20;
        }
        else if(preco[i] >= 1000)
        {
            novo_preco[i] = preco[i] * 1.10;
        }
        else if(codigo[i] % 2 == 0)
        {
            novo_preco[i] = preco[i] * 1.15;
        }
        else
        {
            novo_preco[i] = preco[i];
        }
    }

    printf("\n\n");
    // Imprimindo os novos precos
    for(i = 0; i < 10; i++)
    {
        printf("PRODUTO: %s\tCODIGO: %d\tPRECO ANTIGO: %.2f\tPRECO NOVO: %.2f\n---------------------------------------------------------------------------\n",nome[i],codigo[i],preco[i],novo_preco[i]);
    }

    return 0;
}