// Elaborar um programa para entrar com o salário mínimo vigente e o salário 
// de n funcionários (parar quando for digitado salário = 0) e informe:
// a. A quantidade de funcionários que recebem um salário mínimo;
// b. A porcentagem de funcionários que recebem mais do que 3 salários mínimos.
// c. A média salarial.
#include <stdio.h>

int main(){
    // declaracao de variaveis e atribuicao de valor a constante
    float salMin, sal, mediaSal, mediaSalFinal, salMin3, porcSal3;
    float mediaSal2, quantSalMin=1.0 ;
    int func, contSal3;
    // laco de repeticao e condicao
    while (sal>0)
    {
        printf("===========DADOS FUNCIONARIO===========\n");
        printf("Digite o salario minimo vingente: R$\n"); scanf("%f", &salMin);
        printf("Digite o salario do funcionario (0 p/sair): R$\n"); scanf("%f", &sal);
        salMin3 = sal*3;
        func=1;
        contSal3=1;
        if (sal <= salMin)
        {
            quantSalMin++;
        }
        else if (sal >= salMin3)
        {
            contSal3++;
        }
        mediaSal = mediaSal + sal;
        func = func + 1;
    }
    quantSalMin= quantSalMin-1;
    porcSal3 = (contSal3*100)/func;
    mediaSalFinal = mediaSal/func;
    printf("================IMPRESSAO================\n");
    printf("Quantd de funcs(salario Minimo) : %.2f\n", quantSalMin);
    printf("Porcent de funcs(salario triplo): %.2f %%\n", porcSal3);
    printf("Media salarial de               : R$ %.2f\n", mediaSalFinal);
}