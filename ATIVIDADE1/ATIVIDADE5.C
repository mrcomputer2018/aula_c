// Uma empresa de vendas  paga ao corretor uma comissão calculada de acordo 
// com o valor de suas vendas. Se o valor da venda de um corretor for m
// aior que R$ 50.000.00 a comissão será de 12% do valor vendido. Se o 
// valor da venda do corretor estiver entre R$ 30.000.00 e R$ 50.000.00 (incluindo extremos) 
// a comissão será de 9.5%. Em qualquer outro caso, a comissão será de 7%. 
// Escreva um programa que imprima o nome, o valor da 
// venda e comissão do corretor.
#include <stdio.h>
#include <string.h>

int main() {
    float venda, comissao;
    char nome;

    printf("==============DADOS==============\n");
    printf("Digite o nome do vendador: \n"); scanf("%c", &nome);
    printf("Digite o valor da venda: \n"); scanf("%f", &venda);

    if((venda > 0) && (venda<30000))
    {
        comissao = venda*0.07;
        if((venda>=30000) && (venda<=50000))
        {
            comissao = venda*0.095;
            if (venda>50000)
            {
                comissao = venda*0.12;
            }
        }
    }
    else
    {
        printf("==============AVISO==============\n");
        printf("Valor digitado para venda invalido!!!\n");
        comissao = 0;
        venda = 0;
        printf("%f\n", venda);
    }
    printf("================IMPRESSAO================\n");
    printf("Nome do vendedor: %c\n", nome);
    printf("Valor da Venda  : R$%f\n", venda);
    printf("Comissao        : R$%f\n", comissao);
}