/* Questão 3  
#include <stdio.h>
main() 
{
  float VALOR,NVALOR,DESCONTO;  

  printf("\nEntre com o valor do produto:  ");
  scanf("%f", &VALOR);
  DESCONTO = VALOR*9/100;
  NVALOR = VALOR - DESCONTO;
  printf("Desconto            =   %6.2f \n", DESCONTO);
  printf("Valor com  Desconto =   %6.2f", NVALOR);
} */
#include <stdio.h>

float desc;
float desconto(float VALOR){
    return (VALOR*9)/100;
}
float nValor (float VALOR, float desc){
   return VALOR-desc;
}
int main(){
    float VALOR2, desconto2,nValor3;
    printf("\nEntre com o valor do produto:  "); scanf("%f", &VALOR2);
    desconto2 = desconto(VALOR2);
    nValor3=nValor(VALOR2,desconto2);
    printf("Desconto            =   %6.2f \n", desconto2);
    printf("Valor com  Desconto =   %6.2f", nValor3);
}