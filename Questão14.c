#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <string.h>

int main (){

int par = 0;
int impar = 0;
float mediaPar=0;
float mediaImpar =0;
int contPar=0;
int contImpar=0;
int x;



do
{
printf("Digiite um valor: ");
scanf("%d",&x);


    if (x > 0)
    {
        if (x % 2 == 0 )
        {
            par++;
            contPar += x;
        } else
        {
            impar++;
            contImpar += x;
        }
        
        
    }
    

} while (x > 0);

mediaImpar = contImpar / (float) impar;
mediaPar = contPar / (float) par;


printf("\n SOMA \n\n");

printf("Soma par: %d \n", contPar);
printf("Soma impar: %d\n\n", contImpar);

printf(" Quantidades \n\n");

printf("Quantidade par: %d\n", par);
printf("Quantidade impar: %d\n\n", impar);

printf(" Médias \n\n");

printf("Média pares: %.0f\n", mediaPar);
printf("Média impar: %.0f\n", mediaImpar);















return 0;

 }