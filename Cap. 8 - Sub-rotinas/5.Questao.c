/*Faça uma sub-rotina que receba um valor inteiro e verifique se ele é positivo ou negativo.*/
#include <stdio.h>

int posi_nega (int num)
{
    if(num > 0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int a;

    printf("Digite um numero inteiro: ");
    scanf("%d",&a);

    int re = posi_nega(a);

    if(re == 1)
    {
        printf("\nO numero %d e positivo",a);
    }
    else
    {
        printf("\nO numero %d e negativo",a);
    }
    return 0;
}