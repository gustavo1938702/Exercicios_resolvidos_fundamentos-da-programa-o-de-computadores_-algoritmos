#include <stdio.h>

int main()
{
    int idade;
    float peso;

    printf("Digite a sua idade: ");
    scanf("%d",&idade);

    printf("Digite o seu peso: ");
    scanf("%f",&peso);

    if(idade < 20) {
        if(peso < 60) {
            printf("\n9");
        }
        else if(peso >= 60 && peso <= 90) {
            printf("\n8");
        }
        else {
            printf("\n7");
        }
    }
    else if(idade >= 20 && idade <= 50) {
        if(peso < 60) {
            printf("\n6");
        }
        else if(peso >= 60 && peso <= 90) {
            printf("\n5");
        }
        else {
            printf("\n4");
        }
    }
    else {
        if(peso < 60) {
            printf("\n3");
        }
        else if(peso >= 60 && peso <= 90) {
            printf("\n2");
        }
        else {
            printf("\n1");
        }
    }

    return 0;
}