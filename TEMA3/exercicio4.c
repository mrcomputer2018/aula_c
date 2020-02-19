//4. Em épocas de pouco dinheiro, os comerciantes estão procurando aumentar 
//suas vendas oferecendo desconto. Faça um programa
//que possa receber um valor de um produto e que 
//escreva o novo valor tendo em vista que o desconto foi de 9%.
#include <stdio.h>

int main() {
    float produto, desconto, nvalor;

    printf("Digite o valor do produto: ");
    scanf("%f", &produto);

    desconto = produto*0.09;
    nvalor = produto-desconto;

    printf("Valor do desconto: %.2f reais\n", desconto);
    printf("Valor a ser pago com desconto: %.2f reais\n", nvalor);
    return 0;
}