// Montar um programa para imprimir uma lista, onde todos os parâmetros serão informados pelo usuário.
// Exemplos:
// Valor inicial: 1  | Valor final: 10  |  Incremento: 1  |  Ordem: Ascendente 
// Resultado: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
 
// Valor inicial: 2  | Valor final: 20  |  Incremento: 2  |  Ordem: Descendente 
// Resultado: 20, 18, 16, 14, 12, 10, 8, 6, 4, 2
#include <stdio.h>
#include <string.h>
#include<stdlib.h> //biblioteca que chama o system("cls");

int main(){
    // Declaracao de variaveis
    char teste [2]; // string para teste de saida do programa
    int ordem, valorInicial, valorFinal, incremento;
    // laco de repeticao para execucao do programa
    do
    {
        printf("============ENTRADA DE DADOS============\n");
        printf("Digite o que for pedido: \n");
        printf("Valor inicial: \n"); scanf("%d", &valorInicial);
        printf("Valor final: \n"); scanf("%d", &valorFinal);
        printf("Incremento: \n"); scanf("%d", &incremento);
        printf("Escolha a ordem: \n"); 
        printf("(1) - Ascendente\n");
        printf("(2) - Descendente\n");
        scanf("%d", &ordem);
        // condicional para fazer a impressao na ordenacao ascendente
        if (ordem == 1)
        {
            printf("Resultado:");
            // laco de repeticao para impressao dos numero do intervalo desejado
            // ordem ascendente
            for (int i = valorInicial; i <= valorFinal; i=i+incremento)
            {
                printf(" %d", i);
                if (i < valorFinal)// condiconal para impressao das virgulas 
                {
                    printf(",");
                }
            }
        }
        // condicional para fazer a impressao na ordenacao descendente
        else if (ordem == 2)
        {
            printf("Resultado:");
            // laco de repeticao para impressao dos numero do intervalo desejado
            // ordem descendente
            for (int i = valorFinal; i >= valorInicial; i=i-incremento)
            {
                printf(" %d", i);
                if (i > valorInicial)// condiconal para impressao das virgulas 
                {
                    printf(",");
                }
            }
        }
        // condicional para um valor fora do sugerido no menu de ordenacao
        else
        {
            printf("***Opacao escolhida invalida p/ ordenacao****\n");
        }
        printf("\n\n***************************************\n");
        printf("Digite (S) p/ continuar ou (N) p/ sair:\n");
        scanf("%s", &teste);
        system("cls");
    } while ((strcmp(teste,"S")==0 ) || (strcmp(teste,"s")==0));// condicional de saida do programa
system("cls");// limpa tela para windows. se fosse linux seria clear.
printf(" \n");
printf("****************************\n");
printf("*****Programa encerrado*****\n");
printf("****************************\n");
}

