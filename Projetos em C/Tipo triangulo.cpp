#include<stdlib.h>
#include<stdio.h>

int main() {
	int a, b, c;
	printf ("Entre com os lados do triangulo:\n");
	scanf ("%d%d%d", &a, &b, &c);
	if (a==b && b==c) {
		printf("Equilatero.\n");
	}	
	else {
		if (a==b || b==c || c==a) {
			printf ("Isoceles.\n");
		}
		else {
			printf ("Escaleno.\n");
		}
		
	}
	
	return 0;
}
