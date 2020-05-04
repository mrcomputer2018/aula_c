// Faça um programa que leia um conjunto de números (X) e imprima a quantidade de 
// números pares (QPares) e a quantidade de números impares (QImpares) lidos. 
// Admita que o valor 9999 é utilizado como sentinela para fim de leitura.
// Ex.: 1,2,3,4,5 => Pares=2 Impares=3
#include <stdio.h>

int main() {
    // declarando variaveis
    int num,cont=1, saida, qPares=0, qImpares=0;
    float teste;
    // criando laco de repeticao
    do
    {
        printf("===========INSIRA OS DADOS===========\n");
        printf("Digite o %do. numero: \n", cont); scanf("%d", &num);
        cont++;
        if (num%2==0)
        {
            qPares=qPares+1;
        }
        else 
        {
            qImpares=qImpares+1;
        }
        printf("********************************\n");
        printf("* 0 p/continuar ou 9999 p/sair *\n");
        printf("********************************\n");
        scanf("%d", &saida);
    } while (saida != 9999);
    printf("============RESULTADO==========\n");
    printf("Quantd de numeros pares  : %d\n", qPares);
    printf("Quantd de numeros impares: %d\n", qImpares);
}