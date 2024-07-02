#include <stdio.h>
#include <stdlib.h>

int main()
{
    char cadena[100];
    char *ptr;

    printf("Introduce una cadena de letras: ");
    fgets(cadena, sizeof(cadena), stdin);

    /* Eliminar el car�cter de nueva linea si se ingrese */
    if (cadena[strlen(cadena) - 1] == '\n')
    {
        cadena[strlen(cadena) - 1] = '\0';
    }

    /* Convertir letras min�sculas a may�sculas y viceversa */
    ptr = cadena;
    while (*ptr != '\0')
    {
        if (*ptr >= 'a' && *ptr <= 'z')
        {
            *ptr = *ptr - ('a' - 'A'); /* Convierte a mayuscula */
        }
        else if (*ptr >= 'A' && *ptr <= 'Z')
        {
            *ptr = *ptr + ('a' - 'A'); /* Convierte a minuscula */
        }
        ptr++;
    }

    printf("La cadena convertida es: %s\n", cadena);

    return 0;
}
