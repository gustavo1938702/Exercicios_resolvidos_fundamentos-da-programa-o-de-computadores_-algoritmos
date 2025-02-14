#include <stdio.h>

int main()
{
    int idade;

    printf("Digite sua idade: ");
    scanf("%d",&idade);

    printf("Idade em anos: %d\n",idade);
    printf("Idade em meses: %d\n",idade * 12);
    printf("Idade em dias: %d\n",idade * 365);
    printf("Idade em semanas: %.2f",(float) idade * 48);

    return 0;
}