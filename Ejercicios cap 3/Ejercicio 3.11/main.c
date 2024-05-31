#include <stdio.h>
#include <stdlib.h>

/* Examen de admisi�n.

El programa, al recibir como datos una serie de calificaciones de un examen,obtiene el rango en que se encuentran �stas.

R1, R2, R3, R4 y R5: variable de tipo entero.
CAL: variable de tipo real. */
#include <stdio.h> // Incluye la biblioteca est�ndar de entrada y salida

void main(void) // Define la funci�n principal del programa
{
    int R1 = 0, R2 = 0, R3 = 0, R4 = 0, R5 = 0; // Declara e inicializa contadores para cada rango de calificaciones
    float CAL; // Declara una variable flotante para almacenar la calificaci�n

    printf("Ingresa la calificacion del alumno: "); // Solicita al usuario que ingrese la calificaci�n del alumno
    scanf("%f", &CAL); // Lee la calificaci�n ingresada por el usuario y la almacena en CAL

    while (CAL != -1) // Inicia un bucle while que se ejecuta mientras la calificaci�n no sea -1
    {
        if (CAL < 4) // Verifica si la calificaci�n es menor que 4
            R1++; // Incrementa el contador R1
        else if (CAL < 6) // Verifica si la calificaci�n es menor que 6
            R2++; // Incrementa el contador R2
        else if (CAL < 8) // Verifica si la calificaci�n es menor que 8
            R3++; // Incrementa el contador R3
        else if (CAL < 9) // Verifica si la calificaci�n es menor que 9
            R4++; // Incrementa el contador R4
        else // Si la calificaci�n es 9 o mayor
            R5++; // Incrementa el contador R5

        printf("Ingresa la calificacion del alumno: "); // Solicita al usuario que ingrese otra calificaci�n
        scanf("%f", &CAL); // Lee la nueva calificaci�n ingresada por el usuario y la almacena en CAL
    }

    // Imprime el n�mero de calificaciones en cada rango
    printf("\n0..3.99 = %d", R1); // Imprime el contador R1
    printf("\n4..5.99 = %d", R2); // Imprime el contador R2
    printf("\n6..7.99 = %d", R3); // Imprime el contador R3
    printf("\n8..8.99 = %d", R4); // Imprime el contador R4
    printf("\n9..10 = %d", R5); // Imprime el contador R5
}

