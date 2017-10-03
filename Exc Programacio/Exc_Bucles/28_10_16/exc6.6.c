#include <stdio.h>

int main() {
	
	int n, np, nt, nf;
	
	printf("Hola dime el número de latas que quieres apilar: \n");
	scanf("%d", &np);
	if ( np == 0 ){
		printf("No tienes latas.");
		return 0;
	}
	nf = 0; // Número de latas en cada fila
	nt = 0; // Número total de latas
	n= 0; // Lo utilizamos para saber en cuantas filas vamos a necesitar.
	for (n=0;nt < np; n++) {
		nf = nf + 1;
		nt = nt + nf;
		
		
	}
	
	
	if ( nt == np) 
		printf("Las latas se pueden apilar en %d filas\n", n);
	else
		printf("Las latas no se pueden apilar\n");
	
	
	
	
	
	
}



