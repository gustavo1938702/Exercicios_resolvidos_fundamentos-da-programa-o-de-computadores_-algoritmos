/*Elabore um programa que preencha uma matriz 6 ? 3, calcule e mostre:
¦¦ o maior elemento da matriz e sua respectiva posição, ou seja, linha e coluna; 
¦¦ o menor elemento da matriz e sua respectiva posição, ou seja, linha e coluna.*/
int main()
{
	int matriz[6][3];
	int i, j;
	int maior, menor;
	int linha_maior, coluna_maior, linha_menor, coluna_menor;
	
	for(i = 0; i < 6; i++)
	{
		printf("%d LINHA\n---------------\n",i + 1);
		for(j = 0; j < 3; j++)
		{
			printf("Digite o %d numero: ",j + 1);
			scanf("%d",&matriz[i][j]);
		}
		printf("\n");
	}

	maior = matriz[0][0];
	for(i = 0; i < 6; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(maior < matriz[i][j])
			{
				maior = matriz[i][j];
				linha_maior = i;
				coluna_maior = j;
			}
		}
	}
	
	menor = matriz[0][0];
	for(i = 0; i < 6; i++)
	{
		for(j = 0; j < 3; j++)
		{
			if(menor > matriz[i][j])
			{
				menor = matriz[i][j];
				linha_menor = i;
				coluna_menor = j;
			}
		}
	}
	
	printf("\nRESULTADO\n----------------------\n");
	printf("MAIOR: %d\nPOSICAO[%d][%d]\n\n",maior, linha_maior+1, coluna_maior+1);
	printf("MENOR: %d\nPOSICAO[%d][%d]\n",menor, linha_menor+1, coluna_menor+1);
	
	return 0;
}
