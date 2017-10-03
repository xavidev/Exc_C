#include <stdio.h>

int main() {

	int i;
	float res = 0, num, exp;

	printf("Diguem un número i a quin exponent el vols elevar");
	scanf("%f %f", &num, &exp);

	if(exp == 0)
		printf("El resultat és 1");
	else if(num==0)
		printf("El resultat és 0");
	else if(num>0){
		res=num;
		if(exp<0){
			for(i=-1;i>exp;i--)
					res=res * num;;
		res = 1.0/res;
		printf("El resultat és: %f", res);
		}

		else{
			for(i=1;i<exp;i++)
					res=res * num;
		printf("El resultat és %f", res);
		}

	}
	else{
		res=res*(1/num);
		printf("El resultat és %f:", res);
	}
}

	
		