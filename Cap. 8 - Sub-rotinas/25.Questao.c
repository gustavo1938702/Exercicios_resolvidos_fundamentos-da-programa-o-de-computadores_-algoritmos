#include <stdio.h>

void media(float notas[][4], int tam, int *aluno, float *media_p)
{
	int i;
	int j;
	
	for(i = 0; i < tam; i++)
	{
		media_p[i] = 0;
		printf("[%d] Linha\n-----------\n\n",i+1);
		printf("Numero do aluno: ");
		scanf("%d",&aluno[i]);
		printf("\n");
		for(j = 0; j < 4; j++)
		{
			printf("[%d] Numero: ",j+1);
			scanf("%f",&notas[i][j]);
			media_p[i] += notas[i][j];
		}
		printf("\n");
		media_p[i] /= 4;
	}
}
int main()
{
	float notas[10][4];
	int aluno[10];
	float media_t[10];
	int cont = 0;
	
	media(notas, 10, aluno, media_t);
	
	int i, j;
	
	for(i = 0; i < 10; i++)
	{
		printf("[%d] Linha\n-----------\n\n",i+1);
		printf("Numero do aluno: %d",aluno[i]);
		for(j = 0; j < 4; j++)
		{
			printf("[%d] Nota: %.2f\n",j+1, notas[i][j]);
		}
		printf("\n----> Media: %.2f",media_t[i]);
		if(media_t[i] < 6)
		{
			cont++;
		}
	}
	
	for(i = 0; i < 10; i++)
	{
		if(cont > 0)
		{
			printf("\nAlunos em recuperacao:\n\n");
			if(media_t[i] < 6)
			{
				printf("----> %d, Nota: %.2f",aluno[i], media_t[i]);
			}
		}
	}
		
	return 0;
}
