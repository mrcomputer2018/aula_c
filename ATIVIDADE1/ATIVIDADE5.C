// Uma empresa de vendas  paga ao corretor uma comissão calculada de acordo 
// com o valor de suas vendas. Se o valor da venda de um corretor for m
// aior que R$ 50.000.00 a comissão será de 12% do valor vendido. Se o 
// valor da venda do corretor estiver entre R$ 30.000.00 e R$ 50.000.00 (incluindo extremos) 
// a comissão será de 9.5%. Em qualquer outro caso, a comissão será de 7%. 
// Escreva um programa que imprima o nome, o valor da 
// venda e comissão do corretor.
#include <stdio.h>

int main() {
    char nome[10];
    float venda, comissao;
   
    printf("==============DADOS==============\n");
    printf("Digite o nome do vendedor: \n");scanf("%s", &nome);
    printf("Digite o valor da venda: \n");scanf("%f", &venda);

    if((venda > 0) && (venda<30000))
        comissao = venda*0.07;
        else if((venda>=30000) && (venda<=50000))
            comissao = venda*0.095;
            else if (venda>50000)
                comissao = venda*0.12;
    else
    {
        printf("==============AVISO==============\n");
        printf("Valor digitado para venda invalido!!!\n");
        printf("%f\n", venda);
    }
    printf("================IMPRESSAO================\n");
    printf("Nome do vendedor: %s\n", nome);
    printf("Valor da Venda  : R$%.2f\n", venda);
    printf("Comissao        : R$%.2f\n", comissao);
}