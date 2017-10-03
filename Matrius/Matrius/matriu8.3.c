#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define num_ciudades 6
/* Crea un programa llamado ex_8_3, que permita calcular:
- La distancia entre dos poblaciones, el nombre de las cuales será introducido por el usuario.
- Las dos ciudades más alejadas entre sí y la distancia que las separa.
- La distancia total recorrida en el itinerario circular que pasa por todas las ciudades en el
siguiente orden: primera, segunda, tercera, ..., última y primera de nuevo. */



int main() {

  int ciudades[num_ciudades][num_ciudades] =
    {{0, 100, 156,  98, 296, 409},
     {0,   0, 256, 198, 396, 509},
     {0,   0,   0,  91, 140, 319},
     {0,   0,   0,   0, 231, 311},
     {0,   0,   0,   0,   0, 181},
     {0,   0,   0,   0,   0,   0}};

    int loc1,loc2,distancia[num_ciudades][num_ciudades],i,j,maximo;

    char ciudad1[10],ciudad2[10];
    printf("Dime el nombre de dos ciudades y te dare la distáncia entre ellas. Las ciudades son:Barcelona, Gerona, Llérida, Tarragona, Zaragoza, Teruel\n");

// Pedimos los nombres de la primera y segunda ciudad
    do{
        printf("Introduce el nombre de la primera ciudad:");
        gets(ciudad1);
    }while((strcmp(ciudad1,"Barcelona") != 0) && (strcmp(ciudad1,"Gerona") != 0) && (strcmp(ciudad1,"Lérida") != 0) && (strcmp(ciudad1,"Tarragona") != 0) && (strcmp(ciudad1,"Zaragoza") != 0) && (strcmp(ciudad1,"Teruel") != 0));

    do{
        printf("\nIntroduce el nombre de la segunda ciudad: ");
        gets(ciudad2);

    }while((strcmp(ciudad2,"Barcelona") != 0) && (strcmp(ciudad2,"Gerona") != 0) && (strcmp(ciudad2,"Lérida") != 0) && (strcmp(ciudad2,"Tarragona") != 0) && (strcmp(ciudad2,"Zaragoza") != 0) && (strcmp(ciudad2,"Teruel") != 0));

// Definimos la localización en la matriz para cada ciudad.

    if (strcmp(ciudad1,"Barcelona") == 0){
        loc1 = 0;
    }
    else if (strcmp(ciudad1,"Gerona") == 0) {
        loc1 = 1;
    }
    else if (strcmp(ciudad1,"Lérida") == 0){
        loc1 = 2;
    }

    else if (strcmp(ciudad1,"Tarragona") == 0){
        loc1 = 3;
    }

    else if (strcmp(ciudad1,"Zaragoza") == 0){
        loc1 = 4;
    }

    else if (strcmp(ciudad1,"Teruel") == 0){
        loc1 = 5;
    }

    if (strcmp(ciudad2,"Barcelona") == 0){
        loc2 = 0;
    }
    else if (strcmp(ciudad2,"Gerona") == 0) {
        loc2 = 1;
    }
    else if (strcmp(ciudad2,"Lérida") == 0){
        loc2 = 2;
    }

    else if (strcmp(ciudad2,"Tarragona") == 0){
        loc2 = 3;
    }

    else if (strcmp(ciudad2,"Zaragoza") == 0){
        loc2 = 4;
    }

    else if (strcmp(ciudad2,"Teruel") == 0){
        loc2 = 5;
    }

    if (loc1 > loc2)
    	printf("La distancia entre estas dos ciudades és de %d KM\n",ciudades[loc2][loc1]);
    else
    	printf("La distancia entre estas dos ciudades és de %d KM\n",ciudades[loc1][loc2]);

    // Comparamos los elementos por columnas desplazandonos por fila. La columna nos dirá
    // la ciudad destino y la fila la ciudad origen.


    maximo = ciudades[0][0]; // Damos un valor al maximo 

    for (i=1;i<6;i++){ //Recorremos las columnas
    	for(j=0;j<6;j++){ // Recorremos las filas
    		if (ciudades[j][i] > maximo){
    			maximo = ciudades[j][i];
    			loc1=j;
    			loc2=i;
    		}

    	} 

    }

    if (loc1 == 0)
    	strcpy(ciudad1,"Barcelona");
    else if (loc1 == 1) // Ciudad origen
    	strcpy(ciudad1,"Gerona");
    else if (loc1 == 2)
    	strcpy(ciudad1,"Llérida");
    else if (loc1 == 3)
    	strcpy(ciudad1,"Tarragona");
    else if (loc1 == 4)
    	strcpy(ciudad1,"Zaragoza");
    else
    	strcpy(ciudad1,"Teruel");

    if (loc2 == 0) // Ciudad destino
    	strcpy(ciudad2,"Barcelona");
    else if (loc2 == 1)
    	strcpy(ciudad2,"Gerona");
    else if (loc2 == 2)
    	strcpy(ciudad2,"Llérida");
    else if (loc2 == 3)
    	strcpy(ciudad2,"Tarragona");
    else if (loc2 == 4)
    	strcpy(ciudad2,"Zaragoza");
    else
    	strcpy(ciudad2,"Teruel");

    printf("La distancia más larga a recorrer son %d KM entre %s y %s\n", maximo,ciudad1,ciudad2);

    maximo = 0;
    j=1; // Columnas

    for (i=0;i<5;i++){ // Filas
  			maximo = maximo + ciudades[i][j];
  			j++;
    }

    maximo = maximo + ciudades[0][num_ciudades-1];

    printf("La distancia total del itinerario circular es: %d KM ",maximo);



}


