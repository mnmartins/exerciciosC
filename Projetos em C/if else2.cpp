#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	char meuCPF[50];
	int auxiliar;
	printf("Entre com o CPF\n");
	gets(meuCPF);
	
	auxiliar = strlen(meuCPF);
	if(auxiliar == 11)
	printf("Esse CPF tem 11 digitos\n");
	else
	printf("Esse NAO e um CPF valido\n");

	system("pause");
	return 0;
}
