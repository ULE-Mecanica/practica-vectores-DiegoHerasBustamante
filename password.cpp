
#include <stdio.h> 
#include <stdlib.h>
#include <time.h>

#define TAM 26
#define TAM_PASS 8

void inicializa(char letras[TAM]);

int main () {
	
	char abecedario[TAM], password[TAM_PASS+1];
	int num, i;

	srand(time(NULL));

	inicializa(abecedario);

	for(i=0;i<TAM_PASS;i++){
		
		num=rand()%TAM;
		password[i]=abecedario[num];
	}
	password[TAM_PASS]='\0';
	printf("La contraseña es %s", password);

return 0;

}

void inicializa(char letras[TAM]){
	
	int i,aux=97;
	
	for(i=0;i<TAM;i++){
	
		letras[i]=aux++;

	}
	
	return;
}


