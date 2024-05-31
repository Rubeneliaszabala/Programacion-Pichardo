#include <stdio.h>
#include <stdlib.h>

#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida

/* Serie.
El programa imprime los términos y obtiene la suma de una determinada serie.
I, SSE y CAM: variables de tipo entero. */

void main(void) // Define la función principal del programa
{
    int I = 2, CAM = 1; // Declara e inicializa variables enteras: I para el término de la serie y CAM como un contador alternante
    long SSE = 0; // Declara una variable de tipo long para almacenar la suma de la serie

    while (I <= 2500) // Inicia un bucle while que se ejecuta mientras I sea menor o igual a 2500
    {
        SSE = SSE + I; // Suma el valor actual de I a SSE
        printf("\t %d", I); // Imprime el valor actual de I

        if (CAM) // Verifica si CAM es no cero (alternancia)
        {
            I += 5; // Incrementa I en 5
            CAM--; // Decrementa CAM a 0
        }
        else // Si CAM es cero
        {
            I += 3; // Incrementa I en 3
            CAM++; // Incrementa CAM a 1
        }
    }

    printf("\nLa suma de la serie es: %ld", SSE); // Imprime la suma total de la serie
}
