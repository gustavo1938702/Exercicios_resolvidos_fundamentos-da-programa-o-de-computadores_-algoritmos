#include <stdio.h>

int main()
{
    int i, idade, soma = 0, cont = 0, cont_2 = 0;
    float peso, altura;

    for(i = 0; i < 10; i++) {
        printf("[%d] - Pessoa\n--------------\n\n",i+1);
        printf("Idade: ");
        scanf("%d",&idade);
        printf("Peso: ");
        scanf("%f",&peso);
        printf("Altura: ");
        scanf("%f",&altura);

        soma += idade;

        if(peso > 90 && altura < 1.5) {
            cont++;
        }
        
        if((idade > 10 && peso < 30) && (altura > 1.90)) {
            cont_2++;
        }
        printf("\n");
    }

    printf("\nMedia das idades das dez pessoas: %.2f\n",soma/10.0);
    printf("Quantidade de pessoas com peso superior a 90 kg e altura inferior a 1.50 metro: %d\n",cont);
    printf("Porcentagem de pessoas com idade entre 10 e 30 anos entre as pessoas que medem mais de 1.90 m: %.2f\n",(cont_2 / 10.0) * 100);

    return 0;
}
