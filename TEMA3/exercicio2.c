//2. Faça um programa que leia as 3 notas de um aluno 
//e calcule a média aritmética deste aluno.
#include <stdio.h>

int main() {
    int num1, num2, num3;
    float media;

    printf("Digite o primeira nota: ");
    scanf ("%d", &num1);
    printf ("Digite a segunda nota: ");
    scanf ("%d", &num2);
    printf ("Digite a terceira nota: ");
    scanf ("%d", &num3);

    media =(num1+num2+num3)/3;

    printf ("A media das tres notas foi: %.2f\n", media);
    return 0;
}