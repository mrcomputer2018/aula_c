#include <stdio.h>
int main (){
	
	int comprados, estoque, estoquetotal, dia;
	float precobrigadeiro, valortotal;


	printf("Quantos brigadeiros foram vendidos ao cliente?\n");
	scanf ("%i", &comprados);
	
	printf("Quantos brigadeiros tem no estoque?\n");
	scanf ("%i", &estoque);
	
	printf("Qual e o preco do brigadeiro?\n");
	scanf ("%f", &precobrigadeiro);
	
	printf("Qual dia (em numero) de semana estamos?\n");
	scanf ("%i",&dia);
	
	estoquetotal = estoque - comprados;
	valortotal = precobrigadeiro * comprados;
	
	printf ("Nosso estoque contem: %i\n", estoquetotal);
	
	if (valortotal > 80)
		printf ("Voce ganhou 10 porcento de desconto em sua proxima aquisicao na loja!\n");
		
	if (comprados > 10){
		valortotal = precobrigadeiro * comprados * 0.95;
		printf ("Valor da compra considerando 5 porcento de desconto:%.2f\n", valortotal);
	}
	
	switch (dia) {
		case 1:	
			break;
		case 2:
			break;
		case 3:
			break;
		case 4:
			break;
		case 5:		
			break;		
		case 6:
			printf ("Hoje sextou, entao voce nao paga frete");
			break;
	 	case 7:
	 		break;
		default: 
			printf ("dia nao reconhecido");
	}
		
}