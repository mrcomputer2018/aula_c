// Faça um programa que imprima os múltiplos positivos de 7, inferiores a 100.
#include <stdio.h>

int main() {
    int i, cont=100;
    
    printf("============IMPRESSAO=============\n");
    printf("Os multiplos de 7 ate 100:\n");
    for (i = 0; i < cont; i=i+7)
    {
        if (i%7==0)
        {
            printf("%d\n", i);
        }
    }
}