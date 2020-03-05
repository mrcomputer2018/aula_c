// Uma revendedora de carros usados paga a seus funcionários vendedores 
// um salário fixo por mês, mais uma comissão também fixa para cada 
// carro vendido e mais 5% do valor das vendas por ele efetuadas. 
// Escrever um programa que leia o número de carros por ele vendidos, 
// o valor total de suas vendas, o salário fixo e o valor que ele recebe 
// por carro vendido. 
// Calcule e escreva o salário final do vendedor.
#include <stdio.h>
int main() {
    int nCarVend;
    float totalVendas, totalComFixa, comFixa, porcVenda, salFixo, salFinal;

    printf("Numero de carros vendidos: "); scanf("%d", &nCarVend);
    printf("Valor total de vendas: "); scanf("%f", &totalVendas);
    printf("Salario fixo: "); scanf("%f", &salFixo);
    printf("Valor da comissao fixa por carro vendido: "); scanf("%f", &comFixa);

    totalComFixa = nCarVend*comFixa;
    porcVenda = totalVendas*0.05;
    salFinal = totalComFixa + porcVenda + salFixo + totalVendas;

    printf("====================\n");
    printf("Salario final do vendedor: R$ %.2f", salFinal);
    return 0;

}