#include <stdio.h>

int main(void) {

	float suma, i, n ,d;	
	
	printf("Dime el dividendo\n");
	scanf("%f", &d),
	printf("Dime el divisor\n");
	scanf("%f", &i);
	
	n = 1;
	
	do {
		suma = d/(n*n);
		printf("\n\t%0.f/%0.f = %f\n------------------------\n", d, n * n, suma);
		n ++;
	}
	while ( n <= i );

return 0;

}
