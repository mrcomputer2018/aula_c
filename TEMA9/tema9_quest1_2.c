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
    numero = numero*numero;
    return numero;
}
int main(){
    int quadrado2, numero2;
    printf("Digite o numero: \n"); scanf("%d", &numero2);
    quadrado2 = quadrado(numero2);
    printf("O quadrado do numero %d e' %d\n", numero2, quadrado2);
}