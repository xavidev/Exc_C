#include <stdio.h>
#define N2 600851475143

// Comprobar el el número primo factorial mas grande de un número: En este caso: 600851475143.

int main()
{
	long  int n=N2; // n i n2 és el número del problema. Se podria preguntar por teclado.
	long int np;
	long  int i=2; // Contador
	int noprimo=1;
	int chivato=0;

	while (chivato == 0)
	{
		while (noprimo == 1)
		{
			if (n - 1 == i)
			{
				noprimo = 0;
			}
			for(i = n-1; (i > 1) && (noprimo = 1); i--)
			{
				if(n % i == 0)
				{
					n-=1;
				}
			}
			if (i == 1){
				noprimo = 0;
			}
		}

		if ((N2 % n == 0) && (noprimo == 0))
		{
			chivato = 1;
			printf("El primer número factorial de %ld és: %ld\n", N2,n);
		}
		else
			n-=1;
			noprimo = 1;
	}

}


