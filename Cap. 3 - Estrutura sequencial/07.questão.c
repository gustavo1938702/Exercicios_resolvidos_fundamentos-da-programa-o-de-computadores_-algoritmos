#include <stdio.h>

int main()
{
   float peso;
   
   printf("Digite o seu peso: ");
   scanf("%f",&peso);

   printf("\nSe engordar 15%% sobre o seu peso atual: %.2f",peso*1.15);
   printf("\nSe emagrecer 20%% sobre o seu peso atual: %.2f",peso*0.80);

    return 0;
}