#include <stdio.h>
#include <stdlib.h>

/* Números perfectos.

El programa, al recibir como dato un número entero positivo como límite, obtiene los números perfectos que hay entre 1 y ese número, y además imprime cuántos números perfectos hay en el intervalo.

I, J, NUM, SUM, C: variables de tipo entero. */



void main(void) // Define la función principal del programa
{
    int I, J, NUM, SUM, C = 0; // Declara variables para el índice de bucle, divisor, número límite, suma de divisores, contador de números perfectos

    printf("\nIngrese el numero limite: "); // Solicita al usuario que ingrese el número límite
    scanf("%d", &NUM); // Lee el número límite ingresado por el usuario

    for (I = 1; I <= NUM; I++) // Bucle externo que itera desde 1 hasta el número límite
    {
        SUM = 0; // Reinicia la suma de divisores para cada número
        for (J = 1; J <= (I / 2); J++) // Bucle interno que encuentra los divisores de cada número
        {
            if ((I % J) == 0) // Verifica si J es un divisor de I
                SUM += J; // Agrega J a la suma de divisores
        }

        if (SUM == I) // Comprueba si la suma de divisores es igual al número mismo
        {
            printf("\n%d es un numero perfecto", I); // Imprime que el número es perfecto
            C++; // Incrementa el contador de números perfectos
        }
    }

    printf("\nEntre 1 y %d hay %d numeros perfectos", NUM, C); // Imprime el número de números perfectos encontrados
}
