// Solicitar várias idades e informar:
// a. Quantidade de idosos (ID >= 65)
// b. Quantidade de eleitores (ID >= 16)
// c. Soma das idades da pessoas aptas a dirigir (ID >= 18)
// Para de solicitar dados quando idade igual 0.
#include <stdio.h>

int main() {
    // declarando variaveis e constante
    int idade, idoso, eleitor, dirigir;
    idoso=0;
    dirigir=0;
    eleitor=0;
    // laco de repeticao e condicao
    while (idade > 0 )
    {
        printf("============DADOS============\n");
        printf("Digite a sua idade (0 p/sair): \n"); scanf("%d", &idade);
        if ((idade >=16) && (idade <=18))
        {
            eleitor = eleitor+1;
        }
            else if ((idade > 18) && (idade < 65))
            {
                eleitor = eleitor + 1;
                dirigir = dirigir + idade;
                printf("%d\n",eleitor);
            }
                else if (idade >=65) 
                {
                    idoso = idoso + 1;
                    eleitor = eleitor + 1;
                    dirigir = dirigir + idade;
                }
    }
    printf("==============IMPRESSAO===================\n");
    printf("Quantidade de idosos               : %d\n", idoso);
    printf("Quantidade de eleitores            : %d\n", eleitor);
    printf("Soma das idades dos aptos a dirigir: %d anos\n", dirigir);
    
}