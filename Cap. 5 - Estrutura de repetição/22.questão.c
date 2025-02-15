#include <stdio.h>

int main()
{
    int idade, cont = 0;
    float altura, media_altura = 0;

    do {
        printf("Digite a sua idade: ");
        scanf("%d",&idade);
        if(idade <= 0) {
            break;
        }
        printf("Digite a sua altura: ");
        scanf("%f",&altura);
        if(idade >= 50) {
            media_altura += altura;
            cont++;
        }
    }while(idade > 0);

    printf("\nMedia das alturas das pessoas com idade superior a 50: %.2f",media_altura / (float) cont);

    return 0;
}