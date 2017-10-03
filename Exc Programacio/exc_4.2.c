#include <stdio.h>

int main(void) {

	float n1,n2,n3,nm;

	printf("Dime la primera nota\t");
	scanf("%f",&n1);
	printf("Dime la segunda nota\t");
	scanf("%f",&n2);
	printf("Dime la tercera nota\t");
	scanf("%f",&n3);

	nm = (n1 + n2 + n3) / 3;

	printf("\nTu nota media és: %.2f",nm);


	return 0;	
}