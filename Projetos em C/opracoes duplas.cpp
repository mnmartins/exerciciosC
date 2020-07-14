#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	int numero;
	printf("Digite um numero:\n");
	scanf("%i",&numero);
	if ((numero>100) && (numero<200))
	printf ("Valor esta entre 100 e 200.\n");
	else
	printf("Valor nao se encontra entre 100 e 200.\n");
	
	system ("pause");
	return 0;
}
