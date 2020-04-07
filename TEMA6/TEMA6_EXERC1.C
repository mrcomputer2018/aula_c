// Faça um programa em C que imprima a tabuada de 10.
#include <stdio.h>

int main() {
    int num, multiplicador=10, resultado;

    for (num = 0; num < multiplicador; num++)
    {
        resultado = num*multiplicador;
        printf("%d x %d = %d\n", num, multiplicador, resultado);
    }
    
}