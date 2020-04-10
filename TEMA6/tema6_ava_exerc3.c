// Crie um programa que calcula o desconto previdenciário de dez funcionários. 
// Dado um salário, o programa deve retornar o valor do desconto proporcional 
// ao mesmo. O cálculo segue a regra: o desconto é de 11% do valor do salário, 
// entretanto, o valor máximo de desconto é 318,20. Sendo assim, ou o programa 
// retorna o valor equivalente a 11% sobre o salário ou 318,20.
#include <stdio.h>


int main() {
    // declaracao de variaveis
    int i, cont=10;
    float salario, desconto, descontoFix;
    char nome [10], sobreNome [15];

    descontoFix = 318.20;
    //. repeticao
    for (i = 0; i <= cont; i++)
    {
        // lendo e armazenando dados
        printf("======+=======DADOS FUNCIONARIO====+========\n");
        printf("Digite o nome     : \n");scanf("%s", &nome);
        printf("Digite o sobrenome: \n");scanf("%s", &sobreNome);
        printf("Digite o salario  : \n");scanf("%f", &salario);
        // calculo
        desconto = salario*0.11;
        if ((desconto >=0) && (desconto <= 318.20))
        {
            printf("======+=======IMPRESSAO====+========\n");
            printf("Nome     : %s %s \n", nome, sobreNome);
            printf("Salario  : R$%0.2f\n", salario);
            printf("Desconto : R$%0.2f\n", desconto);
        }
        else if (desconto > 318.20)
        {
            printf("======+=======IMPRESSAO====+========\n");
            printf("Nome     : %s %s \n", nome, sobreNome);
            printf("Salario  : R$%0.2f\n", salario);
            printf("Desconto : R$%0.2f\n", descontoFix);
        }
        else
        {
            printf("======+=======AVISO====+========\n");
            printf("Salario digito incorretamente\n");
            
        }
    }
     printf("FIM DO PROGRAMA\n");
     
}