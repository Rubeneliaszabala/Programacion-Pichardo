#include <stdio.h>
#include <stdlib.h>

void main (void)// Declaraci�n de la funci�n principal, que no toma argumentos y no retorna un valor

{
    float PRO;// Declara una variable de tipo float llamada 'PRO' para almacenar el promedio del alumno
    printf("Ingrese el promedio del alumno: ");// Imprime el mensaje solicitando el promedio del alumno al usuario
    scanf("%f", &PRO);// Lee un valor de tipo float ingresado por el usuario y lo almacena en la variable PRO
    if (PRO>= 6.0) // Eval�a si el promedio ingresado es mayor o igual a 6.0
        printf("\nAprobado");// Si la condici�n es verdadera, imprime "Aprobado"
    else
        printf("\nReprobado");// Si la condici�n es falsa, imprime "Reprobado"
}

