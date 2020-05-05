// Jogo da advinhacao
#include <stdio.h>
#define numero_de_tentativas 3;

int main() {
    // Tela de boas vindas
    printf("************************************\n");
    printf("* Bem-vindo ao jogo de advinhacao  *\n");
    printf("************************************\n");
    // declarando variaveis
    int numeroSecreto = 42, chute, ganhou = 0, tentativas = 1; 
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
    }
    printf("Fim de Jogo!\n");
    printf("Obrigado por Jogar!\n");
}