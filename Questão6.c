#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "portuguese");
 int codigos;
 

 printf("                      MENU                    \n\n");
printf("1 - CAMISETA \n");
printf("2 - CALÇA \n");
printf("2 - SAPATO \n\n");



printf("Digite o código do produto que deseja: ");
scanf("%i", &codigos);

system("cls");
switch (codigos)
{
case 1:
    printf("Produto selecionado: CAMISETA \n");
    printf("Valor: R$ 60,00\n");
    break;
case 2:
    printf("Produto selecionado: CALÇA \n ");
    printf("Valor: R$ 55,00\n");
    break;
case 3:
    printf("Produto selecionado: SAPATO \n");
    printf("Valor: R$ 40,00\n");
break;
default:
    printf("Código invalido");
    break;
}















return 0;   
}