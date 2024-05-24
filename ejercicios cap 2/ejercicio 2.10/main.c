#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int NUM;// Declara una variable de tipo entero para almacenar el número ingresado por el usuario.
    printf("Ingrese el numero:");// Imprime un mensaje solicitando al usuario que ingrese un número.
    scanf("%d", &NUM);// Lee el valor entero ingresado por el usuario y lo almacena en la variable NUM.
    if (NUM == 0)// Comprueba si el número ingresado es igual a 0.
        printf("\nNulo");// Si la condición es verdadera, imprime "Nulo".
    else// Si el número no es 0, procede a la siguiente condición.
        if (pow (-1, NUM) > 0)// Comprueba si el resultado de pow(-1, NUM) es mayor que 0. Esto determina si el número es par o impar.
            printf("\nPar"); // Si la condición es verdadera, imprime "Par".
        else
            printf("\nImpar"); // Si la condición es falsa, imprime "Impar".

}
