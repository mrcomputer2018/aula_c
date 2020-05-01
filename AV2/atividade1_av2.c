// Considere que, para cada um dos hotéis fazenda da região, se tenha registrado o nome do hotel, a sua 
// distância do centro da cidade (DA), o número médio de visitantes no último feriado (V) e o tipo de 
// acesso ao hotel (AC sendo 0 – acesso não asfaltado; 1 – acesso asfaltado).
// Construa um programa que leia esses dados e ao final informe:
// a) O número de hotéis que distam mais de 15km do centro;
// b) A quantidade média de visitantes no último feriado, nos hotéis com acesso não asfaltado;
// c) O nome e a distância do centro em Km, de todos os hotéis de acesso asfaltado que tiveram menos 
// de 1.000 visitantes.
// Exemplo de entrada :
// Hotel A, DA=10, V=100, AC=0
// Hotel B, DA=20, V=50, AC=1.
#include <stdio.h>
#include <string.h>

int main() {
    char nomeHotel , saida, nomeHotelA[10];
    int i=0, cont=0, DA, V, AC, numHotel=0, contArray=0, DAArray[10];
    float mediaAC;
    // condicional para continuidade do laco de repeticao
    while (saida == "s")
    {
        printf("=============INSIRA OS DADOS===========\n");
        printf("Nome do hotel      : \n"); scanf("%s", &nomeHotel);
        printf("Distancia do centro: \n"); scanf("%d", &DA);
        printf("Num medio de visitantes do ultimo feriado: \n"); scanf("%d", &V);
        printf("Tipo de acesso ao hotel: \n");
        printf("0 – acesso não asfaltado\n");
        printf("1 – acesso asfaltado\n");
        scanf("%d", &AC);
        // construindo a condicao para contagem
        if (DA > 15)
        {
            numHotel = numHotel + 1;
        }
        if (AC==0)
        {
            mediaAC = mediaAC + V;
            cont = cont +1;
        }
        if (AC==1 && V < 1000)
        {
            nomeHotelA[i] = nomeHotel;
            DAArray[i] = DA;
            // contador para controlar a array do Htel e visitantes
            contArray = contArray + 1;
            i++;
        }
        printf("Digite S - continuar / N - sair :\n"); 
        scanf("%s", &saida);
    }
    mediaAC = mediaAC / cont;
    printf("Numero de Hoteis a mais de 15km do centro: \n", numHotel);
    printf("Quant media de visitantes em Hoteis nao asfaltados: %.2f\n", mediaAC);
    printf("Lista dos Hoteis c/ asfalto e menos de 1000 visitas: \n");
    puts("Hotel         Visitantes");
    for ( i = 0; i < contArray; i++)
    {
        printf("%s           %d", nomeHotelA[i], DAArray[i]);
    }
}