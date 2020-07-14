#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	char meuCPF[50];
	int auxiliar;
	printf("Entre com o CPF\n");
	gets(meuCPF);
	
	auxiliar = strcmp(meuCPF,"12345678901");
	if(auxiliar == 0)
	printf("Esse e o meu CPF\n");
	else
	printf("Esse NAO e o meu CPF\n");

	system("pause");
	return 0;
}
