#include <stdio.h>
#include <math.h>

int main(void){
	
	float a, b, c, x, d;
	
	printf("Dame los valores para a, b y c\n");
	scanf("%f %f %f", &a, &b, &c);
	d = 0;
	if (a == 0){
		d = 1;
		x = -c / b;
		printf("El resultado de la equacion es: %f\n", x);
		
	}
	if (((b * b) - (4 * a * c)) < 0 ) {
		d = 1;
		printf("No tiene un resultado real\n");
	}
	else if (d ==0){
		x = -b + (sqrt(b*b -4 * a * c)) / 2 * a;
		printf("El resultado es x1 = %f\n",x);
		x = -b - (sqrt(b*b -4 * a * c)) / 2 * a;
		printf("El resultado es x2 = %f\n", x);
	}
		
	
}

