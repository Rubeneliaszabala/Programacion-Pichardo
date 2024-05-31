#include <stdio.h>
#include <stdlib.h>

void main (void)// Define la función principal del programa

{
    int I;// Declara una variable entera I para el contador del bucle
    float SAL, NOM;// Declara dos variables de tipo float, SAL para el salario y NOM para la suma de los salarios
    NOM= 0;// Inicializa la variable NOM a 0
    for (I=1; I<=15; I++)// Bucle que se ejecuta 15 veces, desde I = 1 hasta I = 15
    {
        printf("\Ingrese el salario del profesor%d:\t", I); // Imprime un mensaje solicitando el salario del profesor I
        scanf("%f", &SAL);// Lee un valor float introducido por el usuario y lo almacena en SAL
        NOM = NOM + SAL;// Suma el salario leído a la variable NOM
    }
    printf("\nEl total de la nomina es: %.2f", NOM);// Imprime el total acumulado de los salarios con dos decimales
}
