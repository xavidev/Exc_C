#include <stdio.h>

int main (void) {
	
	float suma, n, i, d;
	printf("Dime el dividendo\n");
	scanf ("%f", &d);
	printf("Dime el divisor\n");
	scanf("%f", &i); 
	n = 1;
	
	while ( n <= i ) {
		suma = d/(n*n);
		printf("\n\t%0.f/%0.f = %f\n------------------------\n", d, n * n, suma);
		n ++;
}

return 0;

}
