/*Faça um programa que receba duas notas, calcule e mostre a média ponderada dessas notas, consi￾derando peso 2 para a primeira e peso 3 para a segunda. */
#include <stdio.h>

int main()
{
    float nota_1, nota_2, media;

    printf("Digite a primeira nota: ");
    scanf("%f",&nota_1);
    printf("Digite a segunda nota: ");
    scanf("%f",&nota_2);

    media = ((nota_1 * 2) + (nota_2 * 3)) / 5;

    printf("\nMedia ponderada: %.2f",media);

    return 0;
}