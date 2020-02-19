//5. Faça o programa que calcule o valor em Reais, correspondente aos dólares 
//que um turista possui no cofre do hotel. Solicitar os
//dados: Quantidade de dólares guardados no cofre e 
//cotação do dólar naquele dia.
#include <stdio.h>

int main() {
    float dolares, cotacao, vreais;

    printf("Digite a catocao do dolar do dia: US$ ");
    scanf("%f", &cotacao);
    printf("Digite o valor em dolares: US$ ");
    scanf("%f", &dolares);

    vreais = cotacao*dolares;

    printf("Volar em reais no cofre e: %.2f reias\n", vreais);
    return 0;

}