/* Questão1 
#include <stdio.h>
main() 
{
  int numero, quadrado;  

  printf("\nEntre com um numero inteiros nao-nulo:  ");
  scanf("%d", &numero);
  quadrado = numero * numero;
  printf("O quadrado do numero %d e %d\n", numero, quadrado);
} */
#include <stdio.h>

int quadrado(int numero) {
    return (numero*numero);
}
int main() {
    int numero2, quadrado2;
    printf("\nEntre com um numero inteiros nao-nulo:  ");scanf("%d", &numero2);
    quadrado2 = quadrado(numero2);
    printf("O quadrado do numero %d e %d\n", numero2, quadrado2);
}