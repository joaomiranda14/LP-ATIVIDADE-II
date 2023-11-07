#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "portuguese");

float nota;


printf("Digite sua nota: ");
scanf("%f", &nota);

if (nota >= 9)
{
    printf("EXCELENTE");

}else if (nota >= 7 && nota < 9)
{
    printf("BOM");
} else if (nota >= 5 && nota < 7)
{
    printf("RAZOÁVEL");
} else if (nota < 5)
{
    printf("INSUFICIENTE");
}



















getchar();

return 0;
}