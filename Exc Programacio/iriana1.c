#include <stdio.h>

int main ( void ) {
	
	float sueldo,ventas;
	float sueldob = 600;
	
	printf("Dime la cantidad de ventas del vendedor\n");
	scanf("%f", &ventas);
	
	if ( ventas > 1000){
		sueldo = sueldob * 0.30;
	}
	else if ( ventas < 500 ){ 
		sueldo = sueldob * 0.10;
	}
	else {
		sueldo = sueldob * 0.20;
	
		
	printf("El sou a pagar al venedor és: %f\n", sueldo);
	
	
}
