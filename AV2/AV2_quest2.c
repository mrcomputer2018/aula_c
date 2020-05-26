// Montar um programa para imprimir uma lista, onde todos os parâmetros serão informados pelo usuário.
// Exemplos:
// Valor inicial: 1  | Valor final: 10  |  Incremento: 1  |  Ordem: Ascendente 
// Resultado: 1, 2, 3, 4, 5, 6, 7, 8, 9, 10
 
// Valor inicial: 2  | Valor final: 20  |  Incremento: 2  |  Ordem: Descendente 
// Resultado: 20, 18, 16, 14, 12, 10, 8, 6, 4, 2
#include <stdio.h>

int main(){
    // Declaracao de variaveis
    char ordem, teste;
    int i, valorInicial, valorFinal, incremento;
    do
    {
        printf("============ENTRADA DE DADOS============\n");
        printf("Digite o que for pedido: \n");
        printf("Valor inicial: \n"); scanf("%d", &valorInicial);
        printf("Valor final: \n"); scanf("%d", &valorFinal);
        printf("Incremento: \n"); scanf("%d", &incremento);
        printf("Escolha a ordem: \n"); 
        printf("(A) - Ascendente\n");
        printf("(D) - Descendente\n");
        scanf("%c", &ordem);
        if (ordem == "A")
        {
             for (int i = valorInicial; valorInicial <= valorFinal; i=i+incremento)
            {
                printf("%d,", i);
            }
        }
        else if (ordem == "D")
        {
            for (int i = valorFinal; valorFinal >= valorInicial; i=i-incremento)
            {
                printf("%d,", i);
            }
        }
        else
        {
            printf("***Opacao escolhida invalida p/ ordenacao****");
        }
        printf("Digite (S) p/ continuar ou (N) p/ sair:\n");
    } while (teste != "S" || teste != "s" );
printf("*****Programa encerrado*****");
}