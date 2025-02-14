#include <stdio.h>

int main()
{
	int lados, d, n;
	
	printf("Numero de lados: ");
	scanf("%d",&lados);
	
	d = lados * (lados - 3)/2;
	
	printf("\nNumero de diagonais do poligono: %d",d);
	
	return 0;
}
