#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){

char hotel[20], w[1];
int V, AC, DA, centro=15, x1=0, y2=0, k3=0, z4;

printf("REGISTRO DE HOTEIS\n\n");

do{
    printf("\nHotel                       :"); 
	     scanf("%s",&hotel);
    printf("Distancia do centro em km    : "); 
	     scanf("%d",&DA);
    printf("Visitantes no ultimo feriado : "); 
	     scanf("%d",&V);
    printf("Acesso ao hotel\n Digite \n"
           "0 - acesso não asfaltado\n"
           "1 - acesso asfaltado         : "); 
		 scanf("%d",&AC);

    if(DA>centro)
        y2++; 

    if(AC==0){
        x1++;   
        k3 += V; 
    }
    if( V<1000 && AC==1)
        printf("\nHotel %s Distancia %d km. Asfaltado com menos de 1.000 visitantes.",hotel,DA);
        …