#include <stdio.h>

int main(void) {
		
		long resultado = 0, resultado1;
		int n, i;
		
		printf("Dime un número para calcular su factorial\n");
		scanf("%d", &n);
		
		while ((n <= 0) && (n >= 20)) {
			printf("Dime otro número. Recuerda que tiene que ser mayor que 0 y mas pqueño que 20\n");
			scanf("%d", &n);
		}
	
		for (i=1;i<=n;i++){
			resultado1 = n * (n -i);
			printf("%d * (%d - %d) = %li\n-------------------------------\n", n, n, i, resultado1);
			resultado = resultado + resultado1;
			}
			
			printf("\tLa suma del factorial es %li", resultado);
			
	
	


}
