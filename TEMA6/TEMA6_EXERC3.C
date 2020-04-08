// Um número natural triangular é igual à soma dos n primeiros números naturais consecutivos,
// a partir de 1. Por exemplo, 1, 3, 6, 10, 15, ... são triangulares. 
// Faça um programa que, dado um natural n>=1, informe se ele é triangular.
#include <stdio.h>

int main() {
    int num, teste, triangular;
    float num2;

    printf("Digite o numero a ser verificado: \n"); scanf("%d", &triangular);

    for (num = 1; num <= num2; num++)
    {
        num2 = (num*(num+1))/2;
        if (num2 == triangular)
        {
          teste = 1;
        }
        else
        {
           teste = 0; 
        }
         printf("%d imprimindo num1\n", num);
        printf("%f imprimindo num2\n", num2);
    }
    printf("%d imprimindo valor de teste\n", teste);
    if (teste == 1)
        printf("Numero e triangular\n");
    else
    {
        printf("Numero nao e triangular\n");
    }
    
}