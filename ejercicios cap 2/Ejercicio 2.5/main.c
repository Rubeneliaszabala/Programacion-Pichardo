#include <stdio.h> // Incluye la biblioteca est�ndar de entrada y salida
#include <math.h> // Incluye la biblioteca matem�tica para usar la funci�n pow
void main (void) // Declaraci�n de la funci�n principal, que no toma argumentos y no retorna un valor
{
    int OP, T; // Declara dos variables de tipo int: OP para la opci�n seleccionada y T para el valor ingresado
    float RES;// Declara una variable de tipo float llamada 'RES' para almacenar el resultado del c�lculo
    printf("Ingrese la opcion del calculo y el valor entero: ");// Imprime el mensaje solicitando la opci�n de c�lculo y el valor entero al usuario
    scanf("%d %d", &OP, &T);// Lee dos valores enteros ingresados por el usuario y los almacena en las variables OP y T
    switch(OP) // Eval�a la opci�n ingresada por el usuario y realiza el c�lculo correspondiente
    {
    case 1:
        RES = T / 5;// Si la opci�n es 1, divide T por 5 y almacena el resultado en RES
        break;
    case 2:
        RES = pow(T,T);// Si la opci�n es 2, calcula T elevado a la potencia de T y almacena el resultado en RES
        /* La funcion pow esta definida en la biblioteca math.h*/
        break;
    case 3:// Si la opci�n es 3 o 4, multiplica T por 6 y luego divide por 2, almacenando el resultado en RES
    case 4:
        RES = 6 * T/2;// Si la opci�n es 3 o 4, multiplica T por 6 y luego divide por 2, almacenando el resultado en RES
        break;

    }
    printf("\nResultado: %7.2f", RES);// Imprime el resultado del c�lculo en la consola, formateado con 7 caracteres de ancho y 2 decimales

}
