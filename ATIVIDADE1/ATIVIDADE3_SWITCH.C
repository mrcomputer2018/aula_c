#include <stdio.h>
#include <stdlib.h>
int main(){
    int dia, vend, desc, estoque, resta; 
    float uni, pag, porc;

    printf("**** CAIXA ****\n\n");
    printf("INFORME O DIA DA SEMENA\n"
    "1 - Domingo\n"
    "2 - Segunda\n"
    "3 - Terça\n"
    "4 - Quarta\n"
    "5 - Quinta\n"
    "6 - Sexta\n"
    "7 - Sabado\n");
    scanf("%d",&dia);
    printf("Unidades de brigadeiros em estoque: ");
    scanf("%d",&estoque);
    printf("Valor da unidade: ");
    scanf("%f",&uni);


    printf("\n\n\n**** CLIENTE ****\n\n");
    printf("Unidades vendidas: ");
    scanf("%d",&vend);

    pag = uni * vend;
    resta = estoque - vend;
    porc = (estoque - uni)/100;
    desc = pag*0.05;

    switch (dia) {
        case 1:
            printf ("\nDomingo\n");
            if(pag<=80 && uni>=10){
                printf("Na compra de 10 ou mais unidades voce ganha 5%% de desconto!\n");
                printf("Valor:      R$ %5.2f\n",pag);
                printf("Desconto: - R$ %5.2f\n",desc);
                printf("Valor a pagar: R$ %5.2f\n",pag-desc);
            }else 
                if(pag>=80 && uni>=10){
                printf("Na compra de 10 ou mais unidades voce ganha 5%% de desconto!\n");
                printf("Valor:          R$ %5.2f\n",pag);
                printf("Desconto:     - R$ %5.2f\n",desc);
                printf("Valor a pagar:  R$ %5.2f\n",pag-desc);
                printf("PARABENS!!! Voucher de 10%% de desconta.\nNa proxima compra.\n");
                }else 
                    if(pag>=80 && uni<10){
                    printf("Valor a pagar: R$ %5.2f\n",pag);
                    printf("PARABENS!!! Voucher de 10%% de desconta.\nNa proxima compra.\n");
                    }else if(pag<=80 && uni<10){
                    printf("Valor a pagar: R$ %5.2f\n",pag);
                }
            break;
        case 2:
            printf ("\n Segunda-feira\n");
            break;
        case 3:
            printf ("\n Terca-feira\n");
            break;     
        case 4:
            printf ("\n Quarta-feira\n");
            break;
        case 5:
            printf ("\n Quinta-feira\n");
            break;
        case 6:
            printf ("\n Sexta-feira!!!\n SEXTOU!!! FRETE GRATIS SO HOJE.\n");
            break;
        case 7:
            printf ("\n Sabado\n");
            break;                
        default:
            printf ("\n Valor invalido");
        }
        printf("\n**** ESTOQUE ****\n\n");
        printf("O cliente comprou %.2f%% dos brigadeiros em estoque\n",porc);
        printf("Restam no estoque %d brigadeiros",estoque-vend);
    return 0;
}