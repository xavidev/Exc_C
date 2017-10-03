#include <stdio.h>
		
int main(void){

int pass = 123456;
int passu;

printf("Dime la contraseña\n");
scanf("%d",&passu);

if (passu == pass){
	printf("Contraseña correcta, puedes entrar\n");
}
else{
	printf("La contraseña és incorrecta\n");
	printf("Torna a posar la contraseña\n");
	scanf("%d",&passu);
	if (passu == pass){
		printf("Contraseña correcta, puedes entrar\n");
	}	
	else{
		printf("Ho sento, no saps la contraseña\n");
	}
}
}
