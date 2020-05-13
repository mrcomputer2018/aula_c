// Crie uma função que receba três valores, 'a', 'b' e 'c', que são os coeficientes de uma equação 
// do segundo grau e retorne o valor do delta, que é dado por 'b² - 4ac.
#include <stdio.h>

float delta(int a, int b, int c){
    return ((b*b)-(4*a*c));
}
int main() {
    int coef1, coef2, coef3;
    printf("Digite o valor do coeficiente A: \n");scanf("%d", &coef1);
    printf("Digite o valor do coeficiente B: \n");scanf("%d", &coef2);
    printf("Digite o valor do coeficiente C: \n");scanf("%d", &coef3);
    printf("Delta: %.2f\n", delta(coef1, coef2, coef3));
}