#include <stdio.h>
#include <stdlib.h>

/* Serie de ULAM.

El programa, al recibir como dato un entero positivo, obtiene y escribe la serie de ULAM.

NUM: variable de tipo entero. */

void main(void) // Define la función principal del programa
{
    int NUM;// Declara una variable entera para almacenar el número ingresado por el usuario
    printf("Ingresa el numero para calcular la serie: ");// Solicita al usuario que ingrese el número para calcular la serie
    scanf("%d", &NUM);// Lee el número ingresado por el usuario y lo almacena en NUM
    if (NUM > 0)// Verifica si NUM es mayor que 0
    {
        printf("\nSerie de ULAM\n");// Imprime un encabezado para la serie de Ulam
        printf("%d \t", NUM); // Imprime el primer número de la serie
        while (NUM != 1) // Inicia un bucle while que se ejecuta mientras NUM no sea igual a 1
        {
            if (pow(-1, NUM) > 0)// Verifica si NUM es par
                NUM = NUM / 2;// Si NUM es par, divide NUM entre 2
            else
                NUM = NUM * 3 + 1; // Si NUM es impar, multiplica NUM por 3 y le suma 1
            printf("%d \t", NUM);// Imprime el valor actual de NUM en la serie
        }
    }
    else
        printf("\n NUM debe ser un entero positivo");// Si NUM no es mayor que 0, imprime un mensaje de error
}
