// Escrever um programa que leia uma quantidade desconhecida de números e conte
// quantos deles estão nos seguintes intervalos: [0..25], [26..50], 
// [51..75] e [76..100]. A entrada de dados deve terminar 
// quando for lido um número negativo.
#include <stdio.h>

int main() {
    // declarando variaveis e atribuindo valor a constante
    int num, inter1=0, inter2=0, inter3=0, inter4=0;
    // Laco de repeticao e condicao do laco
    while (num >=0)
    {
        printf("===============DADOS===============\n"); 
        printf("Digite um numero (negativo p/sair): \n");scanf("%d", &num);
        // condicao para a soma dos numeros dos intervalos
        if ((num >=0) && (num <=25))
        {
            inter1 = inter1 + 1;
        }
        else {
            if ((num >=26) && (num<=50))
            {
                inter2 = inter2 + 1;
            }
            else
            {
                if ((num>=51) && (num<=75)) 
                {
                    inter3 = inter3 + 1;
                }
                else
                {
                    if ((num>=76) && (num<=100) )
                    {
                        inter4 = inter4 + 1;
                    }
                }
            }
        }
    }
    printf("=================IMPRESSAO=================\n");
    printf("Quantd de numeros no intervalo[0..25]  : %d\n", inter1);
    printf("Quantd de numeros no intervalo[26..50] : %d\n", inter2);
    printf("Quantd de numeros no intervalo[51..75] : %d\n", inter3);
    printf("Quantd de numeros no intervalo[76..100]: %d\n", inter4);
    printf(" FIM DO PROGRAMA \n");
}