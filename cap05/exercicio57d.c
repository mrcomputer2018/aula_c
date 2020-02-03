#include <stdio.h>
/* Programa para calcular o produto de quatro
numeros */
int main()
{
    /* Declarando variaveis */
    int a, b, c, d, produto;

    /* Lendo um valor digitado */
    printf("Digite o primeiro numero: ", a);
    scanf("%d", &a);
    printf("Digite o segundo numero: ", b);
    scanf("%d", &b);
    printf("Digite o terceiro numero : ", c);
    scanf("%d", &c);
    printf("Digite o quarto numero: ", d);
    scanf("%d", &d);

    /* Fazendo o calculo */
    produto= a*b*c*d;

    /* Imprimindo o resultado */
    printf("O Produto dos numeros foi:\n %d", produto);

    return 0

}