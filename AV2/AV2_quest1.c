// Um colecionador de carros deseja realizar uma  pesquisa referentes as características dos seus veículos.
// Faça um programa que o auxilie nessa missão.  Para tal, deverá ser solicitado de cada veículo: 
// o seu nome (Sim! Colecionador costuma dar nomes aos seus carros!), a sua potência  (HP) e o seu preço de mercado. 
// Sabe-se que será interrompida da solicitação de dados quando for digitado uma potência (HP) igual a zero. 
// Ao final o programa deverá informar:
// - 	a média de  preços dos veículos;
// 	a  porcentagem de veículos com potência (HP) acima de 200;
// 	o nome do veículo com maior potência.
#include <stdio.h>

int main(){
    // declaracao das variaveis
    char nome, maiorPotencia, potenciaNome;
    int potencia, cont, contPotencia, contMedia;
    float preco, mediaPreco, porcPotencia;

    mediaPreco=0.0;
    // criacao do laco de repeticao
    do
    {
        printf("==========ENTRADA DE DADOS==========\n");
        printf("Nome do carro: \n"); scanf("%c", &nome);
        printf("Potencia     : \n"); scanf("%d", &potencia);
        printf("Preço de mercado: \n"); scanf("%f", &preco);
        // condicional para tirar o zero da media
        if (potencia>0)
        {
            mediaPreco = mediaPreco+preco;
            if (potencia > 200)
            {
                // contador para Potencia acima de 200HP
                contPotencia = contPotencia+1;
            }
            if (potencia>maiorPotencia)
            {
                potenciaNome = nome;
                maiorPotencia = potenciaNome;
            }
            // contador para calculo de porcentagem e media de precos
            cont = cont+1;
        }
    } while (potencia=0);
    // calculo da poprcentagem de carros acima de 200HP
    porcPotencia = (contPotencia*100) / cont;
    mediaPreco = mediaPreco / cont;
    printf("==========SAIDA DE DADOS==========");
    

}
