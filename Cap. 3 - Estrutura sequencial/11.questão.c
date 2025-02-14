#include <stdio.h>

int main()
{
    float diagonal_maior, diagonal_menor, area_losango;

    printf("Diagonal maior: ");
    scanf("%f",&diagonal_maior);
    printf("Diagonal menor: ");
    scanf("%f",&diagonal_menor);

    area_losango = (diagonal_maior * diagonal_menor) / 2;

    printf("\nArea do losango: %.2f",area_losango);

    return 0;
}