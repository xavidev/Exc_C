#include <stdio.h>

/* 2. Fes un programa en C que vaja llegint números fins que s’introduisca un nombre negatiu. En aquest moment, 
el programa acabarà mostrant un missatge de finalització del programa. Fes-ho amb un bucle while. */

int main(void) {
	
	int n = 0;
	
	while ( n >=0 ){
		printf("Donem un numero\n");
		scanf("%d", &n);
	} 
}
