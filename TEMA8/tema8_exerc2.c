// Faça um programa que leia um conjunto de dados numéricos (X) e imprima o maior 
// (Maximo) dentre eles. Admita que o valor 9999 é utilizado como sentinela.
// Ex.: 1, 2, 3 => Maior=3
#include <stdio.h>

int main() {
    // declarando variaveis
    int num, cont=1, maior=0, saida;
    // criando o laco de repeticao
    do
    {
        printf("==========INSIRA OS DADOS=========\n");
        printf("Digite o %do. numero:\n", cont); scanf("%d", &num);
        if (num>maior)
        {
            maior=num;
        }
        else
        { 
            maior=maior;
        }
        printf("*****************************************\n");
        printf("** Digite 0 p/continuar ou 9999 p/sair **\n");
        printf("*****************************************\n");
        scanf("%d", &saida);
        cont++;
    } while (saida!=9999);
    printf("Maior numero digitado foi: %d\n", maior);
}