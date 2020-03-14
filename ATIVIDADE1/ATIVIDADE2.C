#include <stdio.h>
#include <string.h>

int main() {
    float litro, preco, alcool=3.90, gasolina=4.30;
    char combustivel [1];
    
    printf("Digite o tipo de combustivel (A - Alcool ou G - Gasolina): ");
    scanf("%s", &combustivel);
    if (strcasecmp(combustivel,"A")==0)
    {
       printf("Digite a quantidade de litros vendidos: "); scanf("%f", &litro);
        /* calculos para a condicao do alcool e dos litros */
       if ((litro >= 0) && (litro<= 20))
       {
            preco = litro*(alcool*0.97);
            printf("============================================\n");
            printf("Desconto de 3%\n");
            printf("Valor a ser pago por %0.2f litros de Alcool - R$ %0.2f\n", litro, preco);
            printf("============================================\n");
       }
        else
        {
            preco = litro*(alcool*0.95);
            printf("============================================\n");
            printf("Desconto de 5%\n");
            printf("Valor a ser pago por %0.2f litros de Alcool - R$ %0.2f\n", litro, preco);
            printf("============================================\n");
        }
        
       
    }
    else if (strcasecmp(combustivel,"G")==0)
    {
       printf("Digite a quantidade de litros vendidos: "); scanf("%f", &litro);
        /* calculos para a condicao da gasolina e dos litros */
       if ((litro >= 0) && (litro<= 20))
       {
            preco = litro*(gasolina*0.96);
            printf("============================================\n");
            printf("Desconto de 4%\n");
            printf("Valor a ser pago por %0.2f litros de Gasolina - R$ %0.2f\n", litro, preco);
            printf("============================================\n");
       }
        else
        {
            preco = litro*(gasolina*0.94);
            printf("============================================\n");
            printf("Desconto de 6%\n");
            printf("Valor a ser pago por %0.2f litros de Gasolina - R$ %0.2f\n", litro, preco);
            printf("============================================\n");
        }
         
    }
    else
    {
        printf("Opcao de combustivel digitada invalida. Tente novemente.\n");
    }
         

}