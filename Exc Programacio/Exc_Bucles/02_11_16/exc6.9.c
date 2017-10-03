#include <stdio.h>
#include <math.h>

int main () {
	
int i,count;
float va,ve,ne,re,nf,x;

	printf("Dame el número para calcular su seno\n");
	scanf("%f" ,&x);
	printf("Ahora dame el valor de error\n");
	scanf("%f", &ve);
	ne = 3;
	re = 0;
	count = 1;
		do{
		for (i=ne;i>1;i--){
			re=re+ne*(i-1);
			}
		nf = re;
		if (count == 1){
			va = va + (x - ((pow(x,ne))/nf));
			ne += 2;
			count -= 1;
		}
		if (count == 0){
			va = va + (x + ((pow(x,ne))/nf));
			ne += 2;
			count += 1;
		}
		}
		while (va>ve);
		
	printf("El resultat és: %.2f", va);

}
