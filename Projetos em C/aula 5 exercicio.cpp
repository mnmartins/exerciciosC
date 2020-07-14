#include <stdlib.h>
#include <stdio.h>

int main(){
	int numero;
	printf("Entre com um numero inteiro:\n");
	scanf("%d",&numero);
	if (numero%3==0 && numero%7==0)
		printf("E divisivel por 3 e por 7.\n");
	else
		printf("Nao e divisivel por 3 e por 7.\n");
	system ("pause");
	return 0;
}
