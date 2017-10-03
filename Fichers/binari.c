#include <stdio.h>

int main(void) {

 FILE *f;

 char dni[10];
 float nota1, nota2;
 float media;
 int n;

 f = fopen("notas.txt", "wt");

 if (f == NULL) {
 printf("Error abriendo fichero\n");
 return 1;
 }

 /* Pedir el número de alumnos */
 do {
 printf("¿Cuántos alumnos tenemos? ");
 scanf("%d", &n);
 } while (n < 1);

 while (n > 0) {
 /* Pedir los datos de los alumnos */
 printf("\nIntroduce el DNI (ocho números y letra) del alumno : ");
 scanf("%s", dni);
 printf("Dame sus notas : ");
 scanf("%f %f", &nota1, &nota2);
 /* Imprimir la media */
 media = (nota1 + nota2) / 2;
 fprintf(f, "%s %f\n", dni, media);
 n--;
 }

 fclose(f);
 
 return 0;
}