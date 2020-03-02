// implemente um programa que indique se um numero e positivo ou negativo
#include <stdio.h>

int main() {
    int num1;

    printf("Digite um numero: ");
    scanf("%d", &num1);

    if (num1>=0) 
    {
        printf("O numero %d e positivo\n", num1);
    }
    else 
    {
        printf("O numero %d e negativo\n", num1);
    }
    return 0;
}