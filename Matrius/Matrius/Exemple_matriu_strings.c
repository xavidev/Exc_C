#include <stdio.h>
#include <string.h>

int main(void){

	char test[5][50];

	printf("Introduir frase\n");
	//getchar();
	gets(test[0]);

	printf("Introduir frase\n");
	//getchar();
	gets(test[1]);

	printf("%s\n",test[0]);
	printf("%s\n",test[1]);
}