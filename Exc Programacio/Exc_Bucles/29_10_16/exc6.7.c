#include <stdio.h>

int main() {

	long nums = 0, num2, num1, contador, i;

	printf("Quantos elementos de la serie de Fibonacci quieres visualizar?\n");
	scanf("%ld", &contador);
	num1 = 1;
	num2 = 1;
	printf("%ld\t%ld\t", num1, num2);
	for (i = 0; i < contador - 2; i++) {
		nums = num1 + num2;
		printf("%ld\t", nums);
		num1 = num2;
		num2 = nums;
		
	}
}