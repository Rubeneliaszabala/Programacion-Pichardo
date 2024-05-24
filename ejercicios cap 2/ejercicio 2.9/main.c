#include <stdio.h>
#include <stdlib.h>


void main(void)
{
    float RES;// Declara una variable de tipo float para almacenar el resultado del c�lculo.
    int R, T, Q; // Declara tres variables de tipo entero para almacenar los valores ingresados por el usuario.
    printf("Ingrese los valores de R, T y Q: "); // Imprime un mensaje solicitando al usuario que ingrese los valores de R, T y Q.
    scanf("%d %d %d", &R, &T, &Q);  // Lee tres valores enteros ingresados por el usuario y los almacena en las variables R, T y Q.
    RES= pow(R, 4) - pow(T, 3) + 4 * pow(Q, 2);// Calcula el valor de la expresi�n usando la funci�n pow para elevar R a la potencia 4, T a la potencia 3 y Q a la potencia 2.
    if (RES < 820)    // Comprueba si el resultado de la expresi�n es menor que 820.
        printf("\nR = %d\tT = %d\t Q = %d", R, T, Q);// Si la condici�n es verdadera, imprime los valores de R, T y Q.

}
