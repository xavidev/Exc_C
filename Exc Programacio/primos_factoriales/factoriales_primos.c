#include <stdio.h>

// Comprobar el el número primo factorial mas grande de un número: En este caso: 600851475143

long int comprobar_primario (long int n)
{
	long  int i=2;

	if (n - 1 == i) // Solo para el caso de 2
	{
		return n;
	}
	
	for (i = n-1; i > 1; i--)
	{
		if (n % i == 0)
		{
			return comprobar_primario(n-1);
		}
	}

	return n;
}

int main()
{
	long  int n=600851475143, n2=600851475143; // n i n2 és el número del problema. Se podria preguntar por teclado.
	long  int i=2; // Contador
	int chivato=0;

	n=comprobar_primario(n);

	while (chivato == 0)
	{
		if ((n2 % n) == 0)
		{
			printf("El primer factorial primario de %ld és: %ld\n", n2, n);
			chivato = 1;
		}
		else
			n=comprobar_primario(n-1);
	}	
	


}


