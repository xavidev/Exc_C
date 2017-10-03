#include <stdio.h>

int main(void) {
	
	int a, b, c, r;
	
	printf("Dame tres valores enteros: ");
	scanf("%d %d %d", &a, &b, &c);
	
	r = (a < b) ? ((a < c) ? a : c) : ((b < c) ? b : c);
	
	printf("Resultado: %d\n" ,r);
	
	return 0;
}
