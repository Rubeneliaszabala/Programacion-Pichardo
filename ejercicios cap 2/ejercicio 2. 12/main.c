#include <stdio.h>
#include <stdlib.h>

void main (void)// Define la función principal del programa.
{
    int T, P, N;// Declara tres variables enteras T, P y N para almacenar los valores ingresados por el usuario.
    printf("Ingrese los valores de T, P y N: ");// Solicita al usuario que ingrese los valores de T, P y N.
    scanf("%d %d %d", &T, &P, &N);// Lee los valores ingresados por el usuario y los almacena en las variables T, P y N.
    if (P != 0)// Comprueba si P es diferente de cero.
    {
        if (pow(T / P, N) == (pow(T, N) / pow(P, N)))// Comprueba si la igualdad (T/P)^N == (T^N / P^N) se cumple.
            printf("\nSe comprueba la igualdad");// Si la igualdad se cumple, imprime un mensaje indicando que se comprueba la igualdad.
        else
            printf("\nNo se comprueba la igualdad");// Si la igualdad no se cumple, imprime un mensaje indicando que no se comprueba la igualdad.
    }
    else
        printf("\nP tiene que ser diferente de cero");// Si P es igual a cero, imprime un mensaje indicando que P debe ser diferente de cero.
}
