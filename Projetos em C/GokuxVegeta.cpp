#include<stdlib.h>
#include<stdio.h>
/*> Leia a distancia do Goku para o Vegeta
> Diga se ele acerta ou não o Vegeta
Alcance de golpe até 5000b Km*/

int main() {
	float distancia;
	printf ("Qual a distancia de Goku para Vegeta?\n");
	scanf ("%f",&distancia);
	if (distancia <= 5000) {
		printf ("Te peguei, trouxa!!!\n");
	}
	else {
		printf ("Te pego na proxima!\n");
	}
	return 0;
}
