// Foi realizada uma pesquisa de algumas características físicas da população de
// uma certa região, a qual coletaram os seguintes dados referentes a cada
// habitante para serem analisados:
// - sexo (masculino e feminino)
// - cor dos olhos (azuis, verdes ou castanhos)
// - cor dos cabelos (louros, castanhos, pretos)
// - idade
// Faça um programa que determine e escreva:
// a) a maior idade dos habitantes;
// b) a quantidade de indivíduos do sexo feminino cuja idade está entre 18
// e 35 anos, inclusive;
// c) a quantidade de indivíduos que tenham olhos verdes e cabelos louros;
// O final do conjunto de habitantes é reconhecido pelo valor -1 informado
// como idade.
#include <stdio.h>

int main () {
    int i, idade, idadeMaior, sexoF;
    char corOlho, corCabelo, sexo;

    printf("===============MENU===============\n");
    printf("Escolha uma das opcoes abaixo:\n");
    printf("SEXO\n");
    printf("(M) - Masculino\n");
    printf("(F) - Feminino\n");
    scanf("%c", &sexo);
    getchar();
    printf("COR DOS OLHOS:\n");
    printf("(OA) - Azul\n");
    printf("(OV) - Verde\n");
    printf("(OC) - Castanho\n");
    scanf("%c", &corOlho);
    getchar();
    printf("COR DOS CABELOS:\n");
    printf("(CL) - Louros\n");
    printf("(CC) - Castanhos\n");
    printf("(CP) - Pretos\n");
    scanf("%c", &corCabelo);
    getchar();
    printf("Digite a sua idadde: \n"); scanf("%d", &idade);
    while (idade!=-1)
    {
        i=1;
        if (i == 1)
        {
        idadeMaior= idade;
        }
        else
        {
            if (((sexo =='F') || (sexo =='f')) && ( (idade>=18) && (idade <=35)))
            {
                sexoF=sexoF+1;
            }
        }

    // cor dos cabelos (louros, castanhos, pretos)
    }


}
