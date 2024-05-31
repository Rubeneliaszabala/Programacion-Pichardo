#include <stdio.h>
#include <stdlib.h>

/* Factorial.
El programa calcula el factorial de un número entero.

FAC, I, NUM: variables de tipo entero. */

void main(void)// Define la función principal del programa
{
    int I, NUM;// Declara variables enteras: I para el contador del bucle y NUM para el número ingresado por el usuario
    long FAC;// Declara una variable de tipo long para almacenar el factorial
    printf("Ingrese el numero: ");// Solicita al usuario que ingrese un número
    scanf("%d", &NUM);// Lee el número ingresado por el usuario y lo almacena en NUM
    if (NUM >= 0)// Verifica si el número ingresado es no negativo
    {
        FAC = 1;// Inicializa la variable FAC a 1
        for (I = 1; I <= NUM; I++) // Inicia un bucle for que se ejecuta desde I = 1 hasta I = NUM
            FAC *= I;// Calcula el factorial multiplicando FAC por I en cada iteración
        printf("\nEl factorial de %d es: %ld", NUM, FAC);// Imprime el factorial del número ingresado
    }
    else // Si el número ingresado es negativo
    {
        printf("\nError en el dato ingresado");// Imprime un mensaje de error1
    }
}
