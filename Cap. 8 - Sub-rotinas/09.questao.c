/*Crie uma sub-rotina que receba como parâmetro um valor inteiro e positivo e retorne a soma dos divisores
desse valor.*/
#include <stdio.h>

int divi (int a)
{
    int soma = 0;
    int i;
    
    for(i = a; i > 0; i--)
    {
        if(a % i == 0)
        {
            soma += i;
        }
    }

    return soma;

}
int main()
{
    int num;

    do {
        scanf("%d",&num);
    }while(num <= 0);

    int divisores = divi(num);

    printf("\nSoma dos divisores: %d",divisores);

    return 0;
}
