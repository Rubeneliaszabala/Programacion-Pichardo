#include <stdio.h>
#include <stdlib.h>

/* Calificaciones.

El programa, al recibir un grupo de calificaciones de un alumno, obtiene el promedio de calificaciones de cada uno de ellos y, además, los alumnos con el mejor y peor promedio.

I, MAT, MAMAT y MEMAT: variables de tipo entero.
CAL, SUM, MAPRO, MEPRO y PRO: variables de tipo real. */

void main(void) // Define la función principal del programa
{
    int I, MAT, MAMAT, MEMAT; // Declara variables para el índice del bucle, la matrícula del alumno con mejor promedio y la matrícula del alumno con peor promedio
    float SUM, PRO, CAL, MAPRO = 0.0, MEPRO = 11.0; // Declara variables para la suma de calificaciones, promedio, calificación, mejor promedio y peor promedio

    printf("Ingrese la matricula del primer alumno:\t"); // Solicita al usuario que ingrese la matrícula del primer alumno
    scanf("%d", &MAT); // Lee la matrícula del primer alumno ingresada por el usuario

    while (MAT) // Inicia un bucle while que se ejecuta mientras la matrícula no sea 0
    {
        SUM = 0; // Reinicia la suma de calificaciones para el nuevo alumno
        for (I = 1; I <= 5; I++) // Bucle que recorre las calificaciones del alumno actual
        {
            printf("\tIngrese la calificacion %d del alumno: ", I); // Solicita al usuario que ingrese la calificación
            scanf("%f", &CAL); // Lee la calificación ingresada por el usuario
            SUM += CAL; // Suma la calificación a la suma total
        }
        PRO = SUM / 5; // Calcula el promedio de calificaciones del alumno actual
        printf("\nMatricula: %d\tPromedio: %5.2f", MAT, PRO); // Imprime la matrícula y el promedio del alumno actual

        if (PRO > MAPRO) // Comprueba si el promedio actual es mayor que el mejor promedio registrado
        {
            MAPRO = PRO; // Actualiza el mejor promedio
            MAMAT = MAT; // Actualiza la matrícula del alumno con mejor promedio
        }
        if (PRO < MEPRO) // Comprueba si el promedio actual es menor que el peor promedio registrado
        {
            MEPRO = PRO; // Actualiza el peor promedio
            MEMAT = MAT; // Actualiza la matrícula del alumno con peor promedio
        }

        printf("\n\nIngrese la matricula del siguiente alumno: "); // Solicita al usuario que ingrese la matrícula del siguiente alumno
        scanf("%d", &MAT); // Lee la matrícula del siguiente alumno ingresada por el usuario
    }

    // Imprime la matrícula y el promedio del alumno con mejor y peor promedio
    printf("\n\nAlumno con mejor Promedio:\t%d\t%5.2f", MAMAT, MAPRO);
    printf("\n\nAlumno con peor Promedio:\t%d\t%5.2f", MEMAT, MEPRO);
}


