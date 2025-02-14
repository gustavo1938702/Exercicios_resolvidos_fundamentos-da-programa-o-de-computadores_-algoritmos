/* Crie um programa que: 
?? receba o preço de dez produtos e armazene-os em um vetor; 
?? receba a quantidade estocada de cada um desses produtos, em cinco armazéns diferentes, utilizando 
uma matriz 5 ? 10. 
O programa deverá calcular e mostrar:
?? a quantidade de produtos estocados em cada um dos armazéns---; 
?? a quantidade de cada um dos produtos estocados, em todos os armazéns juntos---; 
?? o preço do produto que possui maior estoque em um único armazém---; 
?? o menor estoque armazenado---;
?? o custo de cada armazém.*/
#include <stdio.h>

int main()
{
    float preco[10]; // Preco dos produtos
    int quantidade[5][10]; // Quantidade de produtos nos 5 armazens
    int total_produto[10] = {0}; // Soma de cada produto nos 5 armazens
    int q[5] = {0}; // Total de produtos em cada armazen
    int i, j;

    // Preco dos 10 produtos
    printf("Preco dos 10 produtos:\n\n");
    for(i = 0; i < 10; i++)
    {
        printf("Preco do [%d] produto: ",i+1);
        scanf("%f",&preco[i]);
    }

    // Quantidade armazenado nos 5 armazens
    printf("\n\n");
    printf("Quantidade estocada em cada armazen:\n\n");
    for(i = 0; i < 5; i++)
    {
        printf("[%d] Armazen\n------------\n",i+1);
        for(j = 0; j < 10; j++)
        {
            printf("[%d] Produto: ",j+1);
            scanf("%d",&quantidade[i][j]);
            q[i] += quantidade[i][j];
            total_produto[j] += quantidade[i][j];
        }
        printf("\n\n");
    }

    // Exibição da quantidade total em cada armazen
    printf("------------------\n");
    for(i = 0; i < 5; i++)
    {
        printf("[%d] Armazen: %d\n",i+1,q[i]);
    }

    // Quantidade de cada produto em cada um dos 5 armazens
    printf("\nQuantidade total de cada produto nos 5 armazens\n------------------------------------------------\n");
    for(i = 0; i < 10; i++)
    {
        printf("[%d] Produto: %d\n",i+1,total_produto[i]);
    }

    // Encontrar o preço do produto que possui maior estoque em um único armazém
    int maior = 0;
    float maior_preco;
    int p;
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 10; j++)
        {
            if(quantidade[i][j] > maior)
            {
                maior = quantidade[i][j];
                maior_preco = preco[j];
                p = j;
            }
        }
    }

    // O menor estoque armazenado
    int menor = q[0];
    for(i = 0; i < 5; i++)
    {
        if(q[i] < menor)
        {
            menor = q[i];
        }
    }

    // Custo de cada armazen
    float preco_armazen[5] = {0};
    for(i = 0; i < 5; i++)
    {
        for(j = 0; j < 10; j++)
        {
            preco_armazen[i] += preco[j] * quantidade[i][j];
        }
    }

    printf("\nO preco do produto que possui maior estoque em um unico armazem; Produto: %d, R$%.2f",p+1, maior_preco);
    printf("\nO menor estoque armazenado: %d",menor);
    
    printf("\n\n");
    
    // Preco de cada armazen
    printf("Preco de cada armazen:\n\n");
    for(i = 0; i < 5; i++)
    {
        printf("[%d] Armazen: R$%.2f\n",i + 1 ,preco_armazen[i]);
    }
    return 0;
}