// Considere a seguinte situação: Um país A, com 5.000.000 de habitantes e uma taxa 
// de natalidade de 3% ao ano, e um país B com 7.000.000 de habitantes e uma taxa 
// de natalidade de 2% ao ano. Faça um programa em C que calcule e imprima o 
// tempo necessário para que a população do país A ultrapasse a população 
// do país B.
#include <stdio.h>

int main(){

    int count;
    float paisA, paisB;
    //calculo
    count=1;  
    paisA = 5;
    paisB = 7;
    while (paisA < paisB)
    {
      paisA = paisA+1.03;
      paisB = paisB+1.02;
      count++;
      printf("%.2f paisA\n", paisA);
      printf("%.2f paisB\n", paisB);
      printf("%d cont\n", count);
    }
    printf("Tempo necessario de: %d anos\n", count);

}