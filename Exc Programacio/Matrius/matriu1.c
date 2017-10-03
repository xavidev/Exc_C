#include <stdio.h>
#include <stdlib.h>
#define FILAS 4
#define COLUMNAS 4
// Pedir los elementos de una matriz y la recorremos para sumarla i dar el total.

int main()
{
    float numeros[FILAS][COLUMNAS], resultat=0;
    int j, i;

        for (i=0; i < COLUMNAS;i++){
            for(j=0;j < FILAS;j++){
                printf("Introduce un número: ");
                scanf("%f", &numeros[i][j]);
                resultat= resultat + numeros[i][j];
            }
        }

        printf("\n%2.f\n", resultat);
    return 0;
}