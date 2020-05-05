// Faça um programa que leia um número FN, calcule e mostre os N primeiros termos da sequência de 
// Fibonnaci (0, 1, 1, 2 , 3, 5, 8, ...). O valor lido 
// para N sempre será maior ou igual a 2.
#include <stdio.h>

int main(){
    // declaracao de variaveis
    int i, FN, termo1, termo2, acum;
    termo1=1;
    termo2=1;
    i=3;
    printf("=========INSIRA OS DADOS=========\n");
    printf("Digite o numero p/ seq Fibonnaci: \n"); scanf("%d", &FN);
    printf("Sequencia Fibonnaci :\n");
    printf("%d\n", termo1);
    printf("%d\n", termo2); 
    // criacao do laco de repeticao
    do
    {
        acum= termo1+termo2;
        termo2=termo1;
        termo1=acum;
        i++;
        printf("%d\n", termo1);
        printf("%d\n", termo2);   
    } while (i < FN);
}



/*Var
// Seção de Declarações das variáveis
   i, termo1, termo2, acum:inteiro

Inicio
// Seção de Comandos, procedimento, funções, operadores, etc...
   termo1 <- 1
   termo2 <- 1
   para i de 3 ate 20 passo 1 faça
        acum <- termo1+termo2
        termo2 <- termo1
        termo1 <- acum
   fimpara
   escreval(acum)

Fimalgoritmo*/