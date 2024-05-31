#include <stdio.h>
#include <stdlib.h>

// Nómina de profesores.
//El programa, al recibir como datos los salarios de los profesores de una
//universidad, obtiene la nómina y el promedio de los salarios.

//I: variable de tipo entero.
//SAL, NOM y PRO: variables de tipo real.

void main(void)// Define la función principal del programa.
{
    int I = 0;// Declara e inicializa una variable entera I para contar el número de salarios ingresados.
    float SAL, PRO, NOM = 0; // Declara variables de tipo float: SAL para cada salario, PRO para el promedio de salarios, y NOM para la suma total de los salarios, inicializando NOM a 0.
    printf("Ingrese el salario del profesor:\t");// Imprime un mensaje solicitando al usuario que ingrese el primer salario.
    scanf("%f", &SAL); // Lee el primer salario introducido por el usuario y lo almacena en la variable SAL.

    do// Inicia un bucle do-while que se ejecuta al menos una vez.
    {
        NOM = NOM + SAL;// Suma el salario ingresado a la variable NOM.
        I = I + 1;// Incrementa el contador I en 1.
        printf("Ingrese el salario del profesor -0 para terminar-:\t");// Solicita al usuario que ingrese otro salario o 0 para terminar.
        scanf("%f", &SAL); // Lee el siguiente salario introducido por el usuario y lo almacena en SAL.

    }
    while (SAL);// El bucle se ejecuta mientras SAL no sea 0
    PRO = NOM / I;// Calcula el promedio de los salarios dividiendo la suma total NOM entre el número de salarios I.
    printf("\nNomina: %.2f \t Promedio de salarios: %.2f", NOM, PRO);// Imprime la suma total de los salarios y el promedio de los salarios con dos decimales.
}
