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
#include <string.h>

int main () {
    int i=1, idade, idadeMaior=0, sexoF=0, quantIndv=0, indvFora=0;
    char corOlho [10], corCabelo [10], sexo [10];

   printf("===============DADOS=============\n");
   printf("Digite a sua idadde (-1 p/ sair): \n"); scanf("%d", &idade);
    while (idade!=-1)
    {
        printf("sexo (masculino ou feminino): \n"); scanf("%s",&sexo);
	    printf("cor dos olhos (azuL, verde ou castanho) : \n"); scanf("%s",&corOlho);
	    printf("cor dos cabelos (louro, castanho ou preto) : \n"); scanf("%s",&corCabelo);
        if (idade > idadeMaior)
        {
        idadeMaior= idade;
        }
        // strcmp funciona com string e outro so com uma letra
        if ((strcmp(sexo,"feminino")==0) && (idade>=18 && idade<=35))
        {
            sexoF=sexoF+1;
        }
        if ((strcmp(corOlho,"verde")==0) && (strcmp(corCabelo,"louro")==0))
        {
            quantIndv=quantIndv+1;
        }
        else
        {
            indvFora=indvFora+1;
        }
        i=i+1;
        printf("==============DADOS=============\n");
        printf("Digite a %da. idade(-1 p/ sair): \n",i); scanf("%d", &idade);
    }
    printf("=================IMPRESSAO===================\n");
    printf("Maior idade encontrada              : %d anos\n", idadeMaior);
    printf("Quant sexo feminino entre 18 e 35   : %d\n", sexoF);
    printf("Quant indv olhos verdes e cabelos louros: %d\n", quantIndv);
    printf("Quant de individuos fora da pesquisa: %d\n", indvFora);
}
