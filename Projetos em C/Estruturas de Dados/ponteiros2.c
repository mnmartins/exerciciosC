#include <stdio.h>
#include <stdlib.h>

int main ()
{
	int *p1, *p2, x, y, z;
	x = 10;
	p1 = &x;
	p2 = p1;
	
	
	printf("x: %d \n", x);   //conteudo de x
	printf("&x: %d \n", &x);  //endereco de x
	printf("p1: %d \n", p1);   //endereco de x
	printf("&p1: %d \n", &p1);   //endereco de p1
	printf("p2: %d \n", p2);   //endereco de x
	printf("&p2: %d \n", &p2);   //endereco de p2
	
	y = *p1;
	printf("y: %d \n", y);   //Valor que esta no endereco armazenado em p1
	
	z = *p2;
	printf("z: %d \n", z);   //Valor que esta no endereco armazenado em p2
	
	
	return 0;
}

