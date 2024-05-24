#include <stdio.h>
#include <stdlib.h>

void main(void)// Define la función principal del programa.
{
    int CLA, TIE; // Declara dos variables enteras, CLA (clave) y TIE (tiempo).
    float COS;// Declara una variable de tipo flotante, COS (costo).
    printf("Ingresa la clave y el tiempo: ");// Solicita al usuario que ingrese la clave y el tiempo.
    scanf("%d %d", &CLA, &TIE);// Lee los valores ingresados por el usuario y los almacena en las variables CLA y TIE.
    switch(CLA)// Inicia una estructura switch para evaluar la clave ingresada.
    {
    case 1:// Si CLA es 1:
        COS = TIE * 0.13 / 60;// Calcula el costo como TIE * 0.13 dividido entre 60.
        break;// Finaliza este caso del switch.
    case  2:// Si CLA es 2:
        COS = TIE * 0.11 / 60;// Calcula el costo como TIE * 0.11 dividido entre 60.
        break;// Finaliza este caso del switch.
    case  5: // Si CLA es 5:
        COS = TIE * 0.22 / 60;// Calcula el costo como TIE * 0.22 dividido entre 60.
        break; // Finaliza este caso del switch.
    case  6: // Si CLA es 6:
        COS = TIE * 0.19 / 60;// Calcula el costo como TIE * 0.19 dividido entre 60.
        break;// Finaliza este caso del switch.
    case 7:// Si CLA es 7:
    case  9: // O si CLA es 9:
        COS = TIE * 0.17 / 60;// Calcula el costo como TIE * 0.17 dividido entre 60.
        break; // Finaliza este caso del switch.
    case  10: // Si CLA es 10:
        COS = TIE * 0.20 / 60;// Calcula el costo como TIE * 0.20 dividido entre 60.
        break;// Finaliza este caso del switch.
    case  15: // Si CLA es 15:
        COS = TIE * 0.39 / 60;// Calcula el costo como TIE * 0.39 dividido entre 60.
        break; // Finaliza este caso del switch.
    case  20:// Si CLA es 20:
        COS = TIE * 0.28 / 60;// Calcula el costo como TIE * 0.28 dividido entre 60.
        break;// Finaliza este caso del switch.
    default :// Si CLA no coincide con ninguno de los casos anteriores:
        COS = -1;// Asigna -1 a COS para indicar un error.
        break;// Finaliza el switch.
    }
    if (COS != -1) // Verifica si el costo no es -1 (clave válida).
        printf("\n\nClave: %d\tTiempo: %d\tCosto: %6.2f", CLA, TIE, COS);// Imprime la clave, el tiempo y el costo.
    else// Si COS es -1 (clave no válida):
        printf("\nError en la clave"); // Imprime un mensaje de error indicando que la clave es incorrecta.

}
