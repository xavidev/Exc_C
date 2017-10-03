//1. Implementa un programa que genere un fitxer binari anomenat "multiples.dat" amb els 10 primers múltiples de 5.

#include <stdio.h>

void multiples (int num, FILE *f){

	int n = 5;

	while(fwrite(&n, sizeof(n), 1, f) > 0 && n < (num*5)) n = n +5;
}


int main(void){

	FILE *fp;

	fp = fopen("multiples.dat", "wb");

	if (fp == NULL) printf("Error al abrir el archivo");

	multiples(10,fp);

	printf("Se ha escrito en el fichero multiples.dat\n");

}