// ATIVIDADE 3 av1 INTROD PROGRAMACAO
#include <stdio.h>
#include <string.h>
int main() {
    int nBrigadeiro, nBrigEstoque, estoque;
    float precoBrig, frete, venda;
    char dia [1];

    printf("Número do dia da semana (Ex: 1- Domingo): "); scanf("%s", &dia);
    printf("Digite a quantidade de brigadeiros comprados: "); scanf("%d", &nBrigadeiro);
    printf("Digite o preco do brigadeiro escolhido: "); scanf("%f", &precoBrig);
    printf("Digite a quantidade em estoque: "); scanf("%d", &nBrigEstoque);
    
    if (strcmp(dia,"6")==0)
    {
        printf("dia da semana %d\n",dia);
        frete = 0;
        if ((nBrigadeiro>=0) && (nBrigadeiro <=10))
        {
            venda = (precoBrig*nBrigadeiro)+frete;
            if (venda < 80)
            {
                printf("Valor total a ser pago: R$ %0.2f\n", venda);
            }
            else if(venda>=80)
            {
                printf("=========================================\n");
                printf("O Cliente ganhou um voucher com desconto de 10 porcento para a próxima compra\n");
                printf("=========================================\n");
                printf("Valor total a ser pago: R$ %0.2f\n", venda);
            }
            
        }
        else if (nBrigadeiro>10)
        {
             venda = (precoBrig*nBrigadeiro)*0.95;
             if (venda < 80)
            {
                printf("Valor total a ser pago: R$ %0.2f\n", venda);
            }
            else if(venda>=80)
            {
                printf("=========================================\n");
                printf("O Cliente ganhou um voucher com desconto de 10 porcento para a próxima compra\n");
                printf("=========================================\n");
                printf("Valor total a ser pago: R$ %0.2f\n", venda);
            }
        }
    }
    else
    {
        frete = 10;
        printf("%.2f\n", frete);
    }
    
}