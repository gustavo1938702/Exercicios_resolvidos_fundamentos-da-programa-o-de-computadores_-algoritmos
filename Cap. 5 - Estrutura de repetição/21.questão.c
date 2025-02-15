#include <stdio.h>

int main()
{
    int lula = 0, bolsonaro = 0, dilma = 0, temer = 0, nulos = 0, brancos = 0;
    int voto, cont = 0;

    do {
        printf("----------NUMEROS DOS CANDIDATOS----------\n\n[13]. Lula\n[22]. Bolsonaro\n[26]. Dilma\n[14]. Temer\n[1]. Nulo\n[2]. Branco\n\nDeposite seu voto: ");
        scanf("%d",&voto);
        
        if(voto == 0) {
        	printf("Programa encerrado!\n");
        	break;
		}
        switch(voto) {
            case 13:
                lula++;
            break;
            case 22:
                bolsonaro++;
            break;
            case 26:
                dilma++;
            break;
            case 14:
                temer++;
            break;
            case 1:
                nulos++;
            break;
            case 2:
                brancos++;
            break;
            default:
               	printf("Numero de candidato nao reconhecido, tente novamente.");
                continue;
            break;
        }
        printf("\n");
        cont++;
    }while(voto != 0);
    
    printf("\n\nCANDIDATO \t|    Q. VOTOS\n---------------------------------\n");
    printf("LULA		|\t%d\n",lula);
    printf("BOLSONARO	|\t%d\n",bolsonaro);
    printf("DILMA		|\t%d\n",dilma);
    printf("TEMER		|\t%d\n",temer);
    printf("NULOS		|\t%d\n",nulos);
    printf("BRANCO		|\t%d\n",brancos);
    printf("\nPORCENTAGEM DE VOTOS NULOS: %.2f",(nulos / 100) * cont);
    printf("\nPORCENTAGEM DE VOTOS EM BRANCO: %.2f",(brancos / 100) * cont);
    
    return 0;
}
