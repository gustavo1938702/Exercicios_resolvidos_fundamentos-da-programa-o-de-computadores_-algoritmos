/* Faça um programa que receba o nome de cinco produtos e seus respectivos preços. Calcule e mostre: 
¦¦ a quantidade de produtos com preço inferior a R$ 50,00; 
¦¦ o nome dos produtos com preço entre R$ 50,00 e R$ 100,00; 
¦¦ a média dos preços dos produtos com preço superior a R$ 100,00*/
#include <stdio.h>

int main()
{
	int cont_50 = 0,  cont_100 = 0, v = 0;
	float preco[5];
	char nomes[5][50];
	float media = 0;
	int i;
	
	printf("Preencha um vetor[5]\n\n");
	for(i = 0; i < 5; i++)
	{
		printf("[%d] Nome: ",i+1);
		scanf("%s",&nomes[i]);
		printf("Preco: ");
		scanf("%f",&preco[i]);
		if(preco[i] < 50)
		{
			cont_50++;
		}
		else if(preco[i] >= 50 && preco[i] <= 100)
		{
			v++;
		}
		else if(preco[i] >= 100)
		{
			media += preco[i];
			cont_100++;
		}
	}
	
	printf("\n\nQuantidade de produtos com preco inferior a R$ 50,00: %d",cont_50);
	
	// Nomes dos predutos com preco entre R$ 50,00 e R$ 100,00
	if(v > 0)
	{
		printf("Nomes dos predutos com preco entre R$ 50,00 e R$ 100,00:\n\n");	
		for(i = 0; i < 5; i++)
		{
			if(preco[i] >= 50 && preco[i] <= 100)
			{
				printf("%s\n",nomes[i]);
			}
		}
	}
	
	printf("\n\nMedia dos produtos com preco superior a R$ 100,00: %.2f",media / (float) cont_100);
	
	return 0;
}
