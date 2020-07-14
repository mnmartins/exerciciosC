#include<stdlib.h>
#include<stdio.h>
/*Atividade: Para formar um triâgulo com a condição "cada lado deve ser menor que a soma dos outros dois", ou seja, a < b+c; b < a+c e c < a+b*/

int main() {
	int a, b, c;
	printf ("Entre com os 3 lados do triangulo:\n");
	scanf ("%d%d%d", &a, &b, &c);
	if (a<b+c && b<a+c && c<a+b){
		printf ("Pode formar um triangulo.\n");
	}
		else {
			printf ("Nao pode formar um triangulo.\n");
		}
	return 0;
}
