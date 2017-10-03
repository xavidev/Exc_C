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


void afegir(FILE *f){
    struct t_movie peli;
    printf("Diguem el titol de la pel·lícula: \n");
    getchar();
    gets(peli.title);
    if(comprobar(f,peli) == 0){
        printf("Diguem la temàtica de la pel·lícula: \n");
        gets(peli.gen);
        printf("Diguem la duració de la pel·licula: \n");
        scanf("%d",&peli.minutes);
        printf("Diguem la valoració de la película: \n");
        scanf("%f",&peli.val);
        fwrite(&peli,sizeof(peli),1,f);
        printf("Pel·lícula añadida correctamente\n");
    }else{
        printf("El titol d'aquesta pel·lícula ja existeix a la llista\n");
        fclose(f);
        return 0;
        }
    fclose(f);
}

void listar(FILE *f){
    struct t_movie peli;
    rewind(f);
    while(fread(&peli,sizeof(peli),1,f) > 0){
        if(strcmp(peli.title,"*")!=0){
            printf("\n\nTitol: %s\nTemàtica: %s\nDuració: %d\nValoració: %f\n",peli.title,peli.gen,peli.minutes,peli.val);
            printf("--------------------------------------------------------------\n");
        }
    }
    fclose(f);

}

int comprobar(FILE *f,struct t_movie p){
    struct t_movie peli;
    rewind(f);
    while(fread(&peli,sizeof(peli),1,f) > 0){
        if (strcmp(peli.title,p.title) == 0) return 1;
    }
    return 0;
}

void borrar(FILE *f){
    struct t_movie peli;
    struct t_movie p;
    rewind(f);
    printf("Digam quina pel·lícula vols borrar\n");
    getchar();
    gets(p.title);
    while(fread(&peli,sizeof(peli),1,f) > 0){
        if (strcmp(peli.title,p.title) == 0){
            strcpy(p.title,"*");
            fwrite(&p.title,sizeof(p.title),1,f);
        }

    }

    fclose(f);

    return 0;


}
/*

void modificar(){

}

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
        if(fp == NULL) printf("No s'ha pogut obrir el fitxer\n");
        afegir(fp);
        break;

        case 2: // Llistar les pel·lícules
        fp=fopen("videoteca.txt","a+b");
        if(fp == NULL) printf("No s'ha pogut obrir el fitxer\n");
        listar(fp);
        break;

        case 3: // Modificar una pel·lícula

        break;

        case 4: // Borrar una pel·lícula
        fp=fopen("videoteca.txt","a+b");
        if(fp == NULL) printf("No s'ha pogut obrir el fitxer\n");
        borrar(fp);
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
