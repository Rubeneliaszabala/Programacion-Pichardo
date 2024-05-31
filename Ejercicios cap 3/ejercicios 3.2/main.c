#include <stdio.h>
#include <stdlib.h>

void main (void)// Define la funci�n principal del programa
{
    int I, N, NUM, SUM;// Declara variables enteras: I para el contador del bucle, N para el n�mero de datos, NUM para almacenar cada n�mero ingresado, y SUM para la suma de los n�meros positivos.
    SUM = 0;// Inicializa la variable SUM a 0.
    printf("ingrese el numero de datos:\t");// Imprime un mensaje solicitando al usuario que ingrese el n�mero de datos.
    scanf("%d", &N);// Lee el n�mero de datos introducido por el usuario y lo almacena en la variable N.
    for (I=1; I<=N; I++)// Inicia un bucle que se ejecuta N veces, desde I = 1 hasta I = N.
    {
        printf("Ingrese el dato numero %d:\t", I);// Imprime un mensaje solicitando al usuario que ingrese el dato n�mero I.
        scanf("%d", &NUM); // Lee el n�mero introducido por el usuario y lo almacena en la variable NUM.
        if (NUM > 0) // Comprueba si el n�mero introducido es mayor que 0.
            SUM = SUM + NUM; // Si NUM es positivo, lo suma a la variable SUM.
    }
    printf("\nLA suma de los numeros positivos es %d", SUM);// Imprime la suma de los n�meros positivos.
}
