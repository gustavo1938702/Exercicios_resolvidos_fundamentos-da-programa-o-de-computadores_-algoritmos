/*Faça uma sub-rotina que receba um número inteiro e positivo N como parâmetro e retorne a soma dos números
inteiros existentes entre o número 1 e N (inclusive).*/
#include <stdio.h>

int soma (int n)    // Crie uma função com o nome "soma" que recebe o inteiro "n" como paramêtro
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

    int resultado = soma(n);    // "Puxa" o resultado do calculo que foi realizado dentro da função "soma".
    
    printf("\nSoma de todos os numeros entre 1 e %d e igual a %d",n ,resultado);

    return 0;
}