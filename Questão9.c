#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>


int main  (){
setlocale(LC_ALL, "portuguese");


int div = 0;
int i;
int x;


printf("Digite um valor: ");
scanf("%d", &x);

for ( i = 1; i <= x ; i++)
{
    if ( x % i == 0 )
    {
        div++;
    }
    

}

    if (div == 2)
    {
        printf("Ele � numero primo ");
    } else
    {
        printf("N�o � primo");
    }

















return 0;
}