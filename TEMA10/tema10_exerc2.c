// Crie uma função que receba um valor e diga se é nulo ou não.
#include <stdio.h>

char *nulo(int a) {
    if (a!=0)
    {
        return "Numero nao e nulo\n";
    }
    else
    {
        return "Numero e nulo\n";
    }
}

int main() {
    int numero;
    printf("Digite um nunero: "); scanf("%d", &numero);
    printf("%s\n", nulo(numero));
}