/* Implementa un programa que afageix al fitxer "multiples.dat"
els 10 següents múltiples de 5. Per això el programa ha de saber quin ha
sigut l'últim número escrit.
*/
#include <stdio.h>

void multiples (int num, FILE *f){

	int final = num;
	num = num + 5;


	while(fwrite(&num, sizeof(num), 1, f) > 0 && num < (final+50)) num = num +5;
}


int main(void){

	FILE *fp, *fp2;
	int lastnum;
	fp = fopen("multiples.dat","rb");
	fp2 = fopen("multiples.dat", "ab");

	if (fp == NULL || fp2 == NULL) printf("Error al abrir el archivo");

	while(fread(&lastnum, sizeof(lastnum), 1, fp) > 0);

	multiples(lastnum,fp2);

	fclose(fp);
	fclose(fp2);
}