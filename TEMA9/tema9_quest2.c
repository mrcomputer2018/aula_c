/* Questão 2 
#include <stdio.h>
main() 
{
  float N1,N2,N3,M;  

  printf("\nEntre com a  nota 1:  ");
  scanf("%f", &N1);
  printf("\nEntre com a  nota 2:  ");
  scanf("%f", &N2);
  printf("\nEntre com a  nota 3:  ");
  scanf("%f", &N3);
  M = (N1+N2+N3)/3;
  printf("A media e' %4.1f \n", M);
} */
#include <stdio.h>
float M;
float media(float N1, float N2, float N3) {
    M = (N1+N2+N3)/3;
}
int main() {
    float N4, N5, N6, M2;
    printf("\nEntre com a  nota 1:  "); scanf("%f", &N4);
    printf("\nEntre com a  nota 2:  "); scanf("%f", &N5);
    printf("\nEntre com a  nota 3:  "); scanf("%f", &N6);
    M2 = media(N4, N5, N6);
    printf("A media e' %4.1f \n", M2);    
}