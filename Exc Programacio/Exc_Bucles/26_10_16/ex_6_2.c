#include <stdio.h>

int main (void) {
	
	float suma, n, i, d, sumat = 0;
	printf("Dime el dividendo\n");
	scanf ("%f", &d);
	printf("Dime el divisor\n");
	scanf("%f", &i); 
	n = 1;
	
	while ( n <= i ) {
		suma = d/(n*n);
		printf("\n\t%0.f/%0.f = %f\n------------------------\n", d, n * n, suma);
		n ++;
		sumat = sumat + suma;
}
	printf("La suma total és: %.2f", sumat);
return 0;

}
