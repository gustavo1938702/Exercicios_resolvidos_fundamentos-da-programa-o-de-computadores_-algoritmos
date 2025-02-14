#include <stdio.h>

int main()
{
    float lado;

    printf("Medida do lado do quadrado: ");
    scanf("%f",&lado);

    printf("\nArea do quadrado: %.2f",lado*lado);

    return 0;
}