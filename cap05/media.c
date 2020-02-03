#include <stdio.h>
/* programa para tirar media */

int main()
{
    /* declarando variaveis float*/
    float x, y, z, media;
    /*lendo um  valor digitado*/
    printf("Digite o primeiro numero: ",x);
    scanf("%f",&x);
    printf("Digite o segundo numero: ",y);
    scanf("%f",&y);
    printf("Digite o terceiro numero: ", z);
    scanf("%f",&z);
    /* Fazendoo claculo da media*/
    media = (x+y+z)/3;
    /* Imprimindo na tela o resultafo*/
    printf("A media dos numeros %f, %f e %f e:\n %f\n", x, y, z, media);
    return 0;
}