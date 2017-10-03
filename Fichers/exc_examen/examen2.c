#include <stdio.h>
#include <string.h>

int main(void){

	FILE * fp;

	char nomEquip[100],nomEquipFitxer[100];
	int trobat = 0;

	fp = fopen("lliga2007.txt","r");

	if (fp == NULL){

		printf("No s'ha pogut obrir el fitxer\n");

	}else {

		printf("Diguem el nom del equip del que vols saber els gols.\n");
		gets(nomEquip);

		while(!feof(fp)){

			fscanf(fp,"%s",nomEquipFitxer);
			if(strcmp(nomEquip,nomEquipFitxer) == 0){
				fscanf(fp,"%s",nomEquipFitxer);
				printf("Aquest equip a marcat %s gols\n",nomEquipFitxer);
				trobat = 1;
			}else if (feof(fp) && trobat == 0){

				printf("Aquest equip no es troba dins el fitxer\n");
			}
		}
		fclose(fp);
	}

	
	return 0;
}
