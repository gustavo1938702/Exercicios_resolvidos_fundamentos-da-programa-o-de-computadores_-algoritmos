#include <stdio.h>

int main()
{
	float nota_1, nota_2, nota_3, nota_4, media;
	
	printf("Digite a nota do primeiro aluno: ");
	scanf("%f",&nota_1);
	printf("Digite a nota do segundo aluno: ");
	scanf("%f",&nota_2);
	printf("Digite a nota do terceiro aluno: ");
	scanf("%f",&nota_3);
	printf("Digite a nota do quarto aluno: ");
	scanf("%f",&nota_4);
	
	media = (nota_1 + nota_2 + nota_3 + nota_4) / 4;
	
	if(media >= 7)
	{
		printf("\nMedia: %.2f\nSituacao: Aprovado!",media);
	}
	else
	{
		printf("\nMedia: %.2f\nSituacao: Reprovado!",media);
	}
	
	return 0;
}
