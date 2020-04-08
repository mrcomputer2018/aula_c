// Um número natural triangular é igual à soma dos n primeiros números naturais consecutivos,
// a partir de 1. Por exemplo, 1, 3, 6, 10, 15, ... são triangulares. 
// Faça um programa que, dado um natural n>=1, informe se ele é triangular.
#include <stdio.h>

int main() {
    int triangular;
    float  num=1, num2;

    printf("Digite o numero a ser verificado: \n"); scanf("%d", &triangular);

    num2 = (num*(num+1))/2;
    if (num2 != triangular)
    {
        num2 = (num*(num+1))/2;
        for (num = 1; num == triangular; num++)
        {
            num2 = (num*(num+1))/2; 
            printf("%.2f\n", num2);          
        }
        printf("%.2f\n", num2);
        printf("O Numero %d e triangular\n", triangular);
    }
    else
        printf("O Numero %d nao e triangular\n", triangular);
}