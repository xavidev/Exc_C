#include <stdio.h>
#include <stdlib.h>

int main()
{
    int j,i,cont1=1,aux1,aux2,n,cont2; // aux1 y aux2 las usamos para intercambiar las matrizes.
    
    do{
        printf("Dime cuantas filas columnas quieres en la matriz magica (tiene que ser par)");
        scanf("%d",&n);
    }while(n % 2 != 0);
    
    int matriz[n][n],resultatf[n],resultatc[n];
    
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            matriz[i][j] = cont1++;
        }
    }
    
    printf("Cuadrado no magico:\n");
    
    for (i=0;i<n;i++){
        printf("[\t");
        for(j=0;j<n;j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("]\n");
    }
    
    cont1 = 0;
    cont2 = 1;
    
    for (i=0;i<n/2;i++){ // La i solo la utilizamos para el nº de iteraciones
        aux1 = matriz[cont1][cont1];
        aux2 = matriz[n-cont2][n-cont2];
        matriz[cont1][cont1] = aux2;
        matriz[n-cont2][n-cont2] = aux1;
        aux1 = matriz[cont1][n-cont2];
        aux2 = matriz[n-cont2][cont1];
        matriz[cont1][n-cont2] = aux2;
        matriz[n-cont2][cont1] = aux1;
        cont1++;
        cont2++;
    }
    
    for(i=0;i<n;i++){ // Recorremos por filas para el resultado de las filas
        resultatf[i] = 0;
        for (j=0;j<n;j++){
            resultatf[i] = resultatf[i] + matriz[i][j];
        }
    }
    
    for(j=0;j<n;j++){ // Recorremos por columnas para el resultado de las columnas
        resultatc[j] = 0;
        for(i=0;i<n;i++){
            resultatc[j] = resultatc[j] + matriz[i][j];
        }
    }
    
    printf("Cuadrado magico:\n");
    
    for (i=0;i<n;i++){
        printf("[\t");
        for(j=0;j<n;j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("]%d\n",resultatf[i]);
    }
    printf("\t");
    
    for (i=0;i<n;i++){
        printf("%d\t",resultatc[i]);
    }
    
    return 0;
}
