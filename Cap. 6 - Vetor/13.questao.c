/*aça um programa que receba o nome e a nota de oito alunos e mostre o relatório a seguir:
Digite o nome do 1 aluno: Carlos
Digite a nota do Carlos: 8
Digite o nome do 2 aluno: Pedro
Digite a nota do Pedro: 5
Relatórios de notas
Carlos 8.0
Pedro 5.0
..
..
..
Média da classe = ??*/
#include <stdio.h>

int main()
{
	float notas[8];
	char nomes[8][30];
	float media = 0;
	int i, j;
	
	printf("Prencha dois vetores, um com as notas[8], e outro com os nomes[8]:\n\n");
	for(i = 0; i < 8; i++)
	{
		printf("Digite o nome do %d aluno: ",i+1);
		scanf("%s",&nomes[i]);
		do
		{
			printf("Digite a nota do %s: ",nomes[i]);
			scanf("%f",&notas[i]);
			media += notas[i];
		}while(notas[i] < 0 || notas[i] > 10);
	}
	
	printf("\n\nRelatorio de notas\n------------------------\n");
	for(i = 0; i < 8; i++)
	{
		printf("%s\t-------->  %.2f\n",nomes[i],notas[i]);
	}
	
	printf("\nMedia da classe = %.2f",media / 8);
	
	return 0;
}
