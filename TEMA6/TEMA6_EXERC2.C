// Com base no exercício anterior, faça um programa em C que pergunte ao 
// usuário a tabuada desejada e a partir desse valor exiba o cálculo 
// correspondente.
#include <stdio.h>

int main () {
    int num, tabuada, resultado;

    printf("=============TABUADA==============\n");
    printf("Digite a tabuada desejada: \n"); scanf("%d", &tabuada);
    printf("=============RESULTADO=============\n");
    printf("Tabuada de %d e:\n", tabuada);

    for (num = 0; num <= 10; num++)
    {
        resultado = num*tabuada;
        printf("%d x %d = %d\n", num, tabuada, resultado);
    }
    
}