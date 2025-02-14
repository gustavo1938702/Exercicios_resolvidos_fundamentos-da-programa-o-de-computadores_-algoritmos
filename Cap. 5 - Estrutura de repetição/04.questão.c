#include <stdio.h>

int main()
{
    int num, i;

    printf("Digite um numero: ");
    scanf("%d",&num);

    printf("\n");
    for(i = 0; i <= 10; i++) {
        printf("%d x %d = %d\n",num, i, num*i);
    }

    return 0;
}
