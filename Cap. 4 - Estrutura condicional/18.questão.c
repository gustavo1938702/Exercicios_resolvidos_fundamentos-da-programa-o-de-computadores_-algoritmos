#include <stdio.h>

int main()
{
    int idade;

    printf("Digite a sua idade: ");
    scanf("%d",&idade);

    if(idade >= 18) {
        printf("\nE maior de idade!");
    }
    else {
        printf("\nE menor de idade!");
    }

    return 0;
}