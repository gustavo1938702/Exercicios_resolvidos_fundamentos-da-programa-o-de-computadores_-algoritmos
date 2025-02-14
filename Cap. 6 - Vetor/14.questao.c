// Online C compiler to run C program online
#include <stdio.h>

int fatorial(int a) {
    int i;
    int f = 1;
    
    for(i = 1; i <= a; i++) {
    	f *= i;
    }
    
    return f;
}
int main() {
    int a;
    
    printf("Digite um numero: ");
    scanf("%d",&a);
    
    int resultado = fatorial(a);
    
    printf("\nO fatorial de %d e %d",a,resultado);

    return 0;
}
