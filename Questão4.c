#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "portuguese");


int idade;

printf("Digite sua idade: ");
scanf("%i", &idade);

system("cls");

if (idade >= 18)
{
    printf("ACESSO PERMITIDO");
}else
{
    printf("ACESSO NEGADO");

}













getchar();
return 0;
}

