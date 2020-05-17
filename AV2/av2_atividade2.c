// Escreva um programa que determine o número de dias que uma pessoa já viveu. 
// Considere que um mês tenha 30 dias. Utilizar função.
#include <stdio.h>

// funcao do calculo de dias atuais
int calculoHoje(int a, int b, int c) {
    return ((a) + (b*30) + (c*360));
}
// funcao do calculo de dias de nascimento
int calculoNasc(int a, int b, int c) {
    return ((a) + (b*30) + (c*360));
}
// Funcao de calculo de dias de vida
double diaDeVida(int a, int b){
    return (a-b);
}

int main() {
    int dia, mes, ano, diaHoje, mesHoje, anoHoje;
    printf("==========DADOS DO NASCIMENTO=========\n");
    printf("Digite o dia: \n"); scanf("%d", &dia);
    printf("Digite o mes (Ex.: 1 - janeiro): \n"), scanf("%d", &mes);
    printf("Digite o ano (EX.:1970): \n"); scanf("%d", &ano);
    printf("==========DADOS ATUAIS=========\n");
    printf("Digite o dia: \n"); scanf("%d", &diaHoje);
    printf("Digite o mes (Ex.: 1 - janeiro): \n"), scanf("%d", &mesHoje);
    printf("Digite o ano (EX.:2020): \n"); scanf("%d", &anoHoje);
    printf("============RESULTADO===========\n");
    printf("Quantidade de dias vividos: %.2f", diaDeVida(calculoHoje(diaHoje, mesHoje, anoHoje), calculoNasc(dia, mes, ano)));
}