/* Questão1 

#include <stdio.h>
main() 
{
  int numero, quadrado;  

  printf("\nEntre com um numero inteiros nao-nulo:  ");
  scanf("%d", &numero);
  quadrado = numero * numero;
  printf("O quadrado do numero %d e' %d\n", numero, quadrado);
  
} */

#include <stdio.h>

int numero;
int quadrado() {
    return numero* numero;
}
int main(){
    printf("\nEntre com um numero inteiros nao-nulo:  ");
    scanf("%d", &numero);
    printf("O quadrado do numero %d e' %d\n", numero, quadrado());
}