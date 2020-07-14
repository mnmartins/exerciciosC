#include <stdlib.h>
#include <stdio.h>

int main () 
{
	char nome[20];
	float n1,n2,n3,n4,media;
	printf("Entre com o seu nome\n");
	scanf("%s",&nome);
	printf("Entre com as suas quatro notas\n");
	scanf("%f%f%f%f",&n1,&n2,&n3,&n4);
	media=(n1+n2+n3+n4)/4;
	printf("Media=%.1f\n",media);
	system("pause");
	return 0;
}
