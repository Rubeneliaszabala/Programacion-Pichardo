#include <stdio.h>
#include <stdlib.h>

void main(void)// Define la funci�n principal del programa. No devuelve ning�n valor.
{
    int TRA, EDA, DIA;// Declara tres variables enteras: TRA (tipo de tratamiento), EDA (edad) y DIA (d�as).
    float COS;// Declara una variable de tipo flotante, COS (costo).
    printf("Ingrese tipo de tratamiento, edad y dias: ");// Solicita al usuario que ingrese el tipo de tratamiento, la edad y los d�as.
    scanf("%d %d %d", &TRA, &EDA, &DIA); // Lee los valores ingresados por el usuario y los almacena en las variables TRA, EDA y DIA.
    switch(TRA)// Inicia una estructura switch para evaluar el valor de TRA (tipo de tratamiento).
    {
    case 1: // Si TRA es 1:
        COS = DIA * 2800;// Calcula el costo como DIA * 2800.
        break;// Finaliza este caso del switch.
    case 2:// Si TRA es 2:
        COS = DIA * 1950;// Calcula el costo como DIA * 1950.
        break; // Finaliza este caso del switch.
    case 3:// Si TRA es 3:
        COS = DIA * 2500; // Calcula el costo como DIA * 2500.
        break;// Finaliza este caso del switch.
    case 4:// Si TRA es 4:
        COS = DIA * 1150;// Calcula el costo como DIA * 1150.
        break;// Finaliza este caso del switch.
    default:// Si TRA no coincide con ninguno de los casos anteriores:
        COS = -1;// Asigna -1 a COS para indicar un error.
        break;// Finaliza el switch.
    }
    if (COS != -1) // Verifica si el costo no es -1 (clave de tratamiento v�lida).
    {
        if (EDA >= 60) // Si la edad es mayor o igual a 60 a�os:
            COS = COS * 0.75;// Aplica un descuento del 25% al costo.
        else if (EDA <= 25)// Si la edad es menor o igual a 25 a�os:
            COS = COS * 0.85; // Aplica un descuento del 15% al costo.
        printf("\nClave tratamiento: %d\t Dias: %d\t Costo total: %8.2f",// Imprime la clave del tratamiento, los d�as y el costo total.
               TRA, DIA, COS);
    }
    else// Si el costo es -1 (clave de tratamiento no v�lida):
        printf("\nLa clave del tratamiento es incorrecta");// Imprime un mensaje de error indicando que la clave del tratamiento es incorrecta.
}
