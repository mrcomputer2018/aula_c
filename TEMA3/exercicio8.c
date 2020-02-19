//8. O custo ao consumidor, de um carro novo, é a soma do custo 
//de fábrica com a percentagem do distribuidor e dos impostos
//(aplicados ao custo de fábrica). Supondo que a percentagem do distribuidor 
//seja de 28% e os impostos de 45%, escrever um
//programa para ler o custo de fábrica de um carro e escrever o custo 
//ao consumidor.
#include <stdio.h>

int main() {
    float cfabrica, cconsumidor, pdist, imposto;

    printf("Digite o custo de fabrica: ");
    scanf("%f", &cfabrica);

    pdist = cfabrica*0.28;
    imposto = cfabrica*0.45;
    cconsumidor = cfabrica+pdist+imposto;

    printf("Valor percentual da distribuidora: %.2f reais\n", pdist);
    printf("Valor dos impostos: %.2f reais\n", imposto);
    printf("O valor de custo do consumidor sera de: %.2f reais\n", cconsumidor);
    return 0;
}