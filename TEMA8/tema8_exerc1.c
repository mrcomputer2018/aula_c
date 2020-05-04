// Faça um programa que leia um conjunto de números (X) e imprima sua soma (Soma) e sua 
// média (Media). Admita que o valor 9999  utilizado como sentinela para fim de leitura.
// Ex.: 1, 2, 3 => Soma=6 Media=2
#include <stdio.h>

int main() {
    // declatando variaveis
    int num, contNum=1;
    float media, soma;
    // criando laco de repeticao
    do
    {
        printf("==========INSIRA OS DADOS==========\n");
        printf("Dogite o %do. numero", contNum); scanf("%d", &num);
    } while (num != 9999);
    


}