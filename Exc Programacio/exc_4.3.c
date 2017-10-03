#include <stdio.h>

int main(void){

	float x1,x2,y1,y2,pm1,pm2;

	printf("Dime la primera coordenada:\n");
	scanf("%f,%f",&x1,&y1);
	printf("\nDime la segunda coordenada:\n");
	scanf("%f,%f",&x2,&y2);

	pm1 = (x1 + y1)/2;
	pm2 = (x2 + y2)/2;

	printf("La coordenada media és\t\n: %.2f,%.2f\n",pm1,pm2);
	
	if (pm1 < 0){
		if (pm2 < 0)
			printf("Esta en el cuadrante inferior izquierdo\n");
		else
			printf("Esta en el cuadrante superior izquierdo\n");
	}
	if (pm1 > 0) {
		if(pm2 > 0)
			printf("Esta en el cuadrante superior derecho\n");
		else
			printf("Esta en el cuadrante inferior derecho\n");
	}

	return 0;
}
