#include <stdio.h>
#include <stdlib.h>

void  main(void) // Define la función principal del programa. No devuelve ningún valor.
{
    int CLA, CAT, ANT, RES; // Declara cuatro variables enteras: CLA (clave del trabajador), CAT (categoría), ANT (antigüedad) y RES (resultado).
    printf("\nIngrese la clave, categoria y antiguedad del trabajador:");// Solicita al usuario que ingrese la clave, categoría y antigüedad del trabajador.
    scanf("%d %d %d", &CLA, &CAT, &ANT);// Lee los valores ingresados por el usuario y los almacena en las variables CLA, CAT y ANT.
    switch(CAT) // Inicia una estructura switch para evaluar el valor de CAT (categoría del trabajador).
    {
    case 3:// Si CAT es 3:
    case 4:// Si CAT es 4:
        if (ANT >= 5)// Verifica si la antigüedad es mayor o igual a 5 años.
            RES = 1;// Si es así, asigna 1 a RES (reúne las condiciones).
        else
            RES = 0;// Si no, asigna 0 a RES (no reúne las condiciones).
        break;// Finaliza este caso del switch.
    case 2: // Si CAT es 2:
        if (ANT >= 7)// Verifica si la antigüedad es mayor o igual a 7 años.
            RES = 1;// Si es así, asigna 1 a RES (reúne las condiciones).
        else
            RES = 0;// Si no, asigna 0 a RES (no reúne las condiciones).
        break;// Finaliza este caso del switch.
    default:// Si CAT no coincide con ninguno de los casos anteriores:
        RES = 0;// Asigna 0 a RES (no reúne las condiciones).
        break;// Finaliza el switch.
    }
    if  (RES) // Verifica si RES es verdadero (no es cero).
        printf("\nEl trabajador con clave %d reune las condiciones para el puesto", CLA); // Imprime un mensaje indicando que el trabajador reúne las condiciones.
    else// Si RES es falso (cero):
        printf("\nEl trabajador con clave %d no reune las condiciones para el puesto", CLA);// Imprime un mensaje indicando que el trabajador no reúne las condiciones.
}
