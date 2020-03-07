#include <stdio.h>

int main() {
    float a,b,c;

    printf("Digite o valor do lado A: "); scanf("%f", &a);
    printf("Digite o valor do lado B: "); scanf("%f", &b);
    printf("Digite o valor do lado C: "); scanf("%f", &c);

    if ((a< b+c) && (b<a+c) && (c<b+a)) 
    {
        if ((a==b) && (b==c))
        {
            printf("Este triangulo e Equilatero\n");
        }
        else
        {
            if ((a==b) || (b==c) || (c==a)) 
            {
                printf("Este triangulo e Esosceles\n");
            }
            else
            {
                printf("Este triangulo e escaleno\n");
            }
        }
    }
    else
    {
        printf("Estes valores nao formam um triangulo\n");
    } 
    return 0;
}