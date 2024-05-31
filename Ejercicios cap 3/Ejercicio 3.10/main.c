#include <stdio.h>
#include <stdlib.h>

/* Pares e impares.

El programa, al recibir como datos N números enteros, obtiene la suma de los
números pares y calcula el promedio de los impares.

I, N, NUM, SPA, SIM, CIM: variables de tipo entero. */

void main(void)// Define la función principal del programa
{
    int I, N, NUM, SPA = 0, SIM = 0, CIM = 0; // Declara variables enteras: I para el contador del bucle, N para el número de datos
    //a procesar, NUM para cada número ingresado, SPA para la suma de los números pares, SIM para la suma de los números impares, y CIM para contar los números impares
    printf("Ingrese el numero de datos que se van a procesar:\t");// Solicita al usuario que ingrese el número de datos a procesar
    scanf("%d", &N);// Lee el número de datos y lo almacena en N
    if (N > 0)// Verifica si el número de datos es mayor que 0
    {
        for (I = 1; I <= N; I++)// Inicia un bucle for que se ejecuta desde I = 1 hasta I = N
        {
            printf("\nIngrese el numero %d: ", I);// Solicita al usuario que ingrese el número I
            scanf("%d", &NUM); // Lee el número ingresado y lo almacena en NUM
            if (NUM)// Verifica si NUM es diferente de 0
                if (pow(-1, NUM) > 0)// Verifica si NUM es par utilizando pow para elevar -1 a NUM (los números pares tendrán un resultado positivo)
                    SPA = SPA + NUM; // Suma el número par a SPA

                else// Si NUM es impar
                {
                    SIM = SIM + NUM;// Suma el número impar a SIM
                    CIM++;// Incrementa el contador de números impares
                }
        }

        printf("\nLa suma de los numeros pares es: %d", SPA);// Imprime la suma de los números pares
        printf("\nEl promedio de numeros impares es: %5.2f", (float)(SIM) / CIM);// Calcula e imprime el promedio de los números impares, realizando una conversión a float para obtener un resultado con decimales
    }
    else// Si el número de datos N no es mayor que 0
        printf("\nEl valor de N es incorrecto");// Imprime un mensaje de error
}
