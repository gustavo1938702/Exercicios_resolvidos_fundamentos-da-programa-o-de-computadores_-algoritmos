#include <stdio.h>

int main()
{
    float peso;

    printf("Digite o seu peso: ");
    scanf("%f",&peso);

    printf("\nSeu peso em gramass: %.2f",peso * 1000);

    return 0;
}