#include <stdio.h>
#include <stdlib.h>

/* Fibonacci.

El programa calcula y escribe los primeros 50 números de Fibonacci.

I, PRI, SEG, SIG: variables de tipo entero. */

void main(void)// Define la función principal del programa
{
    int I, PRI = 0, SEG = 1, SIG;// Declara variables para iteración y para almacenar los primeros dos términos de la secuencia
    printf("\t %d \t %d", PRI, SEG);// Imprime los dos primeros términos de la secuencia
    for (I = 3; I <= 50; I++)// Bucle que calcula y muestra los siguientes términos de la secuencia hasta el término 50
    {
        SIG = PRI + SEG;// Calcula el siguiente término sumando los dos términos anteriores
        PRI = SEG;// Actualiza el primer término para ser igual al segundo término actual
        SEG = SIG; // Actualiza el segundo término para ser igual al siguiente término calculado
        printf("\t %d", SIG);// Imprime el término calculado
    }
}
