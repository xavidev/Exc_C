#include <stdio.h>

int main () {

		float a, b, resultado=0,sign=0;
		int i;
		
		printf("Dame 2 números separados por un espacio: ");
		scanf("%f %f", &a, &b);
		
		if ( (a<0) && (b<0) ) {
			a = a * (-1);
			b = b * (-1);
		}
		
		else if (a<0){
			a = a * (-1);
			sign = 1;
		}
		
		else if (b<0){
			b = b * (-1);
			sign = 1;
		}
		for (i =0;i<b;i++){
			resultado = resultado + a;
		}
		
		if (sign==1){
			printf("El resultado és: -%.2f", resultado);
		}
		else
		printf("El resultado és: %.2f", resultado);
}
