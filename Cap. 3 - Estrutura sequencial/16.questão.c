#include <stdio.h>
#include <math.h>

int main()
{
    float cateto_1, cateto_2, hipotenusa;

    printf("Digite o valor dos catetos: \n\n");
    printf("A: ");
    scanf("%f",&cateto_1);
    printf("B: ");
    scanf("%f",&cateto_2);

    hipotenusa = ((cateto_1 * cateto_1) + (cateto_2 * cateto_2));

    printf("\nValor da hipotenusa: %.2f",sqrt(hipotenusa));

    return 0;
}