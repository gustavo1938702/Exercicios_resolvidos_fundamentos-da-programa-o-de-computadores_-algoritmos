#include <stdio.h>
#define tam 2

int main()
{
    int i, idade, quan_idade = 0, idade_superior = 0, quan_olho_azul = 0, cabelo_ruivo = 0;
    float peso, altura, media_idade = 0;
    char cor_olhos, cor_cabelos;

    for(i = 0; i < tam; i++) {
        printf("[%d] - Pessoa\n----------------\n\n",i+1);
        printf("Digite a idade: ");
        scanf("%d",&idade);
        printf("Digite o seu peso: ");
        scanf("%f",&peso);
        printf("Digite a altura: ");
        scanf("%f",&altura);
        printf("Cor dos olhos: \n\n[A]. Azul\n[P]. Preto\n[V]. Verde\n[C]. Castanho\n\nDigite aqui: ");
        fflush(stdin);
        scanf("%c",&cor_olhos);
        printf("Cor do cabelo: \n\n[P]. Preto\n[C]. Castanho\n[L]. Louro\n[R]. Ruivo\n\nDigite aqui: ");
        fflush(stdin);
        scanf("%c",&cor_cabelos);
        if(idade >= 50 && peso <= 60) {
            idade_superior++;
        }
        if(altura <= 1.50) {
            media_idade += idade;
            quan_idade++;
        }
        if(cor_olhos == 'A' || cor_olhos == 'a') {
            quan_olho_azul++;
        }
        if((cor_cabelos == 'R' || cor_cabelos == 'r') && (cor_olhos != 'A' && cor_olhos != 'a')) {
            cabelo_ruivo++;
        }
        printf("\n\n");
    }

    printf("\nQuantidade de pessoas com idade superior a 50 anos e peso inferior a 60kg: \n\n---> %d\n\n",idade_superior);
    if(quan_idade > 0) {
        printf("A media das idades das pessoas com altura a 1.50 m: \n\n---> %.2f\n\n",media_idade / (float) quan_idade);
    }
    else {
        printf("Nao houve pessoas com altura menor ou igual a 1.50 m.\n\n");
    }
    printf("Porcentagem de pessoas com olhos azuis entre todas as pessoas: \n\n---> %.2f%%\n\n",(quan_olho_azul / (float)tam) * 100);
    printf("Quantidade de pessoas ruivas que nao possuem olhos azuis: \n\n---> %d\n",cabelo_ruivo);

    return 0;
}
