//3. Faça um programa que leia as 3 notas de um aluno 
//e calcule a média final deste aluno. Considerar que a 
//média é ponderada e que
//o peso das notas é: 2,3 e 5, respectivamente.
#include <stdio.h>

int main() {
    int num1, num2, num3;
    float media;

    printf("Digite a primeira nota: ");
    scanf ("%d", &num1);
    printf("Digite a segunda nota: ");
    scanf ("%d", &num2);
    printf("Digite a terceira nota: ");
    scanf ("%d", &num3);

    media = (num1*2+num2*3+num3*5)/10;

    printf("A media ponderada das notas foi: %.2f\n", media);
    return 0;
}