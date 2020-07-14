#include <stdlib.h>
#include <stdio.h>

int main()
{
	char nome[50];
	int idade;
	printf("Digite seu nome:\n");
	scanf("%s",nome);
	printf("Nome registrado: %s\n",&nome);	
	system("pause");
	
	printf("Digite o valor de sua idade:\n");
	scanf("%d",&idade);
	printf("Sua idade de %d anos foi armazenada.\n",idade);
	system("pause");
	return 0;
}
