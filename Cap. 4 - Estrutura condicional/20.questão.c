#include <stdio.h>

int main()
{
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d",&idade);

    if(idade >= 5 && idade <=7) {
            printf("\nInfantil");
    }
    else if(idade <= 10) {
        printf("\nJuvenil");
    }
    else if(idade <= 15) {
        printf("\nAdolescente");
    }
    else if(idade <= 30) {
        printf("\nAdulto");
    }
    else if(idade > 30) {
        printf("\nSenior");
    }

    return 0;
}