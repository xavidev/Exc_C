#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* 6.5 
Crea un programa llamado  
ex_6_5
,  
en el que el usuario introduzca números enteros hasta
adivinar el número aleatorio entre 0 y 100 generado al azar por el ordenador. El programa debe
avisar si el número introducido por el usuario es más grande o más pequeño que el número
generado aleatoriamente.
La instrucción de C que te permite generar un número aleatorio entre 0 i 
n
-1, ambos incluidos,
es    
rand()%n
    , y la instrucción de C que nos permite que los números aleatorios sean
diferentes en cada nueva ejecución del programa es     
srand(time(NULL))
     o bien
srand(getpid()) */

int main (void) {
	srand(time(NULL));
	int num, numal = rand() % 101;
	printf("Hola dime un número del 0 al 100: ");
	scanf("%d",&num);
	while ( num != numal ){
		if ( num > numal ){
			printf("Tiene que ser mas pequeño ");
			scanf("%d", &num);
		}
		else {
			printf("El numero tiene que ser mayor ");
			scanf("%d", &num);
		}
	}
	printf("----------------------------------\n");
	printf("|Muy bien! Tienes mucha suerte!|\n");
	printf("----------------------------------");
	
	
	
		
}
