#include <stdio.h>
#include <stdlib.h>

/* Fibonacci.

El programa calcula y escribe los primeros 50 n�meros de Fibonacci.

I, PRI, SEG, SIG: variables de tipo entero. */

void main(void)// Define la funci�n principal del programa
{
    int I, PRI = 0, SEG = 1, SIG;// Declara variables para iteraci�n y para almacenar los primeros dos t�rminos de la secuencia
    printf("\t %d \t %d", PRI, SEG);// Imprime los dos primeros t�rminos de la secuencia
    for (I = 3; I <= 50; I++)// Bucle que calcula y muestra los siguientes t�rminos de la secuencia hasta el t�rmino 50
    {
        SIG = PRI + SEG;// Calcula el siguiente t�rmino sumando los dos t�rminos anteriores
        PRI = SEG;// Actualiza el primer t�rmino para ser igual al segundo t�rmino actual
        SEG = SIG; // Actualiza el segundo t�rmino para ser igual al siguiente t�rmino calculado
        printf("\t %d", SIG);// Imprime el t�rmino calculado
    }
}
