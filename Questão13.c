#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){

setlocale(LC_ALL, "portuguese");

// DECLARANDO VRI�VEIS

int primeiroValor;
int segundoValor;
int terceiroValor;
float media;
int maior ;
int menor;

printf ("Digite o primeiro valor: ");
scanf("%d", &primeiroValor);

printf ("Digite o primeiro valor:");
scanf("%d", &segundoValor);



system ("cls || clear");

media = (primeiroValor + segundoValor) / 2;


 maior = primeiroValor > segundoValor ? primeiroValor : segundoValor;


 menor = primeiroValor < segundoValor ? primeiroValor : segundoValor;

 printf ("Maior: %d \n", maior);
 printf ("Menor: %d \n", menor);






    return 0 ;
}