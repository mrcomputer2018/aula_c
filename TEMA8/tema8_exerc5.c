// Faça um programa que leia informações de alunos (Matricula, Nota1, Nota2 , Nota3) 
// com o fim das informações indicado por Matricula = 9999 . Para cada aluno deve ser 
// calculada a média final de acordo com a seguinte fórmula:
// Média final = [(2 * Nota1) +(3* Nota2) +(4* Nota 3)] / 9
// Se a média final for igual ou superior a 5, o algoritmo deve mostrar Matrícula, 
// Média Final e a mensagem "APROVADO" ; se a média final for inferior a 5, o
// algoritmo deve mostrar Matricula, Média Final e a mensagem "REPROVADO".
// Ao final devem ser mostrados o total de aprovados, o total de alunos da turma 
// e o total de reprovados
#include <stdio.h>

int main() {
    // declarando variavel
    int matricula, quantAprovado=0, quantReprovado=0, quantAluno=0;
    float nota1, nota2, nota3, media, mediaFinal;
    // criando laco de repeticao
    do
    {
        printf("===========DAdOS DO ALUNO===========\n");
        printf("Digite o numero da matricula(xxxx): \n"); scanf("%d", &matricula);
        printf("Digite a nota 1: \n"); scanf("%f", &nota1);
        printf("Digite a nota 2: \n"); scanf("%f", &nota2);
        printf("Digite a nota 3: \n"); scanf("%f", &nota3);
        media = ((2 * nota1) +(3* nota2) +(4* nota3)) / 9;
        if (media >= 5)
        {
            printf("Matricula  : %d\n", matricula);
            printf("Media final: %,2f\n", media);
            printf("*** Aluno foi aprovado. Parabens!!! ***\n");
            quantAprovado = quantAprovado + 1;
        }
        else if (media > 0 && media <5)
        {
            printf("Matricula  : %d\n", matricula);
            printf("Media final: %,2f\n", media);
            printf("*** Aluno foi reprovado. Infelizmente ***\n");
            quantReprovado = quantReprovado + 1;
        }
        else
        {
            printf("*** Valores das Notas digitados incorretamente ***\n");
        }
        quantAluno = quantAluno + 1;

    } while (matricula!=9999);
    printf("==========RESULTADOS==========\n");
    printf("Total de alunos aprovados  : %d", quantAprovado);
    printf("Total de alunos reprovados : %d", quantReprovado);
    printf('Total de alunos na turma   : %d', quantAluno);
}
// Média final = [(2 * Nota1) +(3* Nota2) +(4* Nota 3)] / 9