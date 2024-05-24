#include <stdio.h>
#include <stdlib.h>

void main(void)
{
    int DIS, TIE;// Declara dos variables de tipo entero para almacenar la distancia y el tiempo de estancia.
    float BIL; // Declara una variable de tipo float para almacenar el costo del billete.
    printf("Ingrese la distancia entre ciudades y el tiempo de estancia: "); // Imprime un mensaje solicitando al usuario que ingrese la distancia y el tiempo de estancia.
    scanf("%d  %d", &DIS, &TIE);// Lee dos valores enteros ingresados por el usuario y los almacena en las variables DIS y TIE.
    if ((DIS*2 > 500) && (TIE > 10)) // Comprueba si la distancia de ida y vuelta es mayor a 500 km y el tiempo de estancia es mayor a 10 días.
        BIL = DIS * 2 * 0.19 * 0.8;// Calcula el costo del billete con un descuento del 20%.
    else //Si la condición no es verdadera, se ejecuta el bloque de código siguiente.
        BIL = DIS * 2  * 0.19;// Calcula el costo del billete sin descuento.
    printf("\n\nCosto del billete: %7.2f", BIL);// Imprime el costo del billete con dos decimales.
}
