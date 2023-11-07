#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "portuguese");
 int codigos;
 

 printf("                      BEM VINDO AO JOGO                \n\n");
printf("1 - NOVO JOGO\n");
printf("2 - CARRGAR JOGO\n");
printf("2 - CONFIGURAÇÕES \n\n");



printf("O que você deseja fazer?: ");
scanf("%i", &codigos);

system("cls");
switch (codigos)
{
case 1:
    printf("                              NOVO JOGO SENDO INCIADO ...                              \n\n");
    printf("ESCOLHA UMA LOCAL DE SAVE\n\n");
    printf("SAVE 1\n");
    printf("SAVE 2\n");
    printf("SAVE 3\n");
    break;
case 2:
    printf("CARREGANDO ULTIMO SAVE... \n ");
    
    break;
case 3:
    printf("CONFIGURAÇÕES: \n\n");
    printf("Sensibilidade\n");
    printf("Controle \n");
    printf("Volume \n");
    printf("Tela \n");
break;
default:
    printf("Código invalido");
    break;
}















return 0;   
}