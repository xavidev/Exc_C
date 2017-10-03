#include <stdio.h>
#include <math.h>

int main() {

float x, ve, fact, resultat = 0, resultatf; // ve = valor error, fact = factorial
int e, ei = 3, cont = 2; //e = exponent

	printf("Dame un número para calcular su seno\n");
	scanf("%f", &x);
	printf("Dame el valor de error\n");
	scanf("%f", &ve);

    resultatf = sin(x);

    e = ei;
	do {
		fact = ei;
		for (e=e-1;e>=1;e--){ //Calculamos el factorial
			fact = fact * e;
		}
		// serie de Taylor
		if (cont == 2){
            resultat = x - ((pow(x, e))/fact);
			ei = ei + 2;
			e = ei;
			cont = 1;
		}

		else if (cont == 0){
			resultat = resultat - ((pow(x, e))/fact);
			ei = ei + 2;
			e = ei;
			cont = 1;
		}
		else {
			resultat = resultat + ((pow(x, e))/fact);
			ei = ei + 2;
			e = ei;
			cont = 0;
		}

	}
	while ((resultatf - abs(resultat)) <= ve);
	resultat = abs(resultat);
	printf("El resultat és: %f\n", resultat);
}
