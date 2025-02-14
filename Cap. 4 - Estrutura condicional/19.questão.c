#include <stdio.h>

int main()
{
    float h, peso_ideal;
    int a, sexo;

    printf("Digite a sua altura: ");
    scanf("%f",&h);

    printf("\nDigite o seu sexo: \n\n1. Homem\n2. Mulher\n\nDigite aqui: ");
    scanf("%d",&sexo);

    if(sexo == 1) {
        peso_ideal = (72.7 * h) - 58;
    }
    else if(sexo == 2) {
        peso_ideal = (62.1 * h) - 44.7;
    }
    else {
        printf("\nComando nao reconhecido!\nEncerrando o programa.");
        a = -1;
    }

    if(a != -1) {
        printf("\nPeso ideal: %.2f",peso_ideal);
    }

    return 0;
}