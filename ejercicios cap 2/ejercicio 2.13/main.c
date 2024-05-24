#include <stdio.h>
#include <stdlib.h>

void main(void)// Define la función principal del programa que no devuelve ningún valor.
{
    float X;// Declara una variable de tipo float para almacenar el valor de X.
    int Y; // Declara una variable de tipo int para almacenar el valor de Y.
    printf("Ingrese el valor de Y: "); // Imprime un mensaje solicitando al usuario que ingrese el valor de Y.
    scanf("%d", &Y);// Lee un valor entero desde la entrada estándar y lo almacena en la variable Y.
    if (Y < 0 || Y > 50)// Comprueba si el valor de Y es menor que 0 o mayor que 50.
        X = 0; // Si la condición anterior es verdadera, asigna el valor 0 a la variable X.
    else if (Y <= 10) // Si la condición anterior no es verdadera, comprueba si el valor de Y es menor o igual a 10.
        X =  4 / Y - Y;// Si Y es menor o igual a 10, calcula el valor de X como 4.0 dividido por Y menos Y. (4.0 se usa para asegurar una división de punto flotante).
    else if (Y <= 25) // Si la condición anterior no es verdadera, comprueba si el valor de Y es menor o igual a 25.
        X = pow(Y, 3) - 12; // Si Y es menor o igual a 25, calcula el valor de X como el cubo de Y menos 12 usando la función pow().
    else// Si ninguna de las condiciones anteriores es verdadera, significa que Y es mayor que 25 pero menor o igual a 50.
        X = pow(Y, 2) + pow(Y, 3) - 18;// Calcula el valor de X como el cuadrado de Y más el cubo de Y menos 18 usando la función pow().
    printf("\n\nY = %d\tX = %8.2f", Y, X);// Imprime los valores de Y y X. Y se imprime como un entero (%d), y X se imprime como un número de punto flotante con 2 decimales de precisión (%8.2f).

}
