//
//  main.c
//  matriu85
//
//  Created by Xavi Toledano on 22/1/17.
//  Copyright © 2017 Xavi Toledano. All rights reserved.
//

#include <stdio.h>
#define FILAS 5
#define COLUMNAS 5

int main(int argc, const char * argv[]) {
    //Crea un programa llamado ex_8_5, que convierte una matriz “casi nula” en representación
    //normal a la nueva representación más compacta.;
    
    int nula[FILAS][COLUMNAS] =
        {{0,0,3,0,0},
            {0,0,0,0,0},
            {0,6,1,0,0},
            {0,0,0,0,0},
            {0,0,0,0,1}};
    
    int i,j,k,l=0,chivato=0,compacta[FILAS][3];
    
    for (i=0;i<FILAS;i++){
        for(j=0;j<COLUMNAS;j++){
            if(nula[i][j] != 0){
                chivato++;
                for(k=0;k<COLUMNAS;k++){
                    compacta[l][k] = i+1;
                    k++;
                    compacta[l][k] = j+1;
                    k++;
                    compacta[l][k] = nula[i][j];
                }
                l++;
            }
        }
    }
    
    printf("La matriz nula:\n");
    
    for(i=0;i<FILAS;i++){
        printf("[\t");
        for(j=0;j<COLUMNAS;j++){
            printf("%d\t",nula[i][j]);
        }
        printf("]\n");
    }
    
    printf("La matriz compacta:\n");
    
    for(i=0;i<chivato;i++){
        printf("[\t");
        for(j=0;j<3;j++){
            printf("%d\t",compacta[i][j]);
        }
        printf("]\n");
    }
    
    
    
    return 0;
}
