#include <stdio.h>

int main(){
	char nome[40];
	
	printf("Escreva seu nome: ");
	gets(nome);
	
	printf("\nSaudacoes %s!\n", nome);

	return 0;
}