#include <stdio.h>
#include <stdlib.h>

void main(void) // Define la función principal del programa.
{
    float P, S, R; // Declara tres variables de tipo float para almacenar las ventas de los tres vendedores.
    printf("\nIngrese las ventas de los tres vendedores:"); // Imprime un mensaje solicitando al usuario que ingrese las ventas.
    scanf("%f %f %f", &P, &S, R);// Lee tres valores de punto flotante ingresados por el usuario y los almacena en P, S y R.
    if (P > S)// Comprueba si P es mayor que S.
        if (P > R)// Si P es mayor que S, comprueba si P también es mayor que R.
            if (S > R)// Si P es mayor que R, comprueba si S es mayor que R.
                printf("\n\n El orden es P, S y R: %8.2f %8.2f %8.2f", P, S, R); // Si S es mayor que R, imprime P, S y R.
            else// Si S no es mayor que R.
                printf("\n\n El orden es P, R y S: %8.2f %8.2f %8.2f", P, R, S);// Imprime P, R y S.
        else// Si P no es mayor que R.
            printf("\n\n El orden es R, P y S: %8.2f %8.2f %8.2f", R, P, S); // Imprime R, P y S.
    else if (S > R)// Si P no es mayor que S, comprueba si S es mayor que R.
        if (P > R)// Si S es mayor que R, comprueba si P es mayor que R.
            printf("\n\n El orden es S, P y R: %8.2f %8.2f %8.2f", S, P, R);// Si P es mayor que R, imprime S, P y R.
        else// Si P no es mayor que R.
            printf("\n\n El orden es S, R y P: %8.2f %8.2f %8.2f", S, R, P); // Imprime S, R y P.
    else// Si S no es mayor que R.
        printf("\n\n El orden es R, S y P: %8.2f %8.2f %8.2f", R, S, P);  // Imprime R, S y P.

}
