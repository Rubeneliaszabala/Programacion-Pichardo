#include <stdio.h>
#include <stdlib.h>


/* Suma cuadrados.
El programa, al recibir como datos un grupo de enteros positivos, obtiene el cuadrado de los mismos y la suma correspondiente a dichos cuadrados. */

void main(void)// Define la funci�n principal del programa
{
    int NUM;// Declara una variable entera NUM para el n�mero ingresado por el usuario.
    long CUA, SUC = 0; // Declara variables de tipo long: CUA para el cuadrado del n�mero y SUC para la suma de los cuadrados.
    printf("Ingrese un numero entero -0 para terminar-:\t");// Imprime un mensaje solicitando al usuario que ingrese un n�mero entero
    scanf("%d", &NUM);// Lee el n�mero entero ingresado por el usuario y lo almacena en NUM
    while (NUM)// Inicia un bucle que se ejecuta mientras NUM no sea 0

    {
        CUA = pow (NUM, 2);// Calcula el cuadrado de NUM y lo almacena en CUA, realizando una conversi�n a long para asegurar el tipo de dato
        printf("%d al cubo es %ld", NUM, CUA);// Imprime el n�mero y su cuadrado.
        SUC = SUC + CUA;// Suma el cuadrado calculado a SUC
        printf("Ingrese un numero entero -0 para terminar-:\t");// Solicita al usuario que ingrese otro n�mero entero
        scanf("%d", &NUM);// Lee el nuevo n�mero ingresado y lo almacena en NUM
    }
    printf("La suma de los cuadrados es %ld", SUC);// Imprime la suma de los cuadrados

}
