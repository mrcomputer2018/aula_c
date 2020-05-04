// Faça um programa que leia um conjunto de números (X) e imprima sua soma (Soma) e sua 
// média (Media). Admita que o valor 9999  utilizado como sentinela para fim de leitura.
// Ex.: 1, 2, 3 => Soma=6 Media=2
#include <stdio.h>

int main() {
    // declatando variaveis
    int num, contNum=1, saida;
    float media, soma;
    // criando laco de repeticao
    do
    {
        printf("==========INSIRA OS DADOS==========\n");
        printf("Digite o %do. numero\n", contNum); scanf("%d", &num);
        soma=soma+num;
        contNum++;
        printf("digite 9999 p/sair"); scanf("%d", &saida);
    } while (saida != 9999);
    media = soma/contNum;
    printf("===========IMPRESSAO==========\n");
    printf("A Soma dos numeros foi : %.2f\n", soma);
    printf("A media dos numeros foi: %.2f\n", media);
}