#include <stdio.h>

struct t_matriz {
    float valores[10][10];
    int fil;
    int col;
};

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

    struct t_matriz matrizA;
    struct t_matriz matrizB;
    struct t_matriz matrizR;
    int i,j;

    srand(time(NULL)); // Reinicialización de la semilla.

    do {
        printf("Dime el numero de filas y columnas de la matriz1 y matriz2 separados por un espacio: El número de filas de la segunda matriz puede ser diferente\n ");
        scanf("%d %d %d %d", &(matrizA.fil), &(matrizA.col), &(matrizB.fil), &(matrizB.col));
    }while(matrizA.fil != matrizB.fil);


    for (i=0;i<nf1;i++){ //Rellenamos la matriz1 con números aleatorios
        for(j=0;j<nc1;j++){
            matriu1[i][j] = rand() % 10 +1;
            matriu2[i][j] = rand() % 10 +1;
        }
    }

    for (i=0;i<nf2;i++){ //Rellenamos la matriz2 con números aleatorios
        for(j=0;j<nc2;j++){
            matriu1[i][j] = rand() % 10 +1;
            matriu2[i][j] = rand() % 10 +1;
        }
    }

    printf("La matriz número1:\n");

    for (i=0;i<nf1;i++){ // Mostramos la matriz número 1
        printf("[");
        for(j=0;j<nc1;j++){
            printf("\t%d",matriu1[i][j]);
        }
        printf("\t]\n");
    }

    printf("La matriz número2:\n");

    for (i=0;i<nf2;i++){ // Mostramos la matriz número 2
        printf("[");
        for(j=0;j<nc2;j++){
            printf("\t%d",matriu2[i][j]);
        }
        printf("\t]\n");
    }

    for (i=0;i<nf1;i++){ 		// Inicializamos la matriz resultado a 0
        for(j=0;j<nc1;j++){
            resultat[i][j] = 0;
        }
    }

    for (k=0;k<nc2;k++){ // Contador columnas matriz2 y resultado
        for(i=0;i<nf1;i++){ // Contador filas matriz1
            for(j=0;j<nc2;j++){// Contador filas matriz2 y columnas matriz1(También funcionaría usando nc1)
                resultat[i][k] = resultat[i][k] + matriu1[i][j] * matriu2[j][k];
            }
        }
    }


    printf("Resultado de la multiplicación\n");
    for (i=0;i<nf1;i++){ // Mostramos la matriz resultado
        printf("[");
        for(j=0;j<nc1;j++){
            printf("\t%d",resultat[i][j]);
        }
        printf("\t]\n");
    }
}
