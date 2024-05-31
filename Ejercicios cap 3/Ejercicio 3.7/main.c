#include <stdio.h>
#include <stdlib.h>

/* Lanzamiento de martillo.

El programa, al recibir como dato N lanzamientos de martillo, calcula el promedio
de los lanzamientos de la atleta cubana.

I, N: variables de tipo entero.
LAN, SLA: variables de tipo real. */

void main(void)// Define la función principal del programa
{
    int I, N;// Declara variables enteras: I para el contador del bucle y N para el número de lanzamientos
    float LAN, SLA = 0;// Declara variables de tipo float: LAN para cada lanzamiento y SLA para la suma de los lanzamientos, inicializando SLA a 0
    do// Inicia un bucle do-while que se ejecuta al menos una vez
    {
        printf("Ingrese el numero de lanzamientos:\t");// Solicita al usuario que ingrese el número de lanzamientos
        scanf("%d", &N);// Lee el número de lanzamientos ingresado por el usuario y lo almacena en N

    }
    while (N < 1 || N > 11);// El bucle se repite mientras N sea menor que 1 o mayor que 11
    for (I = 1; I <= N; I++)// Inicia un bucle for que se ejecuta desde I = 1 hasta I = N
    {
        printf("\nIngrese el lanzamiento %d: ", I); // Solicita al usuario que ingrese el lanzamiento número I
        scanf("%f", &LAN); // Lee el lanzamiento ingresado y lo almacena en LAN
        SLA = SLA + LAN;// Suma el lanzamiento ingresado a SLA
    }
    SLA = SLA / N;// Calcula el promedio de los lanzamientos dividiendo SLA entre N
    printf("\nEl promedio de lanzamientos es: %.2f", SLA); // Imprime el promedio de los lanzamientos con dos decimales

}
