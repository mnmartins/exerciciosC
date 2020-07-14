#include<stdlib.h>
#include<stdio.h>
/*> Leia 3 valores diferentes
> Informe qual é o maior número*/

int main() {
	int a, b, c;
	printf ("Informe 3 valores diferentes:\n");
	scanf ("%d%d%d",&a, &b, &c);
	if (a>b && a>c) {
		printf ("O maior valor e %d.\n", a);
	}
	else 
		if (b>a && b>c) {
			printf ("O maior valor e %d.\n", b);
		}
		else
			printf ("O maior valor e %d.\n", c);
			
	system ("pause");
	return 0;
}
