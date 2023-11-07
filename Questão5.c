#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "portuguese");


int idioma;



printf("========IDIOMAS========\n\n");
printf("1 - Inglês \n");
printf("2 - Espanhou \n");
printf("3 - Francês \n\n");

printf("Escolha o idioma da sua prefer�ncia: ");
scanf("%d", &idioma);

system("cls");

switch (idioma)
{
case 1:
    printf("Welcome");
    break;
case 2:
    printf("Bienvenido");
    break;
case 3 :
    printf("Accueillir");
    break;
default:
    printf("IDIOMA INVALIDO");
    break;
}














getchar();

return 0;

}