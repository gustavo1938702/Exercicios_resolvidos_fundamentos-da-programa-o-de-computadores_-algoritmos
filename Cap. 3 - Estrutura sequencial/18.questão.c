#include <stdio.h>

int main()
{
    float celsius, fe;

    printf("Digite a temperatura em celsius: ");
    scanf("%f",&celsius);

    fe = 180 * (celsius + 32) / 100;

    printf("\nFahrenheit: %.2f",fe);

    return 0;
}