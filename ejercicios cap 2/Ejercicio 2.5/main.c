#include <stdio.h> // Incluye la biblioteca estándar de entrada y salida
#include <math.h> // Incluye la biblioteca matemática para usar la función pow
void main (void) // Declaración de la función principal, que no toma argumentos y no retorna un valor
{
    int OP, T; // Declara dos variables de tipo int: OP para la opción seleccionada y T para el valor ingresado
    float RES;// Declara una variable de tipo float llamada 'RES' para almacenar el resultado del cálculo
    printf("Ingrese la opcion del calculo y el valor entero: ");// Imprime el mensaje solicitando la opción de cálculo y el valor entero al usuario
    scanf("%d %d", &OP, &T);// Lee dos valores enteros ingresados por el usuario y los almacena en las variables OP y T
    switch(OP) // Evalúa la opción ingresada por el usuario y realiza el cálculo correspondiente
    {
    case 1:
        RES = T / 5;// Si la opción es 1, divide T por 5 y almacena el resultado en RES
        break;
    case 2:
        RES = pow(T,T);// Si la opción es 2, calcula T elevado a la potencia de T y almacena el resultado en RES
        /* La funcion pow esta definida en la biblioteca math.h*/
        break;
    case 3:// Si la opción es 3 o 4, multiplica T por 6 y luego divide por 2, almacenando el resultado en RES
    case 4:
        RES = 6 * T/2;// Si la opción es 3 o 4, multiplica T por 6 y luego divide por 2, almacenando el resultado en RES
        break;

    }
    printf("\nResultado: %7.2f", RES);// Imprime el resultado del cálculo en la consola, formateado con 7 caracteres de ancho y 2 decimales

}
