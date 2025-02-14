/*Faça um programa que preencha um vetor com os nomes de sete alunos e carregue outro vetor com a média
final desses alunos. Calcule e mostre:
?? o nome do aluno com maior média (desconsiderar empates);
?? para cada aluno não aprovado, isto é, com média menor que 7, mostrar quanto esse aluno precisa tirar
na prova de exame final para ser aprovado. Considerar que a média para aprovação no exame é 5.*/
#include <stdio.h>

int main()
{
    char nomes[7][50];
    float media[7];
    float maior;
    int indice;
    int i;

    for(i = 0; i < 7; i++) {
        printf("Nome do %d aluno: ",i+1);
        scanf("%s",nomes[i]);
        printf("Media do %s: ",nomes[i]);
        scanf("%f",&media[i]);
        printf("\n---------------------\n\n");
    }

    // Aprovados
    printf("\nAlunos aprovados:\n\n");
    for(i = 0 ; i < 7; i++) {
        if(media[i] >= 7)
        {
            printf("Aluno: %s\tMedia atual: %.2f\t\n-----------------------------------\n",nomes[i], media[i]);
        }
    }

    // Reprovados
    printf("\n\n");
    printf("Alunos em recuperacao:\n\n"); 
    for(i = 0 ; i < 7; i++) {
        if(media[i] < 7 && media[i] > 0)
        {
            printf("Aluno: %s\tMedia atual: %.2f\tNota nescessaria para ser aprovado: %.2f\n---------------------------------------------------------------------------------\n",nomes[i], media[i], 10 - media[i]);
        }
    }

    // Veeificação da maior media
    maior = media[0];
    for(i = 0; i < 7; i++) {
        if(maior < media[i])
        {
            maior = media[i];
            indice = i;     // Guarda o valor do indice do laço de repetição ([i]) quando o if é verdadeiro e encontra a maior media
        }
    }

    printf("\n\nMaior media: %.2f",maior);
    printf("\nAluno: %s",nomes[indice]);

    return 0;
}