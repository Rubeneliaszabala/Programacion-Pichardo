#include <stdio.h>
#include <stdlib.h>

/* Elección.

El programa obtiene el total de votos de cada candidato y el porcentaje
correspondiente. También considera votos nulos.

VOT, C1, C2, C3, C4, C5, NU, SVO: variables de tipo entero.
PO1, PO2, PO3, PO4, PO5, PON: variables de tipo real.*/

void main(void)// Define la función principal del programa
{
    int VOT, C1 = 0, C2 = 0, C3 = 0, C4 = 0, C5 = 0, NU = 0, SVO; // Declara variables para contar votos y almacenar el total de votos
    float PO1, PO2, PO3, PO4, PO5, PON;// Declara variables para calcular porcentajes de votos
    printf("Ingrese el primer voto: ");// Solicita al usuario que ingrese el primer voto
    scanf("%d", &VOT);// Lee el primer voto ingresado por el usuario
    while (VOT) // Inicia un bucle while que se ejecuta mientras VOT no sea 0
    {
        switch(VOT)// Inicia una estructura switch para procesar el voto
        {
        case 1:
            C1++;
            break;// Incrementa el contador de votos para el candidato 1 si el voto es 1
        case 2:
            C2++;
            break;// Incrementa el contador de votos para el candidato 2 si el voto es 2
        case 3:
            C3++;
            break;// Incrementa el contador de votos para el candidato 3 si el voto es 3
        case 4:
            C4++;
            break;// Incrementa el contador de votos para el candidato 4 si el voto es 4
        case 5:
            C5++;
            break;// Incrementa el contador de votos para el candidato 5 si el voto es 5
        default:
            NU++;
            break;// Incrementa el contador de votos nulos para cualquier otro voto
        }
        printf("Ingrese el siguiente voto -0 para terminar-: ");// Solicita al usuario que ingrese el siguiente voto
        scanf("%d", &VOT);// Lee el siguiente voto ingresado por el usuario
    }
    SVO = C1 + C2 + C3 + C4 + C5 + NU;// Calcula el total de votos válidos y nulos
    // Calcula el porcentaje de votos para cada candidato y votos nulos
    PO1 = ((float) C1 / SVO) * 100;
    PO2 = ((float) C2 / SVO) * 100;
    PO3 = ((float) C3 / SVO) * 100;
    PO4 = ((float) C4 / SVO) * 100;
    PO5 = ((float) C5 / SVO) * 100;
    PON = ((float) NU / SVO) * 100;
    // Imprime el total de votos y los porcentajes de votos para cada candidato y votos nulos
    printf("\nTotal de votos: %d", SVO);
    printf("\n\nCandidato 1: %d votos -- Porcentaje: %5.2f", C1, PO1);
    printf("\nCandidato 2: %d votos -- Porcentaje: %5.2f", C2, PO2);
    printf("\nCandidato 3: %d votos -- Porcentaje: %5.2f", C3, PO3);
    printf("\nCandidato 4: %d votos -- Porcentaje: %5.2f", C4, PO4);
    printf("\nCandidato 5: %d votos -- Porcentaje: %5.2f", C5, PO5);
    printf("\nNulos: %d votos -- Porcentaje: %5.2f", NU, PON);
}
