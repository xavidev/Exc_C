#include <stdio.h>
#include <string.h>
#include <ctype.h>
#define MAX 20

typedef struct
{
    char nomp[30];
    float preup;
    int cantp;
    float totalp;
}t_producte;

typedef struct
{
    t_producte producte[MAX];
    int numitem;
}t_llista;

int main(void){

	t_llista llista;
	t_llista producte1;
	t_llista producte2;
	llista.numitem = -1;
	int opt,i,j,chivato = 0,cantidadp1,cantidadp2;
	float total,preciop1,preciop2,totalp1,totalp2;
	char borrado[50],producto1[50],producto2[50];


	do{
		printf("Tria una ocpió del menu:\n\t1- Afegir un producte\n\t2- Treure un producte\n\t3- Llista dels productes\n\t4- Ordenar la llista pels diners gastats a cada producte\n\t0- Sortir del programa\n");
		scanf("%d",&opt);
		switch(opt){

            case 0: // Finalizar programa
            printf("Programa finalizado");
            break;

            case 1: // Afegir productes a la llista
            	if (llista.numitem >= MAX-1) {
            		printf("No caben mas productos en la lista\n");
            		break;
            	}
            	chivato = 0;
            	llista.numitem++;
            	printf("Donem el nom del producte\n");
            	getchar();
            	fgets(llista.producte[llista.numitem].nomp,30,stdin);
            	if (llista.numitem > 0){ // La primera vez no entrara nunca.
            		for(i=0;i<llista.numitem;i++){
            			if(strcmp(llista.producte[llista.numitem].nomp,llista.producte[i].nomp) == 0){
            				printf("Aquest producte ja existeix a la teva llista.\nEl vols modificar? 1)Sí 2)No\n");
            				scanf("%d",&opt);
            				switch(opt){
            					case 1:
            						total = total - llista.producte[i].totalp;
            						printf("Introdueix el nom del producte\n");
            						getchar();
            						fgets(llista.producte[i].nomp,30,stdin);
            						printf("Introdueix el preu del producte\n");
            						scanf("%f",&(llista.producte[i].preup));
            						printf("Introdueix la quantitat a comprar\n");
            						scanf("%d",&(llista.producte[i].cantp));
            						llista.producte[i].totalp = llista.producte[i].preup * (llista.producte[i].cantp)*1.0;
            						total = total + llista.producte[i].totalp;
            						break;
            					case 2:
            						break;
            					default:
            						break;
            				}
            				llista.numitem--;
            				chivato = 1;
            			}
            		}
            	}
            	if (chivato == 0){
            		printf("Introdueix el preu del producte\n");
            		scanf("%f",&(llista.producte[llista.numitem].preup));
            		printf("Introdueix la quantitat a comprar\n");
            		scanf("%d",&(llista.producte[llista.numitem].cantp));
            		llista.producte[llista.numitem].totalp = llista.producte[llista.numitem].preup * (llista.producte[llista.numitem].cantp)*1.0;
            		total = total + llista.producte[llista.numitem].totalp;
            	}break;

            case 3: // Listar los productos

            	if (llista.numitem > -1){ // Comprobar si hay productos en la lista
                    for(i=0;i<=llista.numitem;i++){
                        printf("Producto %d\n",i+1);
                        for (j=0;j<11;j++){
                            printf("--");
                        }
                        printf("\n\tNom: %s",llista.producte[i].nomp);
                        printf("\tPrecio: %.2f\n",llista.producte[i].preup);
                        printf("\tCantidad: %d\n",llista.producte[i].cantp);
                        printf("\tPrecio total: %.2f\n\n\n",llista.producte[i].totalp);
                    }
                    for (j=0;j<11;j++){
                        printf("--");
                    }
                    printf("\tTotal a pagar: %.2f\n",total);
                }else
                    printf("No hay productos en la lista\n"); 
             	break;

            case 2: // Borrar producto de la lista

            	if (llista.numitem < 0){
            		printf("No hay productos en la lista\n");
            		break; 
             	}
             	else{
             		printf("Donem el nom del producte a borrar\n");
             		getchar();
             		fgets(borrado,50,stdin);
             		for(i=0;i<=llista.numitem;i++){
             			if(strcmp(borrado,llista.producte[i].nomp) == 0){
             				if (i == llista.numitem){
             					total = total - llista.producte[i].totalp;
             					printf("Producto borrat satisfactoriament\n");
             					llista.numitem--;
             				}
             				else{
             					total = total - llista.producte[i].totalp;
                                for (i=i;i<llista.numitem;i++){
                                    llista.producte[i] = llista.producte[i+1];
                                    llista.producte[i].totalp = llista.producte[i].preup * (llista.producte[i].cantp)*1.0;
                                    
             					}
             					llista.numitem--;
             					printf("Producte esborrat satisfactoriament\n");
             				}
             			}else if (i == llista.numitem)
             				printf("No hay productos con este nombre\n");

        			}
        		} // Cierra else
        		break;

        	case 4: // Ordenar productos

        		if (llista.numitem <= 0)
        			printf("No hi han productes per ordenar a la llista\n");
        		else{
        			for (i=0;i<=llista.numitem;i++){
        				for (j=0;j<llista.numitem;j++){
        					if(llista.producte[j].totalp > llista.producte[j+1].totalp){ 
        						producte1.producte[j] = llista.producte[j];
        						producte2.producte[j] = llista.producte[j+1];
        						llista.producte[j] = producte2.producte[j];
        						llista.producte[j+1] = producte1.producte[j];
                            }
        				}
        			}
        			printf("Productes ordenats\n");
        		} /// Cierra else
       } /// Cierra switch		

    }while(opt != 0);



}