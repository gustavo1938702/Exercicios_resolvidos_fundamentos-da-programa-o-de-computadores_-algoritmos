#include <stdio.h>
#define tam 2

int main()
{
    float altura, peso, media = 0;
    int i, idade, quant_idade = 0, quan_altura = 0, quan_peso = 0;

    for(i = 0; i < tam; i++) {
        printf("[%d] - Pessoa\n--------------\n\n",i+1);
        printf("Digite a sua idade: ");
        scanf("%d",&idade);
        printf("Digite a sua altura: ");
        scanf("%f",&altura);
        printf("Digite o seu peso: ");
        scanf("%f",&peso);
        printf("\n");
        if(idade >= 50) {
            quant_idade++;
        }
        if(idade >= 10 && idade <= 20) {
            quan_altura++;
            media += altura;
        }
        if(peso <= 40) {
            quan_peso++; 
        }
    }

    printf("\nQuantidade de pessoas com idade superior a 50: %d\n",quant_idade);
    printf("Media das alturas das pessoas com idade entre 10 e 20 anos: %.2f\n",media / (float) quan_altura);
    printf("Porcentagem de pessoas com peso inferior a 40 kg entre todas as pessoas analisadas: %.2f%%",(quan_peso / (float) tam) * 100);

    return 0;
}
