#include <stdio.h>

int main(void){

	int si,d,rd,h,rh,m,s;

	printf("Dime el valor en segundos ");
	scanf("%d",&si);

	d = si / 86400;
	rd = si % 86400;
	h = rd / 3600;
	rh = rd % 3600;
	m = rh / 60;
	s = rh % 60;

	//Tambien se puede hacer sin usar 2 variables ya que nunca la modificamos.

	printf("\nLa conversió es la seguent: %d Dies, %d Hores, %d Minuts, %d Segons\n\n",d,h,m,s);


}	
