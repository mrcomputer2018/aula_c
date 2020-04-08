// Faça um programa que leia cinco temperaturas em graus Celsius e apresente-as convertidas em graus 
// Fahrenheit. A fórmula de conversão é: F = (9 * C + 160) / 5, na qual F é a temperatura em Fahrenheit 
// e C é a temperatura em Celsius
#include <stdio.h>

int main() {
    int i;
    float tempC, tempF;
    // repeticao
    for (i=0; i <=5; i++)
    {
    // lendo e armazaanado dados 
    printf("==============CONVERSOR==============\n");
    printf("Digite a temperatura em graus C: \n"); scanf("%f", &tempC);
    // calculos
    tempF = (9 * tempC + 160) / 5;
    printf("Temperatuta em graus Fahrenheit: %.2f F\n", tempF);
    }
    printf("+++++++Fim do programa++++++++\nExecute novamente o programa\nse quiser fazer conversoes.\n");
}