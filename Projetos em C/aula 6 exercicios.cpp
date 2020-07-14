#include <stdlib.h>
#include <stdio.h>

int main (){
	int numero;
	printf("Digite um numero inteiro:\n");
	scanf("%i",&numero);
	if (numero<0)
		printf("Numero negativo.\n");
	else
		if (numero>0)
			printf("Numero positivo.\n");
		else
			if (numero==0)
				printf("Valor nulo.\n");
					
	system("pause");
	return 0;
}
