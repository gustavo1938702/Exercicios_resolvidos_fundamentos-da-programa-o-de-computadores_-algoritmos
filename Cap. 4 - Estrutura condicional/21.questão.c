#include <stdio.h>

int main()
{
    float preco;
    int codigo;

    printf("Digite o preco do produto: ");
    scanf("%f",&preco);

    printf("Digite o codigo: ");
    scanf("%d",&codigo);

    if(codigo == 1) {
        printf("\nSul");
    }
    else if(codigo == 2) {
        printf("\nNorte");
    }
    else if(codigo == 3) {
        printf("\nLeste");
    }
    else if(codigo == 4) {
        printf("\nOeste");
    }
    else if(codigo == 5 || codigo == 6) {
        printf("\nNordeste");
    }
    else if(codigo == 7 || codigo == 8 || codigo == 9) {
        printf("\nSudeste");
    }
    else if(codigo >= 10 && codigo <= 20) {
        printf("\nCentro-oeste");
    }
    else if(codigo >= 21 && codigo <= 30) {
        printf("\nNordeste");
    }
    else
    {
        printf("\nCodigo nao reconhecido!");
    }
    

    return 0;
}