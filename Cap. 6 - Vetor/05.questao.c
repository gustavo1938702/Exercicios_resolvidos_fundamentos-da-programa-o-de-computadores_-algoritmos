/*Uma escola deseja saber se existem alunos cursando, simultaneamente, as disciplinas Lógica e Linguagem 
Programação. Coloque os números das matrículas dos alunos que cursam Lógica em um vetor, quinze alunos.
Coloque os números das matrículas dos alunos que cursam Linguagem de Programação em outro vetor, dez
alunos. Mostre o número das matrículas que aparecem nos dois vetores.*/
#include <stdio.h>

int main()
{
	int logica[15];
	int programacao[10];
	int i, j, cont = 0;
	
	printf("Preencha dois vetores, um de [15] e outro de [10]\n\n");
	
	// Logica
	printf("Matriculas dos alunos de logica:\n\n");
	for(i = 0; i < 15; i++)
	{
		printf("[%d] Numero: ",i+1);
		scanf("%d",&logica[i]);
	}
	
	// Programacao
	printf("Matriculas dos alunos de programacao:\n\n");
	for(i = 0; i < 10; i++)
	{
		printf("[%d] Numero: ",i+1);
		scanf("%d",&programacao[i]);
	}
	
	// Verifica se existe pelo menos uma matricula iguai
	for(i = 0; i < 15; i++)
	{
		for(j = 0; j < 10; j++)
		{
			if(logica[i] ==  programacao[j])
			{
				cont++;
			}
		}
	}
	
	// Verifica matricula por matricula
	if(cont > 0)
	{
		printf("Matriculas dos alunos matriculados nos dois cursos\n----------------------------------------------------\n");
		for(i = 0; i < 15; i++)
		{
			for(j = 0; j < 10; j++)
			{
				if(logica[i] == programacao[j])
				{
					printf("[%d] e [%d] - MATRICULA  ---->  %d\n",i+1,j+1,logica[i]);
				}
			}
		}
	}
	else
	{
		printf("\n\nNao existe nenhum aluno matriculado nos dois cursos.");
	}
	
	return 0;
}
