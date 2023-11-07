#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main () {

setlocale(LC_ALL, "portuguese");

float desconto;
int dia;
float valor;
float valorFinal;


printf("CODIGOS PARA OS REPECTIVOS DIAS \n\n");

printf("1 - Segunda-feira\n");
printf("2 - Terça-feira\n");
printf("3 - Quarta-feira\n");
printf("4 - Quinta-feira\n");
printf("5 - Sexta-feira\n");
printf("6 - Sabado \n");
printf("7 - Domingo \n\n");



printf("Qual o valor da sua compra: ");
scanf("%f", &valor);

printf("Selecione um dia da semana: ");
scanf("%d", &dia);


system("cls");

if (dia >= 1 && dia <= 5 && valor > 100)
{
    desconto = valor * 0.10;
    valorFinal = valor - desconto;
    printf("Desconto de dia da semana: R$ %.2f \n",desconto);
    printf("valor final: R$ %.2f" , valorFinal);

}else if (dia == 6 || dia == 7 && valor > 100)
{
        desconto = valor * 0.15;
        valorFinal = valor - desconto;
    printf("Desconto de final de semana: R$ %.2f \n", desconto);
    printf("valor final: R$ %.2f" , valorFinal);
    
} else
{
    valorFinal = valor;
    printf("Valor final: R$ %.2f" ,valorFinal);

}






 


getchar();

return 0;
}