// A Brasileiras.com está concedendo um desconto de 5% para as compras pagas com boleto. Faça um programa 
// para ler o valor da compra e pergunte se será paga com boleto. Caso positivo, conceda o desconto 
// e informe e valor a pagar.
#include <stdio.h>

int main() {
    float valorCompra,  desconto, valorPagar;
    char boleto;

    printf("=============CAIXA============\n");
    printf("Digite o valor da compra: \n"); scanf("%f", &valorCompra);
    printf("Sera pago com boleto?\n");
    printf("(S)- sim\n");
    printf("(N)- Nao\n");
    scanf("%s", &boleto);
    if (boleto=='s'|| boleto=='S')
    {
        desconto = valorCompra*0.05;
        valorPagar = valorCompra - desconto;
        printf("==============AVISO==============\n");
        printf("Cliente ganhou 5%% de desconto\n");
    }
    else if(boleto=='n'|| boleto=='N')
    {
        desconto = valorCompra*0;
        valorPagar = valorCompra;
        printf("==============AVISO==============\n");
        printf("Cliente nao ganhou desconto\n");
    }
    else
    {
        printf("==============AVISO==============\n");
        printf("Codigo opcao de boleto invalido!!!\n");
        desconto = 0;
        valorPagar = 0; 
    }
    printf("============CLIENTE=============\n");
    printf("Valor do desconto  : R$%.2f\n", desconto);
    printf("Valor total a pagar: R$%.2f\n", valorPagar);
}