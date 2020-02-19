//1. Dado um número inteiro não-nulo, imprima o seu quadrado
#include <stdio.h>

int main() {
    int numero, quadrado;

    printf ("Digite o numero: ");
    scanf ("%d", &numero);

    quadrado = numero*numero;

    printf ("O quadrado e: %d\n", quadrado);

    return 0;
}