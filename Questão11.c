#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <time.h>


int main (){

int codigoCerto;
int codigo;

codigoCerto = 1033;


do
{
    printf ("Digite seu codigo: ");
    scanf("%d", &codigo);

    if (codigo == codigoCerto)
    {
        printf("ACESSO LIBERADO\n");
    
    }else
    {
        printf("ACESSO NEGADO \n\n");
        sleep (1);
    }

    


} while (codigoCerto != codigo);

























getchar();

return 0;
}