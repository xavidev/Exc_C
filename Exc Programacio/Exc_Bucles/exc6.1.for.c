#include <stdio.h>

int main(void) {
	
	float x, media, suma;
	int num;
	
	printf("Cálculo de la media de una serie de datos\n");
	printf("-----------------------------------------\n");
	
	/* Inicializamos las variables */
	
	suma = 0;
	num = 0;
	
	/* Leemos datos y los procesamos hasta que introducen 0 */
	
	for (num=1;x != 0;num ++){
		printf("Introduce un valor ( 0 para acabar ) : ");
		scanf ("%f", &x);
		suma += x;
	}
	
	/* Como hemos contado el cero como valor, restamos 1 al
	 * número de términos a la hora de calcular la media. */
	 
	 media = suma / (num -2);
	 
	 /* Damos los resultados */
	 
	 printf("La media de los elementos es %8.2f\n", media);
	 
	 return 0;
}
	

