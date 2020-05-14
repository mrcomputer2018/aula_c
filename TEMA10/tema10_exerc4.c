//  Crie uma função em linguagem C que receba 2 números e retorne o maior valor.
#include <stdio.h>
int maior(int a, int b){
    if (a>=b)
    {
        return a;
    }
    else
    {
        return b;
    }
}

int main() {
    int num1, num2;
    
    printf("Digite o 1o. numero: \n"); scanf("%d", &num1);
    printf("Digite o 2o. numero: \n"); scanf("%d", &num2);
    printf("Maior numero e : %d \n", maior(num1,num2)); 
}