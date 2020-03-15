// ATIVIDADE 3 av1 INTROD PROGRAMACAO
#include <stdio.h>
#include <string.h>
int main() {
    int nBrigadeiro, nBrigEstoque, estoque, estoqueAtual;
    float precoBrig, frete, venda, porcBrigadeiro;
    char dia [1];

    printf("Número do dia da semana (Ex: 1- Domingo): "); scanf("%s", &dia);
    printf("Digite a quantidade de brigadeiros comprados: "); scanf("%d", &nBrigadeiro);
    printf("Digite o preco do brigadeiro escolhido: "); scanf("%f", &precoBrig);
    printf("Digite a quantidade em estoque: "); scanf("%d", &nBrigEstoque);

    estoqueAtual = nBrigEstoque-nBrigadeiro;
    porcBrigadeiro = ((nBrigadeiro*100)/nBrigEstoque);
    if (strcmp(dia,"6")==0)
    {
        printf("=========================================\n");
        printf("dia da semana %s - Sextou!!!!\n",dia);
        frete = 0;
        if ((nBrigadeiro>0) && (nBrigadeiro <=10))
        {
            venda = (precoBrig*nBrigadeiro)+frete;
            if (venda < 80)
            {
                printf("=========================================\n");
                printf("Valor total a ser pago: R$ %0.2f\n", venda);
                printf("Percentual de brigadeiros comprados: %.2f\n", porcBrigadeiro);
                printf("Quantidade em estoque atualizada: %d unids\n", estoqueAtual);
                printf("=========================================\n");
            }
            else if(venda>=80)
            {
                printf("=========================================\n");
                printf("O Cliente ganhou um voucher com desconto de 10 porcento para a próxima compra\n");
                printf("=========================================\n");
                printf("Valor total a ser pago: R$ %0.2f\n", venda);
                printf("Percentual de brigadeiros comprados: %.2f\n", porcBrigadeiro);
                printf("Quantidade em estoque atualizada: %d unids\n", estoqueAtual);
                printf("=========================================\n");
            }
            
        }
        else if (nBrigadeiro>10)
        {
             venda = ((precoBrig*nBrigadeiro)*0.95)+frete;
             if (venda < 80)
            {
                printf("=========================================\n");
                printf("Valor total a ser pago: R$ %0.2f\n", venda);
                printf("Desconto de 5 porcento\n");
                printf("Percentual de brigadeiros comprados: %.2f\n", porcBrigadeiro);
                printf("Quantidade em estoque atualizada: %d unids\n", estoqueAtual);
                printf("=========================================\n");
            }
            else if(venda>=80)
            {
                printf("=========================================\n");
                printf("O Cliente ganhou um voucher com desconto de 10 porcento para a próxima compra\n");
                printf("=========================================\n");
                printf("Valor total a ser pago: R$ %0.2f\n", venda);
                printf("Desconto de 5 porcento\n");
                printf("Percentual de brigadeiros comprados: %.2f\n", porcBrigadeiro);
                printf("Quantidade em estoque atualizada: %d unids\n", estoqueAtual);
                printf("=========================================\n");
            }
        }
        else
        {
            printf("Valor de brigadeiros vendidos invalido!!!!\n");
        }
        
    }
    else
    {
        printf("=========================================\n");
        printf("dia da semana %s - Nao Sextou!!!!\n",dia);
        frete = 10;
         if ((nBrigadeiro>0) && (nBrigadeiro <=10))
        {
            venda = (precoBrig*nBrigadeiro)+frete;
            if (venda < 80)
            {
                printf("=========================================\n");
                printf("Valor total a ser pago: R$ %0.2f\n", venda);
                printf("Percentual de brigadeiros comprados: %.2f\n", porcBrigadeiro);
                printf("Quantidade em estoque atualizada: %d unids\n", estoqueAtual);
                printf("=========================================\n");
            }
            else if(venda>=80)
            {
                printf("=========================================\n");
                printf("O Cliente ganhou um voucher com desconto de 10 porcento para a próxima compra\n");
                printf("=========================================\n");
                printf("Valor total a ser pago: R$ %0.2f\n", venda);
                printf("Percentual de brigadeiros comprados: %.2f\n", porcBrigadeiro);
                printf("Quantidade em estoque atualizada: %d unids\n", estoqueAtual);
                printf("=========================================\n");
            }
            
        }
        else if (nBrigadeiro>10)
        {
             venda = ((precoBrig*nBrigadeiro)*0.95)+frete;
             if (venda < 80)
            {
                printf("=========================================\n");
                printf("Valor total a ser pago: R$ %0.2f\n", venda);
                printf("Desconto de 5 porcento\n");
                printf("Percentual de brigadeiros comprados: %.2f\n", porcBrigadeiro);
                printf("Quantidade em estoque atualizada: %d unids\n", estoqueAtual);
                printf("=========================================\n");
            }
            else if(venda>=80)
            {
                printf("=========================================\n");
                printf("O Cliente ganhou um voucher com desconto de 10 porcento para a próxima compra\n");
                printf("=========================================\n");
                printf("Valor total a ser pago: R$ %0.2f\n", venda);
                printf("Desconto de 5 porcento\n");
                printf("Percentual de brigadeiros comprados: %.2f\n", porcBrigadeiro);
                printf("Quantidade em estoque atualizada: %d unids\n", estoqueAtual);
                printf("=========================================\n");
            }
        }
        else
        {
            printf("=========================================\n");
            printf("Valor digitado de brigadeiros vendidos invalido!!!!>\n");
            printf("Digite novamente a quantidade de brigadeiros vendidos\n");
            printf("=========================================\n");
        }
    }
    
}