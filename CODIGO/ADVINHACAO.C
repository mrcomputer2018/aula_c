// Jogo da advinhacao
#include <stdio.h>
#include <stdlib.h> // para o uso da funcao abs()
#include <time.h> // para usar a semente na funcao rad()
#define numero_de_tentativas 3;

int main() {
    // Tela de boas vindas
    printf("************************************\n");
    printf("* Bem-vindo ao jogo de advinhacao  *\n");
    printf("************************************\n");
    // declarando variaveis
    int chute, ganhou = 0, tentativas = 1;
    double pontos = 1000; 
    // gerando a semente e numero secreto randomico 
    int segundos = time (0);
    srand(segundos);
    // tornando um numero randomico pequeno
    int numeroGrande = rand();
    int numeroSecreto = numeroGrande % 100;
    // criando o laco de repeticao
    while (!ganhou)
    {
        // leitura de dados
        printf("Qual e o seu %do.chute?\n", tentativas); scanf("%d", &chute);
        // declarando variavel local
        int numeroNegativo = chute < 0;
        //adicionando condicional
        if(numeroNegativo)
        {
            printf("Voce nao pode chutar numeros negativos!\n");
            // decremento de tentativas
            tentativas--;
            continue;
        }
        else
        {
            printf("Seu %do. chute o numero: %d\n", tentativas, chute);
            // atribuicao a variavel do if
            int acertou = chute == numeroSecreto;
            printf("Acertou: %d\n", acertou);
            // declarando variavel local para if condicao maior
            int maior = chute > numeroSecreto;
            // impressao do numero se acertou de primeira
            if (acertou)
            {
                printf("***Parabens! Voce acertou!***\n");
                printf("Jogue de novo, voce e um bom jogador!\n");
                break;
            }
            else if (maior)
            {
                printf("Seu chute foi maior do que o numero secreto!\n");
            }
            // else condicao menor
            else
            {
                printf("Seu chute foi menor do que o numero secreto!\n");
            }
            // contador
            tentativas++;
            printf("** Voce errou! **\n");
            printf("Mas nao desanime, tente de novo!\n");
        }
        // usando double apara transformar uma conta de variaveis inteiras em decimais
        // Usamos o recurso casting
        double pontosPerdidos = (double) abs(chute - numeroSecreto) / (double) 2;
        pontos = pontos - pontosPerdidos;  
    }
    printf("***Fim de Jogo!***\n");
    printf("Voce fez %.2f pontos\n", pontos);
    printf("****Obrigado por Jogar!****\n");
}