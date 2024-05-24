#include <stdio.h>
#include <stdlib.h>

void main(void) // Declaración de la función principal, que no toma argumentos y no retorna un valor
{
    float PRE, NPR; // Declara dos variables de tipo float: PRE para el precio original y NPR para el nuevo precio
    printf("ingrese el precio del producto");   // Imprime el mensaje solicitando el precio del producto al usuario
    scanf("%f", &PRE);   // Lee un valor de tipo float ingresado por el usuario y lo almacena en la variable PRE
    if (PRE > 1500)// Evalúa si el precio ingresado es mayor que 1500
{

    NPR= PRE* 1.11;// Calcula el nuevo precio incrementando el precio original en un 11% y lo almacena en NPR
    printf("\nNuevo precio: %7.2f",NPR); // Imprime el nuevo precio en la consola, formateado con 7 caracteres de ancho y 2 decimales


    }

}
