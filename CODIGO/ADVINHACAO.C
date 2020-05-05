// Jogo da advinhacao
#include <stdio.h>
#define numero_de_tentativas 3;

int main() {
    int chute;

    printf("************************************\n");
    printf("* Bem-vindo ao jogo de advinhacao  *\n");
    printf("************************************\n");
    // criando o laco de repeticao
    for (int i = 1; i <= numero_de_tentativas; i++)
    {
        // leitura de dados
        printf("Qual e o seu %do.chute?\n", i); scanf("%d", &chute);
        printf("Seu %do. chute o numero: %d\n", i, chute);
        // declarando variavel local
        int numeroSecreto = 42;
        int numeroNegativo = chute < 0;
        //adicionando condicional
        if (numeroNegativo)
        {
            printf("Voce nao pode chutar numeros negativos!\n");
            // decremento de i
            i--;
        }
        else
        {
            // atribuicao a variavel do if
            int acertou = chute == numeroSecreto;
            printf("Acertou: %d\n", acertou);
            // declarando variavel local para if condicao maior
            int maior = chute > numeroSecreto;
            // impressao do numero se acertou de primeira
            if (acertou)
            {
                printf("Parabens! Voce acertopu!\n");
                printf("Jogue de novo, voce e um bom jogador!\n");
                break;
            }
            else if (maior)
            {
                printf("Seu chute foi maior do que o numero screto!\n");
            }
            // else condicao menor
            else
            {
                printf("Seu chute foi menor do que o numero screto!\n");
            }
            printf("Voce errou!\n");
            printf("Mas nao desanime, tente de novo!\n");
        }
    }
    printf("Fim de Jogo!\n");
    printf("Obrigado por Jogar!\n");
}