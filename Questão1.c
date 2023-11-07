#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "portuguese");


int temperatura ;




                        printf("----------- BEM VINDO AO GAME -----------\n\n ");


printf("Antes de iniciar, informe a temperatura de onde vc está em °C: ");
scanf("%d", &temperatura);

system("cls");

if (temperatura > 25 )
{
    printf("Clima do jogo definido para: ensolarado");
} else if (temperatura < 15)
{
    printf("Clima do jogo definido para: chuvoso");
} else if (temperatura >= 15 || temperatura <=25)
{
    printf("Clima do jogo definido para: nublado");
    
}





























getchar();
return 0;
}