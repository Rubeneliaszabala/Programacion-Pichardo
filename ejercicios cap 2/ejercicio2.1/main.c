#include <stdio.h>
#include <stdlib.h> // Incluye la biblioteca est�ndar de entrada y salida

void main (viod) //Define la funci�n principal del programa. No toma argumentos y no retorna un valor.
{

    float pro;        //Declara una variable de tipo float llamada pro. Esta variable almacenar� el promedio del alumno.
    printf("ingrese el promedio del alumno:");//Utiliza la funci�n printf para mostrar el mensaje "Ingrese el promedio del alumno:"
    // en la consola. Esto indica al usuario que debe ingresar un valor.
    scanf("%f", &pro); // Lee un valor de tipo float desde la entrada est�ndar y lo almacena en 'pro'
    if (pro>=6)       // Eval�a si el promedio ingresado es mayor o igual a 6
        printf("\nAprobado"); // Si la condici�n es verdadera, imprime "Aprobado"
}
