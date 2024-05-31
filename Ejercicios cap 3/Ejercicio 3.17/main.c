#include <stdio.h>
#include <stdlib.h>

/* N�meros perfectos.

El programa, al recibir como dato un n�mero entero positivo como l�mite, obtiene los n�meros perfectos que hay entre 1 y ese n�mero, y adem�s imprime cu�ntos n�meros perfectos hay en el intervalo.

I, J, NUM, SUM, C: variables de tipo entero. */



void main(void) // Define la funci�n principal del programa
{
    int I, J, NUM, SUM, C = 0; // Declara variables para el �ndice de bucle, divisor, n�mero l�mite, suma de divisores, contador de n�meros perfectos

    printf("\nIngrese el numero limite: "); // Solicita al usuario que ingrese el n�mero l�mite
    scanf("%d", &NUM); // Lee el n�mero l�mite ingresado por el usuario

    for (I = 1; I <= NUM; I++) // Bucle externo que itera desde 1 hasta el n�mero l�mite
    {
        SUM = 0; // Reinicia la suma de divisores para cada n�mero
        for (J = 1; J <= (I / 2); J++) // Bucle interno que encuentra los divisores de cada n�mero
        {
            if ((I % J) == 0) // Verifica si J es un divisor de I
                SUM += J; // Agrega J a la suma de divisores
        }

        if (SUM == I) // Comprueba si la suma de divisores es igual al n�mero mismo
        {
            printf("\n%d es un numero perfecto", I); // Imprime que el n�mero es perfecto
            C++; // Incrementa el contador de n�meros perfectos
        }
    }

    printf("\nEntre 1 y %d hay %d numeros perfectos", NUM, C); // Imprime el n�mero de n�meros perfectos encontrados
}
