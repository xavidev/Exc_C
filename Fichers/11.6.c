/* Ejercicio 11.6 */

#include <stdio.h>
#include <string.h>

/*
    fseek(fichero,desplazamiento_en_bytes, SEEK_SET | SEEK_CUR | SEEK_CUR);

    SEEK_SET --> Desde el inicio
    SEEK_CUR --> Posición relativa desde donde estoy
    SEEK_END --> Desde el final

    fseek(f,0,SEEK_SET) = rewind(f) --> Para ir al inicio del fichero
    fseek(f,0,SEEK_END) --> Para ir al final del fichero
    fseek(f,-sizeof(variable),SEEK_END) --> Iriamos N bytes para atras

    Modificar registro:
        * Lo leemos
        * Retrocedemos uno para atras --> fseek(f,-sizeof(variable_a_modificar),SEEK_CUR);
        * Lo sobreescribo

    Ejemplo de busqueda:

        while(!feof(f) && (encontrado == 0)){
            fread(&alumno,sizeof(alumno),1,f);
            if(strcmp(dni,alumno.dni) == 0){
                encontrado = 1;
            }
        }

*/

struct t_movie {
	char title[100];
	char gen[50];
	int minutes;
	float val;
};

int comprobar_borrado (FILE *f){
	struct t_movie peli;
	fseek(f,0,SEEK_SET);
	while(fread(&peli,sizeof(peli),1,f) > 0){
        if (strcmp(peli.title,"*") == 0) return 1;
    }

   	return 0;
}

int comprobar(FILE *f,char titulo[]){
    struct t_movie peli;
    fseek(f,0,SEEK_SET);
    while(fread(&peli,sizeof(peli),1,f) > 0){
        if (strcmp(peli.title,titulo) == 0) return 1;
    }
    return 0;
}

struct t_movie pedir_datos(struct t_movie peli){
		
		
        printf("Diguem la temàtica de la pel·lícula: \n");
        gets(peli.gen);
        printf("Diguem la duració de la pel·licula: \n");
        scanf("%d",&peli.minutes);
        printf("Diguem la valoració de la película: \n");
        scanf("%f",&peli.val);
        return peli;
}

void afegir(FILE *f){
    struct t_movie peli;
    char titulo[100];
    printf("Diguem el titol de la pel·lícula: \n");
    getchar();
    gets(titulo);
    strcpy(peli.title,titulo);
    if (comprobar_borrado(f) == 1 || comprobar(f,titulo) == 0){ // ENCUENTRA UN TITULO BORRADO O NO HAY UN TITULO IGUAL
    	peli = pedir_datos(peli);
    	fwrite(&peli,sizeof(peli),1,f);
        printf("Pel·lícula añadida correctamente\n");
    }
   else{
        printf("El titol d'aquesta pel·lícula ja existeix a la llista\n");
        }
   
}

void listar(FILE *f){
    struct t_movie peli;
    while(fread(&peli,sizeof(peli),1,f) > 0){
        if(strcmp(peli.title,"*")!=0){
            printf("\n\nTitol: %s\nTemàtica: %s\nDuració: %d\nValoració: %f\n",peli.title,peli.gen,peli.minutes,peli.val);
            printf("--------------------------------------------------------------\n");
        }
    } 
}



void borrar(FILE *f){
    struct t_movie peli;
    char titulo[100];
    printf("Digam quina pel·lícula vols borrar\n");
    getchar();
    gets(titulo);
    if(comprobar(f,titulo) == 1){
            strcpy(titulo,"*");
            fseek(f,-sizeof(peli),SEEK_CUR);
            fwrite(&titulo,sizeof(titulo),1,f);
            printf("Pel·lícula esborrada correctament\n");
            fseek(f,0,SEEK_SET);
            listar(f);
    }
}


void modificar(FILE *f){
    struct t_movie peli;
    char titulo[100],titulo_aux[100];
    printf("Digam quina pel·lícula vols modificar\n");
    getchar();
    gets(titulo);
    if(comprobar(f,titulo) == 1){
   		printf("Pel·lícula trobada.\n");
        printf("Diguem el títol de la pel·lícula\n");
        gets(titulo_aux);
        fseek(f,0,SEEK_SET);
        if(comprobar(f,titulo_aux) == 1) printf("Ja tens una pel·lícula amb aquest títol\n");
        else{

        	fseek(f,0,SEEK_SET);
        	if(comprobar(f,titulo) == 1){
        		fseek(f,-sizeof(peli),SEEK_CUR);
        		strcpy(peli.title,titulo_aux);
        		peli = pedir_datos(peli);
        		fwrite(&peli,sizeof(peli),1,f);
        		printf("Pel·lícula modificada correctament\n");

        	}
        }
    }else printf("No hi ha cap pel·lícula amb aquest títol\n");
}
/*
void ordenar(){



}

*/

int main(void){

FILE *fp;
int opt,chivato = 0;
struct t_movie p;
while (chivato == 0){

    printf("La videoteca\n------------------------------\n");
    printf("Escull una opció:\n1-Afegir una pel·lícula\n2-Llistar les pel·lícules\n3-Modificar una pel·lícula\n4-Borrar una pellícula\n5-Ordenar pel·lícules\n0-Sortir");
    scanf("%d",&opt);

    switch(opt){
        case 1: // Afegir una pel·lícula
        fp=fopen("videoteca.txt","a+b");
        if(fp == NULL){ 
            printf("No s'ha pogut obrir el fitxer\n");
            break;
        }
        afegir(fp);
        fclose(fp);
        break;

        case 2: // Llistar les pel·lícules
        fp=fopen("videoteca.txt","rb");
        if(fp == NULL){ 
            printf("No s'ha pogut obrir el fitxer\n");
            break;
        }
        listar(fp);
        fclose(fp);
        break;

        case 3: // Modificar una pel·lícula
        fp=fopen("videoteca.txt","r+b");
        if(fp == NULL){ 
            printf("No s'ha pogut obrir el fitxer\n");
            break;
        }
        modificar(fp);
        fclose(fp);
        break;

        case 4: // Borrar una pel·lícula
        fp=fopen("videoteca.txt","r+b");
        if(fp == NULL){ 
            printf("No s'ha pogut obrir el fitxer\n");
            break;
        }
        borrar(fp);
        fclose(fp);
        break;

        case 5: // Ordenar pel·lícules

        break;

        case 0: // Sortir del programa
        chivato = 1;
        break;

        default: // Opció incorrecte

        break;
    }
}
}   