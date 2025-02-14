/*Crie uma sub-rotina que receba três números inteiros como parâmetros, representando horas, minutos e segundos,
e os converta em segundos. Exemplo: 2h, 40min e 10s correspondem a 9.610 segundos.*/

#include <stdio.h>

int calcsegundos (int horas, int minutos, int seg)
{
    horas = horas * 3600;
    minutos = minutos * 60;
    seg = seg * 1;

    int total = horas + minutos + seg;

    return total;
}
int main()
{
    int horas, minutos, segundos;

    printf("Horas: ");
    scanf("%d",&horas);
    printf("Minutos: ");
    scanf("%d",&minutos);
    printf("Segundos: ");
    scanf("%d",&segundos);

    int a = calcsegundos(horas, minutos, segundos);

    printf("\n%d:%d:%d",horas,minutos,segundos);

    printf("\nSegundos totais: %d",a);

    return 0;
}
