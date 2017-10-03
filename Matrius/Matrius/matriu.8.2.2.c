#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void){

	int i,j,k,l=0,nf,nc;

	srand(time(NULL)); // Reinicialización de la semilla.

	do {
		printf("Dime el numero de filas y columnas separados por un espacio: ");
		scanf("%d %d", &nf, &nc);
	}while((nf < 2 | nf > 10) && (nc < 2 | nc > 10));

	float matriu1[nf][nc], matriu2[nf][nc], resultat[nf][nc];

	for (i=0;i<nf;i++){ //Rellenamos las matrizes 1  y 2 con números aleatorios.
		for(j=0;j<nc;j++){
			matriu1[i][j] = rand() % 10 +1;
			matriu2[i][j] = rand() % 10 +1; 
		}
	}

	printf("La matriz número1:\n");

	for (i=0;i<nf;i++){ // Mostramos la matriz número 1
		printf("[");
		for(j=0;j<nc;j++){
			printf("\t%2.f",matriu1[i][j]);
		}
		printf("\t]\n");	
	}

	printf("La matriz número2:\n");

	for (i=0;i<nf;i++){ // Mostramos la matriz número 2
		printf("[");
		for(j=0;j<nc;j++){
			printf("\t%2.f",matriu2[i][j]);
		}
		printf("\t]\n");	
	}

	for (i=0;i<nf;i++){ 		// Inicializamos la matriz a 0
		for(j=0;j<nc;j++){
			resultat[i][j] = 0;
		}
	}

	
	for (k=0;k<nf;k++){
		for(i=0;i<nf;i++){
			for(j=0;j<nc;j++){
				resultat[k][l] = resultat[k][l] + (matriu1[i][j] * matriu2[j][i]);
			}
			l++;
		}
	}

	printf("Resultado de la multiplicación\n");
	for (i=0;i<nf;i++){ // Mostramos la matriz número 2
		printf("[");
		for(j=0;j<nc;j++){
			printf("\t%2.f",resultat[i][j]);
		}
		printf("\t]\n");	
	}
}