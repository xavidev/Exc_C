#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,casillas,i,j,k,c;
    
    do{
        printf("Dime el número de filas/columnas de la matriz. Tiene que ser impar mayor de 2 y menor de 11:\n");
        scanf("%d",&n);
    }while((n < 2) || (n > 11) || (n%2 == 0));
    
    
    int matriz[n][n],resultatf[n],resultatc[n],pos1=0,pos2=0;
    
    
    casillas = n*n;
    
    for (i=0;i<n;i++){ // Inicializamos la matriz con 0
        for (j=0;j<n;j++){
            matriz[i][j] = 0;
        }
    }
    
    matriz[0][(n-1)/2] = 1;
    
    j = (n-1)/2;
    k = 0;
    i = 1;
    pos1 = k;
    pos2 = j;
   
    for (c=1;c<casillas;casillas--){ // Contador para saber cuantas casillas quedan
        k--;
        j++;
        
        if (k >= 0 && j <= n-1){ // En cada tipo de caso comprobamos que no este llena
            if (matriz[k][j] != 0){
                i++;
                matriz[pos1+1][pos2] = i; // Al insertar datos en matriz siempre guardamos posicion
                k = pos1+1;
                j = pos2;
                pos1 = k;
                pos2 = j;
            }
            else{
                i++;
                matriz[k][j] = i; // Al insertar datos en matriz siempre guardamos posicion
                pos1 = k;
                pos2 = j;
            }
        }
        
        if (k < 0 && j > n-1){ // En cada tipo de caso comprobamos que no este llena
            if (matriz[n-1][0] != 0){
                i++;
                matriz[pos1+1][pos2] = i; // Al insertar datos en matriz siempre guardamos posicion
                k = pos1 +1;
                j = pos2;
                pos1 = k;
                pos2 = j;
            }else{
                i++;
                matriz[n-1][0] = i; // Al insertar datos en matriz siempre guardamos posicion
                k = n-1;
                j = 0;
                pos1 = k;
                pos2 = j;
            }
        }
        if (k < 0 && j <= n-1){ // En cada tipo de caso comprobamos que no este llena
            if (matriz[n-1][j] != 0){
                i++;
                matriz[pos1+1][pos2] = i; // Al insertar datos en matriz siempre guardamos posicion
                k = pos1 +1;
                j = pos2;
                pos1 = k;
                pos2 = j;
            }else{
                i++;
                matriz[n-1][j] = i; // Al insertar datos en matriz siempre guardamos posicion
                k = n -1;
                j = j;
                pos1 = k;
                pos2 = j;
            }
        }
        
        if (j > n-1 && k >= 0){ // En cada tipo de caso comprobamos que no este llena
            if (matriz[k][0] != 0){
                i++;
                matriz[pos1+1][pos2] = i; // Al insertar datos en matriz siempre guardamos posicion
                k = pos1 + 1;
                j = pos2;
                pos1 = k;
                pos2 = j;
            }else{
                i++;
                matriz[k][0] = i; // Al insertar datos en matriz siempre guardamos posicion
                k = k;
                j = 0;
                pos1 = k;
                pos2 = j;
            }
        }
         
    }
    
    for (i=0;i<n;i++){ // Sumamos el vector de las filas
        resultatf[i] = 0;
        for (j=0;j<n;j++){
            resultatf[i] = resultatf[i] + matriz[i][j];
        }
    }
    
    for (j=0;j<n;j++){ // Sumamos el vector de las columnas
        resultatc[j] = 0;
        for (i=0;i<n;i++){
            resultatc[j] = resultatc[j] + matriz[i][j];
        }
    }
    
    for (i=0;i<n;i++){
        for (j=0;j<n;j++){
            printf("%d\t",matriz[i][j]);
        }
        printf("%d\n",resultatf[i]);
        printf("\n");
    }
    for (i=0;i<n;i++){
        printf("%d\t",resultatf[i]);
    }
    printf("\n\n\nCuadrat màgic creat!!!\n");
}
