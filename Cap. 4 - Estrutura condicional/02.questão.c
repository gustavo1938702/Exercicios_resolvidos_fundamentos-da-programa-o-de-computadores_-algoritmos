#include <stdio.h>

int main()
{
	float nota_1, nota_2, media;
	
	printf("Digites duas notas:\n\n");
	printf("Nota 1: ");
	scanf("%f",&nota_1);
	printf("Nota 2: ");
	scanf("%f",&nota_2);
	
	media = (nota_1 + nota_2) / 2;
	
	if(media >= 0 && media < 3)
	{
		printf("\nMedia: %.2f\nReprovado!",media);
	}
	else if(media < 7)
	{
		printf("\nMedia: %.2f\nSituacao: Exame!",media);
	}
	else
	{
		printf("\nMedia: %.2f\nSituacao: Aprovado",media);
	}
	
	return 0;
}
