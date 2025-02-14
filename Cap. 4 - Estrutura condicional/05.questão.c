#include <stdio.h>

int main()
{
	float n1, n2;
	int opcao;
	
	printf("Digite um numero: ");
	scanf("%f",&n1);
	printf("Digite mais um: ");
	scanf("%f",&n2);
	
	printf("\n\n----------MENU----------\n\n");
	printf("1. Media\n");
	printf("2. Diferenca (maior pelo menor)\n");
	printf("3. Produto\n");
	printf("4. Divisao (primeiro pelo segundo)\n\n");
	printf("Escolha uma opcao: ");
	scanf("%d",&opcao);
	
	switch(opcao)
	{
		float media, diferenca, produto, divisao;
		float maior, menor;
		
		case 1:
			media = (n1 + n2) / 2;
			printf("\nMedia: %.2f",n1,n2,media);
			break;
		case 2:
			if(n2 == 0)
			{
				printf("\nOperacao invalida, pois nao se pode dividir por zero!");
			}
			if(n1 > n2)
			{
				maior = n1;
				menor = n2;
			}
			else if(n2 > n1)
			{
				maior = n2;
				menor = n1;
			}
			else
			{
				maior = menor;
				menor = maior;
			}
			diferenca  = maior - menor;
			printf("\n%.2f - %.2f = %.2f",maior,menor,diferenca);
			break;
		case 3:
			produto = n1 * n2;
			printf("\n%.2f x %.2f = %.2f",n1,n2,produto);
			break;
		case 4:
			if(n2 == 0)
			{
				printf("\nImpossivel continuar com a operacao, pois nao se pode dividir por zero!");
			}
			else
			{
				divisao = n1 / n2;
				printf("\n%.2f + %.2f = %.2f",n1,n2,divisao);
				break;
			}
		default:
		{
			printf("\nComando nao reconhecido!\nPrograma encerrado.");
		}
	}
	
	return 0;
}
