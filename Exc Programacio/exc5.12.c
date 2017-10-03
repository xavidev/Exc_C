#include <stdio.h>

int main ( void ) {
	
	int d,m,a;
	
	printf("Hola dime una fecha separada por espacios: Dia Mes Año\n");
	scanf("%d %d %d", &d,&m,&a);
	
	if (( d > 31 ) || ( m > 12 ) || ( a > 2016 ))
		printf("Fecha incorrecta");
		
	else if ( d == 31 ) {
		switch (m) {
			case 4: printf("Fecha incorrecta");break;
			case 6: printf("Fecha incorrecta");break;
			case 9: printf("Fecha incorrecta");break;
			case 11: printf("Fecha incorrecta");break;
		}
	}
	else if (( m == 2 ) && ((a % 4) == 0 ) && ( d != 29))
		printf("Fecha incorrecta");
	
	else
		printf("\tFecha correcta");
			
}
