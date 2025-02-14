#include <stdio.h>

int main()
{
	int hora, minutos;
	
	printf("Digite a hora: ");
	scanf("%d",&hora);
	printf("Digite os minutos: ");
	scanf("%d",&minutos);
	
	printf("\nHora convertida em minutos: %d",hora*60);
	printf("\nTotal de minutos: %d",minutos+(hora * 60));
	printf("\nTotal de minutos convertidos em segundos: %d",(hora * 3600));
	
	return 0;
}
