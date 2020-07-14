#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main (){
	char nome[30];
	float precoC, precoV;
	printf("Digite o nome do produto\n");
	scanf ("%s",&nome);
	printf("Digite o preço de custo e o preço de venda do produto\n");
	scanf ("%f%f",&precoC,&precoV);
	
	
	system("pause");
	return 0;
}
