#include <stdio.h>

int main()
{
    float base_maior, base_menor, altura, area_trapezio;

    printf("Base maior: ");
    scanf("%f",&base_maior);
    printf("Base menor: ");
    scanf("%f",&base_menor);
    printf("Altura: ");
    scanf("%f",&altura);

    area_trapezio = ((base_maior + base_menor) * altura) / 2;

    printf("\nArea do trapezio: %.2f",area_trapezio);

    return 0;
}