/*Uma empresa quer verificar se um empregado está qualificado para a aposentadoria ou não. Para estar em 
condições, um dos seguintes requisitos deve ser satisfeito:
 
- Ter no mínimo 65 anos de idade. 
- Ter trabalhado no mínimo 30 anos. 
- Ter no mínimo 60 anos e ter trabalhado no mínimo 25 anos. 

Com base nas informações acima, faça um programa que leia: o ano atual, o ano de seu nascimento e o 
ano de seu ingresso na empresa. 

O programa deverá escrever :
- A idade do funcionário;
- O tempo de trabalho do empregado;
- A mensagem 'Apto para aposentadoria' ou 'Não Apto para aposentadoria'. */
#include <stdio.h>

int main(){
    // declarando variaveis
    int anoAtual, anoNasc, anoEmp, anoTrab, idade, idadeFunc, tempTrab;
    // leitura dos dados e armazenamento na memoria
    printf("====================DADOS====================\n");
    printf("Digite o ano atual: \n"); scanf("%d", &anoAtual);
    printf("Digite o ano de nascimento: \n"); scanf("%d", &anoNasc);
    printf("Digite o ano que entrou na empresa: \n"); scanf("%d", &anoEmp);
    // calculos para fazer as condicionais
    idade=anoAtual-anoNasc;
    anoTrab=anoAtual-anoEmp;
    // criando as condicionais
    if ((anoTrab >= 30 || idade >= 65) || (idade >= 60 && anoTrab >= 25))/* condicao 1
    colocao das condicoes em um so if e usando regra prioriade e / ou */
    {
        printf("===============AVISO==============\n");
        printf("Idade do funcionario: %d anos\n", idade);
        printf("Tempo trabalhado    : %d anos\n", anoTrab);
        printf("Apto para aposentadoria\n");
    }
    else if ((anoTrab<=0) || (idade<=0))/*condicao 2 - criando exibicao de dados
     digitados erradamente*/
    {
        printf("===============AVISO==============");
        printf("Idade do funcionario: %d anos\n", idade);
        printf("Tempo trabalhado    : %d anos\n", anoTrab);
        printf("Dados digitados incorretamente!!!\n");
        printf("Insira Corretamente os dados\n");
    }
    else // condicional para quando as anteriores forem falsas
    {
        printf("===============AVISO==============");
        printf("Idade do funcionario: %d anos\n", idade);
        printf("Tempo trabalhado    : %d anos\n", anoTrab);
        printf(" Nao apto para aposentadoria\n");
    }
}