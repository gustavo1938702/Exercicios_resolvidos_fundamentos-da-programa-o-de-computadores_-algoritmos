/*Elabore uma sub-rotina que receba dois n�meros como par�metros e retorne 0, se o primeiro n�mero for
divis�vel pelo segundo n�mero. Caso contr�rio, dever� retornar o pr�ximo divisor.*/
#include <stdio.h>

int retorno (int a, int b)
{   
    int i;

    if(a % b == 0)
    {
        return 0;
    }
    else
    {
        for(i = b + 1; i < a; i++)
        {
            if(a % i == 0)
            {
                return i;
            }
        }
    }

    return 0;
}
int main()
{
    int a, b;

    printf("Digite um numero: ");
    scanf("%d",&a);
    printf("Digite outro: ");
    scanf("%d",&b);

    int retur = retorno(a,b);

    if(retur == 0)
    {
        printf("\nO numero %d e dividivel por %d",a,b);
    }
    else
    {
        printf("\nO numero %d nao e divisivel por %d",a,b);
        printf("\nProximo numero que %d e divisivel %d",a,retur);
    }

    return 0;
}