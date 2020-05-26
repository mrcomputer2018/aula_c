// Um colecionador de carros deseja realizar uma  pesquisa referentes as características dos seus veículos.
// Faça um programa que o auxilie nessa missão.  Para tal, deverá ser solicitado de cada veículo: 
// o seu nome (Sim! Colecionador costuma dar nomes aos seus carros!), a sua potência  (HP) e o seu preço de mercado. 
// Sabe-se que será interrompida da solicitação de dados quando for digitado uma potência (HP) igual a zero. 
// Ao final o programa deverá informar:
// - 	a média de  preços dos veículos;
// 	a  porcentagem de veículos com potência (HP) acima de 200;
// 	o nome do veículo com maior potência.
#include <stdio.h>
#include <string.h>

int main(){
    // declaracao das variaveis
    char nome [15], potenciaNome [15];
    int potencia, contPotencia, maiorPotencia;
    float cont;
    double preco, mediaPreco, porcPotencia;

    mediaPreco = 0.00;
    cont = 0.00;
    contPotencia = 0.00;
    maiorPotencia = 0;
    // criacao do laco de repeticao
    do
    {
        printf("==========ENTRADA DE DADOS==========\n");
        printf("Nome do carro: \n"); scanf("%s", &nome);
        printf("Preco de mercado: \n"); scanf("%lf", &preco);
        printf("Potencia     : \n"); scanf("%d", &potencia);
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
                maiorPotencia = potencia;
                strcpy(potenciaNome, nome ); // para copiar o valor de uma string p outra
            }
            // contador para calculo de porcentagem e media de precos
            cont = cont+1.0;
        }
    } while (potencia!=0); // condicao para saida do laco
    // calculo da poprcentagem de carros acima de 200HP
    porcPotencia = (contPotencia*100) / (double) cont;
    mediaPreco = mediaPreco / cont;
    printf("=============SAIDA DE DADOS=============\n");
    printf("Media de preco                  : R$ %.2f\n", mediaPreco);
    printf("Porc. de veiculos acima de 200Hp: %.2f porc.\n", porcPotencia);
    printf("Nome do carro com maior Hp      : %s\n", potenciaNome);
}
