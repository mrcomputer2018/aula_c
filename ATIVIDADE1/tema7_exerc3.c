// Elaborar um programa para entrar com o salário mínimo vigente e o salário 
// de n funcionários (parar quando for digitado salário = 0) e informe:
// a. A quantidade de funcionários que recebem um salário mínimo;
// b. A porcentagem de funcionários que recebem mais do que 3 salários mínimos.
// c. A média salarial.
#include <stdio.h>

int main(){
    // declaracao de variaveis e atribuicao de valor a constante
    float salMin, sal, mediaSal, mediaSalFinal, salMin3, func=0.0, porcSal3 = 0.0, contSal3=0.0;
    float quantSalMin=0.0 ;
    // laco de repeticao e condicao
    while (sal>0)
    {
        printf("===========DADOS FUNCIONARIO===========\n");
        printf("Digite o salario minimo vingente (0 p/sair): R$\n"); scanf("%f", &salMin);
        printf("Digite o salario do funcionario (0 p/sair): R$\n"); scanf("%f", &sal);
        salMin3 = sal*3;
        if (sal <= salMin)
        {
            mediaSal = mediaSal + sal;
            func = func + 1;
            quantSalMin++;
            contSal3=0.0;
        }
        else if (sal>=salMin3)
        {
            mediaSal = mediaSal + sal;
            contSal3++;
                printf("%.2f contsal3 dentro\n", contSal3);
            func = func + 1;
        }
           
        
    }
    printf("%.2f func\n", func);
    printf("%.2f contsal3\n", contSal3);
    printf("%.2f mediasal\n", mediaSal);
    quantSalMin= quantSalMin-1;
    func = func-1;
    porcSal3 = func/contSal3;
    mediaSalFinal = mediaSal/func;
    printf("================IMPRESSAO================\n");
    printf("Quantd de funcs(salario Minimo) : %.2f\n", quantSalMin);
    printf("Porcent de funcs(salario triplo): %.2f\n", porcSal3);
    printf("Media salarial de               : R$ %.2f\n", mediaSalFinal);
}