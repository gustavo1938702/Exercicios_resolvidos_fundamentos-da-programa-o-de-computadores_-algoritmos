#include <stdio.h>
#define tam 4

int main()
{

    int i;
    char metodo;
    float valor, total_vista = 0, total_prazo = 0, total = 0;

    for(i = 0; i < tam; i++) {
        printf("[%d] compra: ",i+1);
        scanf("%f",&valor);
        printf("\n[V]. A vista\n[P]. A prazo\n\n");
        printf("Metodo de pagamento? ");
        fflush(stdin);
        scanf("%c",&metodo);
        if(metodo == 'V' || metodo == 'v') {
            total_vista += valor;
        }
        else if(metodo == 'P' || metodo == 'p') {
            total_prazo += valor;
        }
        total += valor;
        printf("\n");
    }

    printf("\nValor das compras a vista:\n\n----> R$ %.2f\n",total_vista);
    printf("\nValor das compras a prazo:\n\n----> R$ %.2f\n",total_prazo);
    printf("\nTotal de todas as compras:\n\n----> R$ %.2f\n",total);
    printf("\nValor total da prestacao das compras a prazo, divididas em tres vezes:\n\n----> R$ %.2f\n",total_prazo / 3);

    return 0;
}