#include <stdio.h>
#include <stdlib.h>

void main (void)
{
    int MAT, CAR, SEM;// Declara tres variables de tipo entero: MAT para la matrícula, CAR para la carrera y SEM para el semestre.
    float PRO; // Declara una variable de tipo flotante para el promedio.
    printf("ingrese matricula"); // Imprime un mensaje solicitando al usuario que ingrese la matrícula.
    scanf("%d", &MAT);// Lee el valor de la matrícula ingresado por el usuario y lo almacena en la variable MAT.
    printf("ingrese carrera(1-Mecatronica 2-Energia Renovables 3-Telecomunicaciones 4-software) : ");// Imprime un mensaje solicitando al usuario que ingrese el código de la carrera.
    scanf("%d", &CAR); // Lee el valor de la carrera ingresado por el usuario y lo almacena en la variable CAR.
    printf("ingrese semestre: ");// Imprime un mensaje solicitando al usuario que ingrese el semestre.
    scanf("%d", &SEM); // Lee el valor del semestre ingresado por el usuario y lo almacena en la variable SEM.
    printf("Ingrese promedio: "); // Imprime un mensaje solicitando al usuario que ingrese el promedio.
    scanf("%f", &PRO);// Lee el valor del promedio ingresado por el usuario y lo almacena en la variable PRO.
    switch(CAR)// Inicia una estructura switch para evaluar el valor de la variable CAR.
    {
    case 1:// Caso para la carrera 1 (Mecatrónica).
        if (SEM>= 6 && PRO >= 8.5) // Comprueba si el semestre es mayor o igual a 6 y el promedio es mayor o igual a 8.5.
            printf("\n%d %d %5.2f", MAT, CAR, PRO); // Si se cumplen las condiciones, imprime la matrícula, la carrera y el promedio.
        break;// Termina este caso.
    case 2:// Caso para la carrera 2 (Energías Renovables).
        if (SEM>= 5 && PRO >= 9.0) // Comprueba si el semestre es mayor o igual a 5 y el promedio es mayor o igual a 9.0.
            printf("\n%d %d %5.2f", MAT, CAR, PRO); // Si se cumplen las condiciones, imprime la matrícula, la carrera y el promedio.
        break;// Termina este caso.
    case 3: // Caso para la carrera 3 (Telecomunicaciones).
        if (SEM >= 6 && PRO >= 8.8) // Comprueba si el semestre es mayor o igual a 6 y el promedio es mayor o igual a 8.8.
            printf("\n%d %d %5.2f", MAT, CAR, PRO);// Si se cumplen las condiciones, imprime la matrícula, la carrera y el promedio.
        break;// Termina este caso.
    case 4:// Caso para la carrera 4 (Software).
        if (SEM >= 7 && PRO >= 9.0)// Comprueba si el semestre es mayor o igual a 7 y el promedio es mayor o igual a 9.0.
            printf("\n%d %d %5.2f", MAT, CAR, PRO); // Si se cumplen las condiciones, imprime la matrícula, la carrera y el promedio.
        break;// Termina este caso.
    default:// Caso por defecto para valores de CAR que no coincidan con ninguno de los casos anteriores.
        printf("\n Error en la carrera"); // Imprime un mensaje de error indicando que la carrera ingresada es incorrecta.
        break; // Termina el caso por defecto.
    }
}
