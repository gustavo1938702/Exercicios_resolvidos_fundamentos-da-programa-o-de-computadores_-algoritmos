#include <stdio.h>

void menu()
{
    int op;
    do{
        printf("1. Oi\n");
        printf("2. Tudo bem\n");
        printf("3. Como vai a familia\n");
        printf("0. Sair\n");
        printf("\nDigite aqui: ");
        scanf("%d",&op);

        if(op > 0 && op <= 3)
        {
            printf("\nMensagem: ");
        }
        switch(op)
        {
            case 1:\
                printf("Oi\n");
                break;
            case 2:
                printf("Tudo bem\n");
                break;
            case 3:
                printf("Como vai a familia\n");
                break;
            case 0:
                break;
        }
        printf("\n");
    }while(op != 0);
}

int main()
{
    menu();

    return 0;
}
