#include <stdio.h>
#include <locale.h>

void temperatura(float temp[], int tam, float *maior, float *menor,int *maior_indice, int *menor_indice)
{
	int i;
	*maior = temp[0];
	*menor = temp[0];
	
	for(i = 0; i < tam; i++)
	{
		if(temp[i] > *maior)
		{
			*maior = temp[i];
			*maior_indice = i;
		}
		if(temp[i] < *menor)
		{
			*menor = temp[i];
			*menor_indice = i;
		}
	}		
}
int main()
{
	
	setlocale(LC_ALL,"Portuguese");
	
	int i;
	float temp[12];
	float maior, menor;
	int maior_indice = 0, menor_indice = 0;
	
	char meses[12][30] = {"Janeiro", "Fevereiro", "Março", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro", "Novembro", "Dezembro"};
	
	for(i = 0; i < 12; i++)
	{
		printf("%s: ",meses[i]);
		scanf("%f",&temp[i]);
	}
	
	temperatura(temp,12,&maior,&menor,&maior_indice,&menor_indice);
	
	printf("\nMes com a maior temperatura\n\n----> %s: %.2f\n\n",meses[maior_indice], maior);
	printf("Mes com a menor temperatura\n\n----> %s: %.2f\n",meses[menor_indice], menor);
	
	return 0;
}
