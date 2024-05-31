#include <stdio.h>
#include <stdlib.h>

/* Suma pagos.
El programa obtiene la suma de los pagos realizados el último mes.

PAG y SPA: variables de tipo real. */

void main(void) // Define la función principal del programa
{
    float PAG, SPA = 0;// Declara variables de tipo float: PAG para cada pago ingresado y SPA para la suma total de los pagos, inicializando SPA a 0.
    printf("Ingrese el primer pago:\t");// Imprime un mensaje solicitando al usuario que ingrese el primer pago.
    scanf("%f", &PAG);// Lee el primer pago introducido por el usuario y lo almacena en la variable PAG.

    do// Inicia un bucle do-while que se ejecuta al menos una vez.
    {
        SPA = SPA + PAG;// Suma el valor de PAG a SPA.
        printf("Ingrese el siguiente pago -0 para terminar-:\t ");// Imprime un mensaje solicitando el siguiente pago o 0 para terminar.
        scanf("%f", &PAG);// Lee el siguiente pago introducido por el usuario y lo almacena en la variable PAG.
    }
    while (PAG);// El bucle se ejecuta mientras PAG no sea 0.
    printf("\nEl total de pagos del mes es: %.2f", SPA); // Imprime la suma total de los pagos con dos decimales.
}
