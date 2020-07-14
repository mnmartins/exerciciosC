#include <stdlib.h>
#include <stdio.h>

int main () {
	int *p, x;
	
	x = 15;
	p = &x;
	
	printf("Conteudo de x = %d\n",x);
	printf("Endereco de x = %d\n",&x);
	printf("Valor que esta no endereco armazenado em p = %d",*p);
	//*p aponta para o endereço de x armazenado em p onde x tem o valor armazenado = 15.
	return 0;
}
