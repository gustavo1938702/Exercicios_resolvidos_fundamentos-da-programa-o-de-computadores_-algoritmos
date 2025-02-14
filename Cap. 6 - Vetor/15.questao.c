/*Faça um programa que receba o nome de oito clientes e armazene-os em um vetor. Em um segundo vetor, 
armazene a quantidade de DVDs locados em 2011 por cada um dos oito clientes. Sabe-se que, para cad
dez locações, o cliente tem direito a uma locação grátis. Faça um programa que mostre o nome de todos 
os clientes, com a quantidade de locações grátis a que ele tem direito.*/
#include <stdio.h>

int main()
{
    char nomes[8][50];
    int dvd[8];
    int gratis[8];
    int i;

    for(i = 0; i < 8; i++)
    {
        printf("[%d] Cliente: ",i+1);
        scanf("%s",nomes[i]);
        printf("DVD's alugados: ");
        scanf("%d",&dvd[i]);
        printf("\n----------------\n");
    }

    for(i = 0; i < 8; i++)
    {
        gratis[i] = dvd[i] / 10;
    }

    printf("\n\n--------------RESULTADO--------------");
    printf("\n\n");
    printf("Cliente\tDVD's ALUGADOS\tGRATIS\n---------------------------------------\n");
    for(i = 0; i < 8; i++)
    {
        printf("%s ---->\t\t%d\t%d",nomes[i],dvd[i],gratis[i]);
        printf("\n");
    }

    return 0;
}