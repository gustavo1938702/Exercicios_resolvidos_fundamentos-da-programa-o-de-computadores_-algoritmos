/*Elabore um programa que preencha uma matriz 12 ? 4 com os valores das vendas de uma loja, em que cada
linha representa um mês do ano e cada coluna representa uma semana do mês. O programa deverá calcular 
e mostrar: 
?? o total vendido em cada mês do ano, mostrando o nome do mês por extenso; 
?? o total vendido em cada semana durante todo o ano; 
?? o total vendido pela loja no ano.*/
#include <stdio.h>

int main()
{
    float vendas[12][4];
    char mes[12][30] = {"Janeiro","Fevereiro","Marco","Abril","Maio","Junho","Julho","Agosto","Setembro","Outubro","Novembro","Dezembro"};
    float total_mes[12] = {0};
    int total_ano = 0;
    int i,j;

    for(i = 0; i < 12; i++)
    {
        printf("%s\n---------------------\n",mes[i]);
        for(j = 0; j < 4; j++)
        {
            printf("%d SEMANA: ",j + 1);
            scanf("%f",&vendas[i][j]);
            total_mes[i] += vendas[i][j];
            total_ano += vendas[i][j];
        }
        printf("\n");
    }

    printf("\nTotal vendido por mes\n----------------------\n");
    for(i = 0; i < 12; i++)
    {
        printf("%s: %.2f\n",mes[i], total_mes[i]);
    }

    printf("\nTotal vendido por semana\n----------------------------\n");
    for(i = 0; i < 12; i++)
    {
        printf("%s\n---------------------\n",mes[i]);
        for(j = 0; j < 4; j++)
        {
            printf("%d SEMANA: %.2f\n",j+1,vendas[i][j]);
        }
        printf("\n");
    }

    printf("\nTotal vendido pela loja no ano: %d",total_ano);

    return 0;
}
