#include <stdio.h>

int main(void){

float a, b, c;
float min, max;

printf("Introduce el primer valor ");
scanf("%f", &a);
min = a;
max = a;

printf("Introduce el segundo valor ");
scanf("%f", &b);

printf("Introduce el tercer valor ");
scanf("%f", &c);

if ((a > b) && (a > c)){
	max = a;
}
else if ((b>a) && (b>c)){
		max = b;
}
else{
	max = c;
}
if ((a<b) && (a<c)){
	min = a;
}
else if ((b < a) && (b < c)) {
		min = b;
	}
else{
	min = c;
}
if ((a == b ) && (b == c)) {
	printf("Todos los números son iguales");
}
printf("El numero minimo és %.2f y el maximo es %.2f\n",min,max);
}
