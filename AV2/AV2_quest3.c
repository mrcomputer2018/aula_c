// Considere um caixa automático com apenas um repositório com capacidade para armazenar 1000 notas de 10 reais. 
// Elabore um programa para ler um valor e fornecer a quantidade de notas correspondente a esse valor. 
// O seu programa deve manter a quantidade de notas no repositório atualizada. 
// Caso o valor lido não possa ser fornecido por falta de notas, o programa deve imprimir uma mensagem 
// indicando o fato. O programa também deve imprimir uma mensagem se o valor não for múltiplo de 10. 
// Após o tratamento do valor lido, com a impressão da mensagem ou o fornecimento das notas correspondentes,
// o procedimento deve ser repetido. O programa deve parar quando um valor lido for negativo. 
// Obs: Para alguma operação (a sua escolha) utilize função.
#include <stdio.h>
#include <string.h>
#include <stdlib.h> //biblioteca que chama o system("cls");

int main() {
    int repositorio;
    float valorSaque;
    
    repositorio=1000;
    do
    {
        printf("Informe o valor(negativo p/sair):\n"); scanf("%d", valorSaque);
    } while (valorSaque < 0);
    system("cls");// limpa tela para windows. se fosse linux seria clear.
    printf(" \n");
    printf("****************************\n");
    printf("*****Programa encerrado*****\n");
    printf("****************************\n");
    printf(" \n");
}