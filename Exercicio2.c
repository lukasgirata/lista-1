#include <stdio.h>

char nome[40], endereco[50];
float cep, telefone;

int main(){
	printf("Nome: ");
	gets(nome);
	
	printf("O nome do cliente e: %s\n\n", nome);
	
	printf("Endereco: ");
	gets(endereco);
	
	printf("O endereco do cliente e: %s\n\n", endereco);
	
	printf("CEP: ");
	scanf("%f", &cep);
	
	printf("O CEP do cliente e: %f\n\n", cep);
	
	printf("Telefone: ");
	scanf("%f", &telefone);
	
	printf("O telefone do cliente e: %f", telefone);
	
	return 0;
}