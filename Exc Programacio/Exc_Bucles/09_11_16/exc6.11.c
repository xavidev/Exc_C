#include <stdio.h>

int main() {
	
	int n,i,ii;
	
	printf("Dime un número de lineas ");
	scanf("%d", &n);
	
	while (n == 0){
		printf("Has de dir-me un numero superior a 0");
		scanf("%d", &n);
	}
	
	
	for (i=0;i<n;i++){
		printf("\n");
		for (ii=0;ii<=i;ii++){
			printf("*");
			
		}
	}
	
	
}
