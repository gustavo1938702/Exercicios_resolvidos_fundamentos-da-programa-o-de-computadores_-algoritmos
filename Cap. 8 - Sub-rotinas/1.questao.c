/*Fa�a uma sub-rotina que receba um n�mero inteiro e positivo N como par�metro e retorne a soma dos n�meros
inteiros existentes entre o n�mero 1 e N (inclusive).*/
#include <stdio.h>

int soma (int n)    // Crie uma fun��o com o nome "soma" que recebe o inteiro "n" como param�tro
{
    int i, r = 0;
    for(i = 1; i <= n; i++)
    {
        r += i;
    }

    return (r);     // Retorna o valor da variavel "r"
}
int main()
{
    int n;

    printf("Digite um numero inteiro N: ");
    scanf("%d",&n);

    int resultado = soma(n);    // "Puxa" o resultado do calculo que foi realizado dentro da fun��o "soma".
    
    printf("\nSoma de todos os numeros entre 1 e %d e igual a %d",n ,resultado);

    return 0;
}