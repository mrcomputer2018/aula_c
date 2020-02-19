//7. Faça um programa que receba o preço de custo de um produto e 
//mostre o valor de venda. Sabe-se que será acrescido um
//percentual informado pelo usuário sobre o preço de custo.
#include <stdio.h>

int main() {

    float produto, percentual, venda, acrescido;

    printf("Digite o valor de custo do produto: ");
    scanf("%f", &produto);
    printf("Digite o percentual a ser acrescido: ");
    scanf("%f", &percentual);

    acrescido = produto*(percentual/100);
    venda = produto+acrescido;

    printf("Preco de Venda: %.2f reais\n", venda);
    return 0;

}