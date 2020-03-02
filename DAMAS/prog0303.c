// Implemente um programa que indique se o inteiro e zero ou nao

#include <stdio.h>
main() {
    int num1;

    printf("Digite o numero: ");
    scanf("%d", &num1);

    if (num1 !=0)
        printf("%d nao e \n", num1);

    else printf("%d e zero!!!\n", num1);
}