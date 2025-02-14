/*Crie uma sub-rotina que receba como parâmetro a altura (alt) e o sexo de uma pessoa e retorne seu peso ideal.
Para homens, deverá calcular o peso ideal usando a fórmula: peso ideal = 72.7 *alt ? 58; para mulheres: peso
ideal = 62.1 *alt ? 44.7.*/
#include <stdio.h>

float imc (float alt)
{
    int sexo;
    float a;
    
    printf("Homem [1] ou mulher [2]? ");
    scanf("%d",&sexo);

    if(sexo == 1)
    {
        a = 72.7 * alt - 58;
    }
    else if(sexo == 2)
    {
        a = 62.1 * alt - 44.7;
    }

    return a;

}
int main()
{
    float altura;

    printf("Digite a sua altura: ");
    scanf("%f",&altura);

    float c = imc(altura);

    printf("\nIMC: %.2f",c);

    return 0;
}