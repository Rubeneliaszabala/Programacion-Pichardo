#include <stdio.h>// Incluye la biblioteca est�ndar de entrada y salida
#include <stdlib.h>

void main(void) // Declaraci�n de la funci�n principal, que no toma argumentos y no retorna un valor
{
    float PRE, NPR;// Declara dos variables de tipo float: PRE para el precio original y NPR para el nuevo precio
    printf("Ingrese el precio del producto:");// Imprime el mensaje solicitando el precio del producto al usuario
    scanf("%f", &PRE); // Lee un valor de tipo float ingresado por el usuario y lo almacena en la variable PRE
    if(PRE < 1500)// Eval�a si el precio ingresado es menor que 1500
        NPR = PRE * 1.11;// Si la condici�n es verdadera, calcula el nuevo precio incrementando el precio original en un 11%
    else
        NPR = PRE * 1.08;// Si la condici�n es falsa, calcula el nuevo precio incrementando el precio original en un 8%
    printf("\nNuevo precio del producto: %8.2f", NPR); // Imprime el nuevo precio en la consola, formateado con 8 caracteres de ancho y 2 decimales
}
