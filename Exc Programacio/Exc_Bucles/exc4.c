#include <stdio.h>

int main(void) {

	int num = 0, resultado = 0;

	while ( num > -1 ) {
		printf("Dime un número" );
		scanf("%d", &num);
		resultado = resultado + num;
	}

// Le cambiamos el signo al número para que se lo sume

	resultado = resultado - (num);
	printf("La suma de los número és: %d", resultado);




}