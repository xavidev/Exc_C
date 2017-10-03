#include <stdio.h>
#include <ctype.h>

void maj(char frase[]){

	int i;

	for (i=0;frase[i]!='\0';i++){

		frase[i]=toupper(frase[i]);
	}
}

int main(void){

FILE *fp;
FILE *fpm;

char text[100]; //ALMACENO LAS FRASES DEL FICHERO
char fichero[50];

printf("Dime el nombre del fichero\n");
scanf("%s", fichero);

// ABRIMOS LOS FICHEROS

fp = fopen(fichero, "r");
fpm = fopen("mayus", "w");

// COMPROBAMOS QUE SE PUEDEN ABRIR

if (fp == NULL || fpm == NULL){
	printf("Error abriendo fichero\n");
	return 1;
}

// TRABAJAMOS CON FICHEROS

while (!feof(fp)) {

	fgets(text, 100, fp);

	if (!feof(fp)) {

		maj(text);
		fprintf(fpm, "%s ", text);	
	}
}

/*
while (fgets(text,100,fp) != NULL){  [OTRA FROMA DE RESOLVER-LO]
	maj(text);
	fprintf(fpm, "%s", text);
}
*/

// CERRAMOS FICHEROS

fclose(fp);
fclose(fm);

printf("Se ha creado un nuevo fichero en mayusculas");



return 0;



}