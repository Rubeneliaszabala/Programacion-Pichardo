#include <stdio.h>
#include <stdlib.h>

/* Cálculo de P.

El programa obtiene el valor de P aplicando una serie determinada.

I, B, C: variables de tipo entero.
RES: variable de tipo real de doble precisión. */

void main(void) // Define la función principal del programa
{
    int I = 1, B = 0, C; // Declara e inicializa variables para la iteración, control y conteo
    double RES; // Declara una variable para almacenar el resultado de la aproximación de pi

    RES = 4.0 / I; // Inicializa el resultado con el primer término de la serie

    C = 1; // Inicializa el contador de términos con 1

    // Utiliza un bucle while para aproximar el valor de pi
    while ((fabs(3.1415 - RES)) > 0.0005)
    {
        I += 2; // Incrementa el denominador para el siguiente término de la serie

        // Alterna entre sumar y restar el siguiente término de la serie
        if (B)
        {
            RES += (double)(4.0 / I);
            B = 0;
        }
        else
        {
            RES -= (double)(4.0 / I);
            B = 1;
        }

        C++; // Incrementa el contador de términos
    }

    // Imprime el número de términos necesarios para aproximar pi con la precisión especificada
    printf("\nNumero de terminos: %d", C);
}
