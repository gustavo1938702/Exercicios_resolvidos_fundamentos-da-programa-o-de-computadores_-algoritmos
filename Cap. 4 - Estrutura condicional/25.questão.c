#include <stdio.h>

int main()
{
    float numero_de_horas_extras, numero_de_horas_falta, H, premio;

    printf("Numero de horas extras: ");
    scanf("%f",&numero_de_horas_extras);
    printf("Numero de horas de falta: ");
    scanf("%f",&numero_de_horas_falta);

    H = numero_de_horas_extras - (2/3 * (numero_de_horas_falta));

    if(H < 600) {
        premio = 100;
    }
    else if(H < 1200) {
        premio = 200;
    }
    else if(H < 1800) {
        premio = 300;
    }
    else if(H < 2400) {
        premio = 400;
    }
    else if(H >= 2400) {
        premio = 500;
    }

    printf("\nValor do premio: %.2f",premio);
    return 0;
}