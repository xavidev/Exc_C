#include <stdio.h>
#include <stdlib.h>
#define MAX 100

struct t_enters {
    int enters[MAX];
    int numinsert = 0;
};

int main()
{
    /*
    4. Defineix un registre que permeta representar un vector d’enters de talla màxima 100 i
    saber quants elements del vector s’utilitzen en cada moment. Definirem dos registres i li
    preguntarem a l’usuari els valors dels components dels vectors i de les seues respectives
    talles. El programa ens dirà si els dos vectors contenen els mateixos elements en el mateix ordre.
    */

    struct t_enters enters1,enters2;
    int i;

    for (i=0;i<MAX;i++){ // Omplim el primer vector d'enters
        enters1.numinsert++;
        printf("Enters utilitzats %d\n",enters1.numinsert -1);
        scanf("%d",&(enters1.enters[i]));
    }


    for (i=0;i<MAX;i++){ // Omplim el segon vector d'enters
        enters2.numinsert++;
        printf("Enters utilitzats %d\n",enters2.numinsert - 1);
        scanf("%d",&(enters1.enters[i]));
    }

    for (i=0;i<MAX;i++){
        if (enters1.enters[i] != enters2.enters[i]){
            i = MAX + 1;
            printf("Els vectos d'enters no són iguals\n")
        }
    }
    if (i = MAX +1){
        printf("Els vectors són iguals\n");
    }
}
