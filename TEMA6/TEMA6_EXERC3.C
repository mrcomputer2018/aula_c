// Um número natural triangular é igual à soma dos n primeiros números naturais consecutivos,
// a partir de 1. Por exemplo, 1, 3, 6, 10, 15, ... são triangulares. 
// Faça um programa que, dado um natural n>=1, informe se ele é triangular.
#include <stdio.h>

int main() {
    int num1=1, aux, triangular, resultado ;
    
    printf("Digite o numero a ser verificado: \n"); scanf("%d", &triangular);
    resultado = (num1*(num1+1))/2;
    for (num1 = 1; resultado <= triangular; num1++)
    {
        resultado = (num1*(num1+1))/2;
        if (resultado == triangular)
        {
            aux=1;
            break;
        }
        else if(resultado !=triangular)
        {
            aux=0;
            continue;  
        }
    }
    if (aux==1)
    {
        printf("+++ Numero e triangular +++\n");
    }
    else
    {
        printf("+++ Numero nao e triangular +++\n");
    }
    printf("FIM do PROGRAMA\n", num1);   
}