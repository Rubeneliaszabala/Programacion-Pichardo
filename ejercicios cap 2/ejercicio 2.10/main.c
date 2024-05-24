#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int NUM;// Declara una variable de tipo entero para almacenar el n�mero ingresado por el usuario.
    printf("Ingrese el numero:");// Imprime un mensaje solicitando al usuario que ingrese un n�mero.
    scanf("%d", &NUM);// Lee el valor entero ingresado por el usuario y lo almacena en la variable NUM.
    if (NUM == 0)// Comprueba si el n�mero ingresado es igual a 0.
        printf("\nNulo");// Si la condici�n es verdadera, imprime "Nulo".
    else// Si el n�mero no es 0, procede a la siguiente condici�n.
        if (pow (-1, NUM) > 0)// Comprueba si el resultado de pow(-1, NUM) es mayor que 0. Esto determina si el n�mero es par o impar.
            printf("\nPar"); // Si la condici�n es verdadera, imprime "Par".
        else
            printf("\nImpar"); // Si la condici�n es falsa, imprime "Impar".

}
