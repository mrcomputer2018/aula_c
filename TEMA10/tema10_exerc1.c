// Crie uma função que receba um valor e informe se ele é positivo ou não.
#include <stdio.h>

char testaNumero (int a) {
    if (a>0)
    {
        return "Numero e positivo";
    }
    else
    {
        return "Numero e negativo";
    }
}

int main(){
    int numero;
    printf("Digite um numero: \n"); scanf("%d", &numero);
    printf("%s\n", testaNumero(numero));
}