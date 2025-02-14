#include <stdio.h>

int main()
{
    int idades, i;
    int ida_15 = 0, ida_16_30 = 0, ida_31_45 = 0, ida_46_60 = 0, ida_60 = 0;

    printf("Digite oito idades:\n--------------------\n\n");
    for(i = 0; i < 8; i++) {
        printf("[%d] idade: ",i+1);
        scanf("%d",&idades);
        if(idades <= 15) {
            ida_15++;
        }
        else if(idades <= 30) {
            ida_16_30++;
        }
        else if(idades <= 45) {
            ida_31_45++;
        }
        else if(idades <= 60) {
            ida_46_60++;
        }
        else{
            ida_60++;
        }
    }

    printf("\nquantidade de pessoas em cada faixa etaria\n-------------------------------------------\n\n");
    printf("Idades menores que 15: %d\n",ida_15);
    printf("Idades entre 16 e 30: %d\n",ida_16_30);
    printf("Idades entre 31 e 45: %d\n",ida_31_45);
    printf("Idades entre 46 e 60: %d\n",ida_46_60);
    printf("Idades superiores a 60: %d\n\n",ida_60);

    printf("Porcentagem de pessoas na 1 faixa etaria (menores que 15): \n\n----> %.2f%%\n",(ida_15 / 8.0) * 100);

    printf("\nPorcentagem de pessoas na 5 faixa etaria (maiores que 60): \n\n----> %.2f%%\n",(ida_60 / 8.0) * 100);

    return 0;
}