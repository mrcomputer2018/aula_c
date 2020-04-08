// Faça um programa que leia dois valores para as variáveis A e B e efetue a troca dos valores de forma 
// que a variável A passe a possuir o valor da variável B e a variável B passe a possuir o valor da 
// variável A. Apresente os valores trocados. O programa deverá permitir a troca
// dos números cinco vezes.
#include <stdio.h>

int main() {
    // declarando variaveis
    int a, b, temp, i, count=5;
    // repeticao
    for ( i = 0; i <= count; i++)
    {
        printf("===========ORDENADOR===========\n");
        printf("Digite o valor da variavel A: \n"); scanf("%d", &a);
        printf("Digite o valor da variavel B: \n"); scanf("%d", &b);
        // fazendo a troca dos valores das variaveis
        temp = a;
        a = b;
        b = temp;
        printf("Novo valor de A : %d - ", a);
        printf("Novo valor de B : %d \n", b);
    }
    printf("+++++++Fim do programa++++++++\n");
}