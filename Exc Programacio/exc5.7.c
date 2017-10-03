#include <stdio.h>

int main(void){
	
	float a,x,b;
	
	printf("Dame el valor de a\n");
	scanf("%f", &a);
	printf("Dame el valor de b\n");
	scanf("%f", &b);
	
	if ((a == 0) && (b != 0)){
		printf("No tiene solución");
	}
	else if ((a == 0) && (b == 0)) {
		printf("Infinitas soluciones");
	}
	else {
		x = -b / a;
		printf("El resultado de la incognita x es: %.2f\n", x);
	}
		

}
