/* Montar um programa que receba 3 números e apresente o menu de opções ao usuário:

                         Como deseja imprimir os números?
1 – Ordem crescente
2 – Ordem descrescente
3 – Ordem de entrada dos números */
#include <stdio.h>

int main() {
    // declaracao de variaveis
    int num1, num2, num3, ordem;
    // leitura e armazenamento dos dados
    printf("==================DADOS====================\n");
    printf("Digite o primeiro numero: \n"); scanf("%d", &num1);
    printf("Digite o segundo numero: \n"); scanf("%d", &num2);
    printf("Digite o terceiro numero: \n"); scanf("%d", &num3);
    // criando menu para as opacoes de ordenacao
    printf("==================MENU====================\n");
    printf("Como deseja imprimir os números?\n");
    printf("(1)–Ordem crescente\n");
    printf("(2)-Ordem descrescente\n");
    printf("(3)-Ordem de entrada dos números\n");
    // leitura e armazenamento de o ordem
    printf("Digite o codigo da opcao desejada:\n");scanf("%d", &ordem);
    // criando os casos
    switch (ordem)
    {
    case 1:
        if((num1>num2) && (num1>num3))// condicao do num1 ser o maior
        {
            printf("==================IMPRESSAO====================\n");
            printf("A ordem crescente dos numeros e:\n");
            printf("(%d, %d, %d)\n", num3, num2, num1);
        }
        else if ((num1<num2) && (num2>num3))// condicao do num2 ser o maior
        {
            printf("==================IMPRESSAO====================\n");
            printf("A ordem crescente dos numeros e:\n");
            printf("(%d, %d, %d)\n", num3, num1, num2);
        }
            else if ((num1<num2) && (num2<num3))// condicao do num3 ser o maior
            {
                printf("==================IMPRESSAO====================\n");
                printf("A ordem crescente dos numeros e:\n");
                printf("(%d, %d, %d)\n", num1, num2, num3);
            }
            else // // condicao se algum numero for igual
            {
                printf("==================IMPRESSAO====================\n");
                printf("Dois ou mais numeros sao iguais:\n");
                printf("(%d, %d, %d)\n", num1, num2, num3);  
            }
        break;
    case 2:
        if((num1>num2) && (num1>num3))// condicao do num1 ser o maior
        {
            printf("==================IMPRESSAO====================\n");
            printf("A ordem decrescente dos numeros e:\n");
            printf("(%d, %d, %d)\n", num1, num2, num3);
        }
        else if ((num1<num2) && (num2>num3))// condicao do num2 ser o maior
        {
            printf("==================IMPRESSAO====================\n");
            printf("A ordem decrescente dos numeros e:\n");
            printf("(%d, %d, %d)\n", num2, num1, num3);
       
            if ((num1<num2) && (num2<num3))// condicao do num3 ser o maior
            {
                printf("==================IMPRESSAO====================\n");
                printf("A ordem decrescente dos numeros e:\n");
                printf("(%d, %d, %d)\n", num3, num2, num1);
            }
            else// condicao se algum numero for igual
            {
                printf("==================IMPRESSAO====================\n");
                printf("Dois ou mais numeros sao iguais:\n");
                printf("(%d, %d, %d)\n", num1, num2, num3);  
            }
         }
        break;
    case 3:
            printf("==================IMPRESSAO====================\n");
            printf(" A ordem de entrada dos números foi:\n");
            printf("(%d, %d, %d)\n", num1, num2, num3);
        break;
    
    default:
            printf("===================AVISO====================\n");
            printf("Codigo escolhido para ordenacao invalido!!!!\n");
        break;
    }
}