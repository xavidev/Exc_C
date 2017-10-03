#include <stdio.h>

int main(void) {

	int resultado = 0, num, contador = 0;

	while (1) {
		printf("Dame un número\n");
		scanf("%d", &num);
		contador++;
		if ( num < 0 ){
			contador--;
			break;
		}
	resultado = resultado + num;
	}

	printf("La suma de los números positivos és: %d, el número de numeros sumados és: %d", resultado,contador);
}
