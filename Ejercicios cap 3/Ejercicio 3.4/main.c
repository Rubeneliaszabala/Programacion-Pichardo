#include <stdio.h>
#include <stdlib.h>


/* Suma cuadrados.
El programa, al recibir como datos un grupo de enteros positivos, obtiene el cuadrado de los mismos y la suma correspondiente a dichos cuadrados. */

void main(void)// Define la función principal del programa
{
    int NUM;// Declara una variable entera NUM para el número ingresado por el usuario.
    long CUA, SUC = 0; // Declara variables de tipo long: CUA para el cuadrado del número y SUC para la suma de los cuadrados.
    printf("Ingrese un numero entero -0 para terminar-:\t");// Imprime un mensaje solicitando al usuario que ingrese un número entero
    scanf("%d", &NUM);// Lee el número entero ingresado por el usuario y lo almacena en NUM
    while (NUM)// Inicia un bucle que se ejecuta mientras NUM no sea 0

    {
        CUA = pow (NUM, 2);// Calcula el cuadrado de NUM y lo almacena en CUA, realizando una conversión a long para asegurar el tipo de dato
        printf("%d al cubo es %ld", NUM, CUA);// Imprime el número y su cuadrado.
        SUC = SUC + CUA;// Suma el cuadrado calculado a SUC
        printf("Ingrese un numero entero -0 para terminar-:\t");// Solicita al usuario que ingrese otro número entero
        scanf("%d", &NUM);// Lee el nuevo número ingresado y lo almacena en NUM
    }
    printf("La suma de los cuadrados es %ld", SUC);// Imprime la suma de los cuadrados

}
