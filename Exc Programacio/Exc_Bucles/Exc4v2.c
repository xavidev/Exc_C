#include <stdio.h>

int main(void) {

	int resultado = 0, num = 0;

	while (1) {
		printf("Dame un número\n");
		scanf("%d", &num);
		if ( num < 0 )
			break;
		resultado = resultado + num;
	}

	printf("La suma de los números positivos és: %d ", resultado);
}