#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <locale.h>



int main() {


setlocale(LC_ALL, "portuguese");

    int opc;
    float km;
    float celsius;
    float fahrenheit;
    float milhas;

    do
    {
        printf("                                 CONVERSÕES DE MEDIDAS                                  \n\n");
        printf("1 - Quilomentros para milhas \n");
        printf("2 - Fahrenheit para celsius \n\n"); 
       
        printf("Selecione a conversão desejada:");       
        scanf("%d", &opc);

        switch (opc)
        {
        case 1:
            printf("Digite a quantidade de km: ");
            scanf("%f", &km);

            milhas = km * 0.621371;

            printf("milhas: %f \n", milhas);
            break;

        case 2:
            printf("Digite a temperatura em celsius: ");
            scanf("%f", &celsius);

            fahrenheit = (celsius * 9 / 5) + 32;

            printf("Fahrenheit: %f \n", fahrenheit);
            break;
        }

    } while (opc != 0);








    
    return 0;
}