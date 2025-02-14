#include <stdio.h>
#include <math.h>

int main()
{
	float n1, n2; 
	int opcao;
	
	printf("Digite o primeiro numero: ");
	scanf("%f",&n1);
	printf("Digite o segundo numero: ");
	scanf("%f",&n2);
	
	printf("\n----------MENU---------\n\n");
	printf("1. N1 elevado a N2\n");
	printf("2. Raiz quadrada de cada numero\n");
	printf("3. Raiz cubica de cada numero\n\n");
	printf("Escolha uma opcao: ");
	scanf("%d",&opcao);
	
	switch(opcao)
	{
		float ele; 
		float raiz_1, raiz_2, raiz_3, raiz_4;
		
		case 1:
			ele = pow(n1, n2);
			printf("\n%d elevado a %.2f: %.2f",n1,n2,ele);
			break;
		case 2:
			raiz_1 = sqrt(n1);
			raiz_2 = sqrt(n2);
			printf("\nRaiz quadrada de: %.2f\nRaiz quadrada de %.2f",raiz_1,raiz_2);
			break;
		case 3:
			raiz_3 = cbrt(n1);
			raiz_4 = cbrt(n2);
			printf("\nRaiz cubica de: %.2f\nRaiz cubica de %.2f",raiz_3, raiz_4);
			break;
	}
	
	return 0;
}
