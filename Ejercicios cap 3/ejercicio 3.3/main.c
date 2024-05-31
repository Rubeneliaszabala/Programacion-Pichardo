#include <stdio.h>
#include <stdlib.h>

void main(void) // Define la función principal del programa
{
    float PAG, SPA; // Declara variables de tipo float: PAG para cada pago ingresado y SPA para la suma total de los pagos.

    SPA = 0; // Inicializa la variable SPA a 0.

    printf("Ingrese el primer pago:\t"); // Imprime un mensaje solicitando al usuario que ingrese el primer pago.
    scanf("%f", &PAG); // Lee el primer pago introducido por el usuario y lo almacena en la variable PAG.

    while(PAG != 0) // Inicia un bucle que se ejecuta mientras PAG no sea 0.
    {
        SPA = SPA + PAG; // Suma el valor de PAG a SPA.
        printf("Ingrese el siguiente pago (o 0 para terminar):\t"); // Imprime un mensaje solicitando el siguiente pago o 0 para terminar.
        scanf("%f", &PAG); // Lee el siguiente pago introducido por el usuario y lo almacena en la variable PAG.
    }

    printf("\nEl total de pagos del mes es: %.2f", SPA); // Imprime la suma total de los pagos con dos decimales.
}

