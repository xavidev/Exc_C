#include <stdio.h>

int main (void) {

/* 6.4 
Amplia el ejercicio 4.3 para que encuentre el centro de gravedad (el punto medio) de varios
puntos del espacio bidimensional que el ordenador pedirá por teclado hasta que el usuario
introduzca el punto origen de coordenadas (0,0). Para ello deberás acumular el valor de las
coordenadas y al mismo tiempo contar el número de valores introducidos por el usuario. */

	float x,y,mx = 0,my = 0,contador = 0;
	int enter = 1;

	printf("Hola dime la primera coordenada: ");
	scanf("%f,%f",&x,&y);
	//Condición para comprovar si la coordenada és 0,0
	if ( x == 0 ){
		if (y == 0)
			enter = 0;
	}
	while (enter == 1) {
		mx = mx + x;
		my = my + y;
		contador ++;
		printf("Dime otra coordenada: ");
		scanf("%f,%f",&x,&y);
		if ( x == 0 ){
			if (y == 0)
				enter = 0;
	}
	}
	
	if ( contador == 0 )
		printf("Has finalizado sin calcular coordenadas");
	else {
		x = mx / contador;
		y = my / contador;
		printf("La coordenada media de todas las coordenadas és %.2f,%.2f",x,y);
}
}

