//6. A Loja Mamão com Açúcar está vendendo seus produtos em 5 (cinco) 
//prestações se m juros. Faça um programa que receba um
//valor de uma compra e mostre o valor das prestações
#include <stdio.h>

int main() {
    float produto, parcela;

    printf("Digite o valor do produto comprado: ");
    scanf("%f", &produto);

    parcela = produto/5;

    printf("Valores das parcelas em 5X sem juros: %.2f reais\n", parcela);
    return 0;

}