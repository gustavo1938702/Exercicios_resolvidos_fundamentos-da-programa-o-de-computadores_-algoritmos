/*Faça um programa que receba: 
¦¦ as notas de 15 alunos em cinco provas diferentes e armazene-as em uma matriz 15 ? 5; 
¦¦ os nomes dos 15 alunos e armazene-os em um vetor de 15 posições. 
O programa deverá calcular e mostrar:
¦¦ para cada aluno, o nome, a média aritmética das cinco provas e a situação (aprovado, reprovado 
ou exame); 
¦¦ a média da classe.*/
#include <stdio.h>

int main()
{
	float notas[15][5];	// Matriz notas responsavel por guardar as notas digitadas pelo usuario. 15 para a quantidade dos alunos e 5 para a quantidade de notas
	char nomes[15][50];	// Matriz responsavel por guardar os nomes dos alunos. 15 para a quantidade e 50 para o tamanho da palavra
	float media[15];	// Matriz responsavel por receber a media de cada aluno
	float soma = 0;		// Comeca em 0 e vai somando as 5 notas de cada aluno
	int i, j;
	float media_classe = 0;

	for(i = 0; i < 15; i++)
	{
		soma = 0;	// A cada novo comeco, a variavel soma precisa ser reinicializada com zero, para cada aluno comecar a somar as notas a partir de zero.
		printf("Digite o nome do aluno: ");
		scanf("%s",&nomes[i]);	// nomes[i] para os nomes dos alunos
		for(j = 0; j < 5; j++)
		{
			printf("[%d] NOTA: ",j + 1);
			scanf("%f",&notas[i][j]);
			soma += notas[i][j];	// A cada iteração, a variavel soma (valor inicial = 0), vai se somando a nota digitada. Ex: soam = 0. soma += 7; soma = 7. soma += 8; soma = 8 + 7 > 15.
		}
		media[i] = soma / 5;	// a variavel media[i] vai receber a variavel soma dividido por 5, que sera a media do aluno de mesmo indice.
		media_classe += media[i];
		printf("\n");
	}
	
	printf("\nNOME\tMEDIA\tSITUACAO\n----------------------------\n");
	for(i = 0; i < 15; i++)
	{
		printf("%s\t%.2f\t",nomes[i],media[i]);
		if(media[i] >= 7)
		{
			printf("APROVADO");
		}
		else if(media[i] >= 4 && media[i] <= 6)
		{
			printf("EXAME");
		}
		else
		{
			printf("REPROVADO");
		}
		printf("\n");
	}

	printf("\n\nMedia da classe: %.2f",media_classe / 15);
	
	return 0;
}
