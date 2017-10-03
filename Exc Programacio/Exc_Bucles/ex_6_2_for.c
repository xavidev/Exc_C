#include <stdio.h>

int main(void) {

	float suma, i, n, d;
	
	printf("Dime el dividendo ");
	scanf("%f", &d);
	printf("Dime el divisor ");
	scanf("%f", &i);
	
	for (n=1;n<=i;n++){
		suma = d/(n*n);
		printf("\n\t%0.f/%0.f = %f\n------------------------\n", d, n * n, suma);
	}
	
	return 0;
}
