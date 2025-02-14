#include <stdio.h>

int main()
{
    float raio, comprimento, area, volume;

    printf("Digite o raio: ");
    scanf("%f",&raio);

    comprimento = 2 * 3.14 * raio;
    area = 3.14 * (raio * raio);
    volume = 0.75 * 3.14 * (raio * raio * raio);
    
    printf("\nComprimento: %.2f",comprimento);
    printf("\nArea: %.2f",area);
    printf("\nVolume: %.2f",volume);

    return 0;
}