/*Elabore uma sub-rotina que leia um número não determinado de valores positivos e retorne a média aritmética
desses valores. Terminar a entrada de dados com o valor zero.*/
#include <stdio.h>

float N ()
{
    int cont = 0;
    float soma = 0, a;
    do
    {
        scanf("%f",&a);
        if(a > 0)
        {
            soma += a;
            cont++;
        }
    }while(a != 0);

    return soma / (float) cont;
}
int main()
{
    float s = N();

    printf("\nMedia: %.2f",s);

    return 0;
}