#include <stdio.h>// Incluye la biblioteca estándar de entrada y salida
#include <stdlib.h>

void main(void) // Declaración de la función principal, que no toma argumentos y no retorna un valor
{
    float PRE, NPR;// Declara dos variables de tipo float: PRE para el precio original y NPR para el nuevo precio
    printf("Ingrese el precio del producto:");// Imprime el mensaje solicitando el precio del producto al usuario
    scanf("%f", &PRE); // Lee un valor de tipo float ingresado por el usuario y lo almacena en la variable PRE
    if(PRE < 1500)// Evalúa si el precio ingresado es menor que 1500
        NPR = PRE * 1.11;// Si la condición es verdadera, calcula el nuevo precio incrementando el precio original en un 11%
    else
        NPR = PRE * 1.08;// Si la condición es falsa, calcula el nuevo precio incrementando el precio original en un 8%
    printf("\nNuevo precio del producto: %8.2f", NPR); // Imprime el nuevo precio en la consola, formateado con 8 caracteres de ancho y 2 decimales
}
