#include <stdio.h>
#define senha 4531

int main()
{
    int entrada;

    printf("Digite a senha: ");
    scanf("%d",&entrada);

    if(entrada == senha) {
        printf("\nAcesso permitido!");
    }
    else {
        printf("\nAcesso negado!");
    }

    return 0;
}