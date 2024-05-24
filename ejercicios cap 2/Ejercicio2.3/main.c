#include <stdio.h>
#include <stdlib.h>

void main (void)// Declaración de la función principal, que no toma argumentos y no retorna un valor

{
    float PRO;// Declara una variable de tipo float llamada 'PRO' para almacenar el promedio del alumno
    printf("Ingrese el promedio del alumno: ");// Imprime el mensaje solicitando el promedio del alumno al usuario
    scanf("%f", &PRO);// Lee un valor de tipo float ingresado por el usuario y lo almacena en la variable PRO
    if (PRO>= 6.0) // Evalúa si el promedio ingresado es mayor o igual a 6.0
        printf("\nAprobado");// Si la condición es verdadera, imprime "Aprobado"
    else
        printf("\nReprobado");// Si la condición es falsa, imprime "Reprobado"
}

