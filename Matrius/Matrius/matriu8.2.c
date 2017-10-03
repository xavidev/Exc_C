#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(void) {

	int i,j,nf,nc;

	srand(time(NULL)); // Reinicialización de la semilla.

	do {
		printf("Dime el numero de filas y columnas separados por un espacio: ");
		scanf("%d %d", &nf, &nc);
	}while((nf < 2 | nf > 10) && (nc < 2 | nc > 10));

	float matriu1[nf][nc], matriu2[nf][nc], resultat[nc][nf];



	printf("La matriu resultant de la suma de la matriu 1 y matriu 2\n");
	for (i=0;i<nf;i++){ //Llenamos las matrizes "matriu1" y "matriu2" y las sumamos.
		printf("[");
		for(j=0;j<nc;j++){
			matriu1[i][j] = rand() % 100 +1;
			matriu2[i][j] = rand() % 100+1;
			resultat[i][j] = matriu1[i][j] + matriu2[i][j];
			printf("\t%2.f\t", resultat[i][j]);
		}
		printf("]\n");
	}

	printf("La matriu número 1\n");
	for(i=0;i<nf;i++){
		printf("[");
		for(j=0;j<nc;j++){
			printf("\t%2.f\t", matriu1[i][j]);
		}
		printf("]\n");
	}

	printf("La matriu número 2\n");
	for(i=0;i<nf;i++){
		printf("[");
		for(j=0;j<nc;j++){
			printf("\t%2.f\t", matriu2[i][j]);
		}
		printf("]\n");
	}
	
}