#include <stdio.h>

/* 3. Fes un programa en C que vaja llegint números fins que s’introduisca un nombre negatiu. En aquest moment, 
el programa mostrarà per pantalla el major dels nombres introduïts. Fes-ho amb un bucle do-while.  */

int main(void) {
	
	int n,m;
	m = 0;
	do {
		printf("Donem un numero\n");
		scanf("%d", &n);
		if ( n - 1 > m )
			m = n;
	} while ( n >=0 );
	
	printf("El numero més gran que has posat és: %d\n", m);

}
