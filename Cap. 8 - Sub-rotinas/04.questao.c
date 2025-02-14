/*Faça uma sub-rotina que receba como parâmetro o raio de uma esfera, calcule e mostre no programa principal
o seu volume: v = 4/3 * R3.*/
#include <stdio.h>

float volume (float raio)
{
    float cal = 1.33 * (raio * raio * raio);

    return cal;
}
int main()
{
    float raio;

    printf("Raio da esfera: ");
    scanf("%f",&raio);

    float a = volume(raio);

    printf("\nVolume da esfera de raio %.2f: %.2f",raio,a);

    return 0;
}
