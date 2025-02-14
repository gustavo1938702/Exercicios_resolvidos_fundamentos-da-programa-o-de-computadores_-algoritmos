/*Faça um programa que receba o total das vendas de cada vendedor de uma loja e armazene-as em um vetor.
Receba também o percentual de comissão a que cada vendedor tem direito e armazene-os em outro vetor.
Receba os nomes desses vendedores e armazene-os em um terceiro vetor. Existem apenas dez vendedores na
loja. Calcule e mostre:
?? um relatório com os nomes dos vendedores e os valores a receber referentes à comissão;
?? o total das vendas de todos os vendedores;
?? o maior valor a receber e o nome de quem o receberá;
?? o menor valor a receber e o nome de quem o receberá.*/
#include <stdio.h>

int main()
{
    float vendas_por_vendedor[10];
    float comissao[10];     // Valor da comissao
    float valor_comissao[10];   // Valor a receber da comissao
    char nomes[10][50];
    float total = 0;
    int po_maior, po_menor;     // Posicao
    float maior, menor;
    int i;

    // Nomes
    printf("Nomes do vendedores\n---------------------\n");
    for(i = 0; i < 10; i++)
    {
        printf("Nome do %d vendedor: ",i+1);
        scanf("%s",nomes[i]);
    }

    // Comissao
    printf("\n\nComissao a que cada vendedor tem direito\n--------------------------------------\n");
    for(i = 0; i < 10; i++)
    {
        printf("Comissao do(a) %s: ",nomes[i]);
        scanf("%f",&comissao[i]);
    }

    // Vendas por vendedor
    printf("\n\nVendas por vendedor\n--------------------\n");
    for(i = 0; i < 10; i++)
    {
        printf("Vendas do %s: ",nomes[i]);
        scanf("%f",&vendas_por_vendedor[i]);
        total += vendas_por_vendedor[i];
        valor_comissao[i] = (vendas_por_vendedor[i] / 100) * comissao[i];
    }

    // Maior
    maior = valor_comissao[0];

    for(i = 0; i < 10; i++)
    {
        if(valor_comissao[i] > maior)
        {
            maior = valor_comissao[i];
            po_maior = i;
        }
    }

    // Menor
    menor = valor_comissao[0];

    for(i = 0; i < 10; i++)
    {
        if(valor_comissao[i] < menor)
        {
            menor = valor_comissao[i];
            po_menor = i;
        }
    }


    printf("\n\n");
    // Relatório com os nomes dos vendedores e os valores a receber referentes à comissão;
    printf("----------RELATORIO DE VENDAS----------\n\n");
    for(i = 0; i < 10; i++)
    {
        printf("NOME: %s\tCOMISSAO: %.2f\n---------------------------------\n",nomes[i], valor_comissao[i]);
    }

    printf("\n");
    // o total das vendas de todos os vendedores
    printf("O total das vendas de todos os vendedores: %.2f",total);

    // O maior valor a receber e o nome de quem o receberá; o menor valor a receber e o nome de quem o receberá
    printf("\n\nMaior: %.2f\nVendedor: %s",maior, nomes[po_maior]);
    printf("\n\nMenor: %.2f\nVendedor: %s",menor, nomes[po_menor]);
    return 0;
}