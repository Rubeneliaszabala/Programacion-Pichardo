#include <stdio.h> // Incluye la biblioteca est�ndar de entrada y salida
#include <stdlib.h>// Incluye la biblioteca est�ndar para funciones como exit()


void main (void)// Declaraci�n de la funci�n principal, que no toma argumentos y no retorna un valor
{
    float SAL;// Declara una variable de tipo float llamada 'SAL' para almacenar el salario del profesor
    int NIV; // Declara una variable de tipo int llamada 'NIV' para almacenar el nivel acad�mico del profesor
    printf("Ingrese el nivel academico del profesor:"); // Imprime el mensaje solicitando el nivel acad�mico del profesor al usuario
    scanf("%d", &NIV);// Lee un valor entero ingresado por el usuario y lo almacena en la variable NIV
    printf("Ingrese el salario:");// Imprime el mensaje solicitando el salario del profesor al usuario
    scanf("%f", &SAL);// Lee un valor de tipo float ingresado por el usuario y lo almacena en la variable SAL
    switch(NIV)// Eval�a el nivel acad�mico ingresado por el usuario y realiza el c�lculo correspondiente
        printf("ingrese el salario:");
    scanf("%f", &SAL);
    switch(NIV)
    {

    case 1: // Si el nivel acad�mico es 1, incrementa el salario en un 0.35%
        SAL = SAL * 1.0035;
        break;
    case 2:  // Si el nivel acad�mico es 2, incrementa el salario en un 0.41%
        SAL = SAL * 1.0041;
        break;
    case 3:  // Si el nivel acad�mico es 3, incrementa el salario en un 0.48%
        SAL = SAL * 1.0048;
        break;
    case 4:// Si el nivel acad�mico es 4, incrementa el salario en un 0.53%
        SAL = SAL * 1.0053;
        break;

    }
    printf("\n\nNivel: %d \tNuevo salario: %8.2f",NIV, SAL);// Imprime el nivel acad�mico y el nuevo salario calculado en la consola
}
