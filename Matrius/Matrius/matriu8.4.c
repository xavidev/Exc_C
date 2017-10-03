#include <stdio.h>
#include <string.h>
#define FILAS 6
#define COLUMNAS 13

int main(void){

	int alumno[FILAS][COLUMNAS] =
	{{20,10,0,13,4,11,14,3,5,7,9,3,0},
	 {3,2,0,7,11,2,3,0,1,13,2,10.0},
	 {4,16,3,5,11,3,7,9,8,11,10,3,0},
	 {9,10,23,4,1,2,0,3,0,12,8,2,0},
	 {0,3,6,0,0,10,2,9,0,13,5,7,0},
	 {0,0,0,0,0,0,0,0,0,0,0,0}};

	 int maximo=0,menu,chivato,i,j;
	 do{

	 	printf("Escoje una de estas opciones:\n\t 1- Consultar el total anual de horas de cada asignatura \n\t 2- Consultar el total mensual de horas \n\t 3- Consultar la asignatura con mas horas estudiadas \n\t 0- Salir\n");
	 	scanf("%d",&menu);

	 
		 switch(menu){
		 	case 1:
		 		 // TOTAL ANUAL HORAS DE CADA ASIGNATURA

				 for (i=0;i<FILAS-1;i++){
					 for (j=0;j<COLUMNAS-1;j++){
					 	alumno[i][COLUMNAS-1] = alumno[i][COLUMNAS-1] + alumno[i][j];
					 }
					 printf("Assignatura %d ------------ %d HORAS\n",i+1,alumno[i][COLUMNAS-1]);
				}

				printf("\n\n");
				break;
			case 2:
				// TOTAL MENSUAL DE HORAS

				for (j=0;j<COLUMNAS-1;j++){
					for(i=0;i<FILAS-1;i++){
						alumno[FILAS-1][j] = alumno[FILAS-1][j] + alumno[i][j];
					}
					printf("Mes %d ------------ %d HORAS\n",j+1,alumno[FILAS-1][j]);
				}

				printf("\n\n");
				break;
			case 3:

				// NOMBRE TOTAL HORAS ASSIGNATURA MAS ESTUDIADA
				for (i=0;i<FILAS-1;i++){
					 for (j=0;j<COLUMNAS-1;j++){
					 	alumno[i][COLUMNAS-1] = 0;
					 }
				}

				for (i=0;i<FILAS-1;i++){
					 for (j=0;j<COLUMNAS-1;j++){
					 	alumno[i][COLUMNAS-1] = alumno[i][COLUMNAS-1] + alumno[i][j];
					 }
				}

				for (i=0;i<FILAS;i++){
					if (alumno[i][COLUMNAS-1] > maximo){
						maximo = alumno[i][COLUMNAS-1];
						chivato = i;
					}
				}

				printf("La Assignatura %d és la mas estudiada con %d HORAS\n", chivato+1,maximo);
				break;

			default:
				printf("Se ha finalizado el programa\n");

		 }
	}while(menu != 0);
		
}