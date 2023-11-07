#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>

int main (){
setlocale(LC_ALL, "portuguese");

int opc ;
int a,b;
int soma;
int subtrair;




printf("Operações\n\n");
printf("1 - soma\n");
printf("2 - subtração\n\n");




printf("\nDigite um valor: ");
scanf("%d", &a);



printf("Digite um valor: ");
scanf("%d", &b);

printf("\nQual operação deseja fazer ( + OU -)?: ");
scanf("%d", &opc);

system("cls");

switch (opc)
{
case 1:
    soma = a + b;
    printf("Resultado: %d", soma);
    break;

case 2:
    subtrair = a - b;
    printf("Resultado: %d",subtrair);
    break;

default:
printf("Operação invalida");
    break;
}






























getchar();
return 0;
}