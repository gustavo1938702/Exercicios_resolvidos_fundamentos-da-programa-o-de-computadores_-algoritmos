#include <stdio.h>

int main()
{
    int idade, cont = 0;
    float media_idades = 0;

    do {
        printf("Digite a sua idade: ");
        scanf("%d",&idade);
        media_idades += idade;
        cont++;
    }while(idade != 0);

    cont -= 1;

    printf("\nMedia das idades: %.2f",media_idades / (float) cont);

    return 0;
}