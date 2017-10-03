#include <stdio.h>

int main(void){

	float t;

	printf("Introduce el tamaño\n");
	scanf("%f", &t);
	
	if ( (t >= 1) && (t < 3)){
		printf("Es pequeño\n");
	}
	if ((t >= 3) && (t < 5)) {
		printf("Es mediano\n");
	}
	if ((t >= 5) && (t < 6.5)) {
		printf("Es grande\n");
	}
	if ((t >= 6.5) && (t < 8.5)) {
		printf("Es muy grande\n");
	}
	else if (t >= 8.5) {
		printf("Fuera de rango\n");
	}
		
}
