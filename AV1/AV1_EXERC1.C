/* Faça um programa para ler o salário fixo e o valor das vendas efetuadas pelo vendedor de uma empresa. 
Sabendo-se que ele recebe uma comissão de 3% sobre o total das vendas até R$ 1.500,00 mais 5% sobre o que 
ultrapassar este valor, calcular e escrever o seu salário total.*/
#include <stdio.h>

int main() {
    float salFixo, salTotal, vendas, vendas2, comissao, comissao2; // declarando as variaveis
    // leitura e armazenamento na memoria dos dados
    printf("=================DADOS==================\n");
    printf("Digite o valor do salario fixo: R$\n"); scanf("%f", &salFixo);
    printf("Digite o valor das vendas: R$\n"); scanf("%f", &vendas);
    //condicao
    if ((vendas>=0) && (vendas<=1500))// condicao 1
    {
       //calculo condicao 1
       comissao=vendas*0.03; 
    }
    else if (vendas>1500)// condicao 2
    {
        vendas2= vendas-1500; // calculo do valor que ultrapassou
        comissao2 = vendas2*0.05;// calculo da comissao que ultrapassou
        comissao=(vendas*0.03)+comissao2;// calculo da comissao final
    }
    else
    {
        // mensagem para ser exibida se as condicoes acima foram falsas
        printf("===============AVISO================\n");
        printf("Valor de venda invalido!!!\n");
        printf("Digite novamente\n");
        salFixo=0;
        vendas = 0;
    }
    salTotal=salFixo+comissao; // calculo do salario total
    printf("===============VENDEDOR================\n");// Exibindo na tela os resultados
    printf("Valor do salario Fixo: R$%.2f\n", salFixo);
    printf("Valor das vendas     : R$%.2f\n", vendas);
    printf("Valor da comissao    : R$%.2f\n", comissao);
    printf("Valor total a receber : R$%.2f\n", salTotal);
}