#include <stdio.h>
#include <stdlib.h>

/* Examen de admisión.

El programa, al recibir como datos una serie de calificaciones de un examen,obtiene el rango en que se encuentran éstas.

R1, R2, R3, R4 y R5: variable de tipo entero.
CAL: variable de tipo real. */
#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

void main(void) // Define la función principal del programa
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0; // Declara e inicializa contadores para cada rango de calificaciones
    float CAL; // Declara una variable flotante para almacenar la calificación

    printf("Ingresa la calificacion del alumno: "); // Solicita al usuario que ingrese la calificación del alumno
    scanf("%f", &CAL); // Lee la calificación ingresada por el usuario y la almacena en CAL

    while (CAL != -1) // Inicia un bucle while que se ejecuta mientras la calificación no sea -1
    {
        if (CAL < 4) // Verifica si la calificación es menor que 4
            R1++; // Incrementa el contador R1
        else if (CAL < 6) // Verifica si la calificación es menor que 6
            R2++; // Incrementa el contador R2
        else if (CAL < 8) // Verifica si la calificación es menor que 8
            R3++; // Incrementa el contador R3
        else if (CAL < 9) // Verifica si la calificación es menor que 9
            R4++; // Incrementa el contador R4
        else // Si la calificación es 9 o mayor
            R5++; // Incrementa el contador R5

        printf("Ingresa la calificacion del alumno: "); // Solicita al usuario que ingrese otra calificación
        scanf("%f", &CAL); // Lee la nueva calificación ingresada por el usuario y la almacena en CAL
    }

    // Imprime el número de calificaciones en cada rango
    printf("\n0..3.99 = %d", R1); // Imprime el contador R1
    printf("\n4..5.99 = %d", R2); // Imprime el contador R2
    printf("\n6..7.99 = %d", R3); // Imprime el contador R3
    printf("\n8..8.99 = %d", R4); // Imprime el contador R4
    printf("\n9..10 = %d", R5); // Imprime el contador R5
}

