//2. Implementa un programa que llegeix el contingut del fitxer "multiples.dat" i l'imprimeix per pantalla.

#include <stdio.h>

void leer_multiples (FILE *f){

	int n;

	while(fread(&n, sizeof(n), 1, f) > 0) printf("%d ", n);
}


int main(void){

	FILE *fp;

	fp = fopen("multiples.dat", "rb");

	if (fp == NULL) printf("Error al abrir el archivo");

	leer_multiples(fp);

	fclose(fp);


}