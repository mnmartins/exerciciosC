#include <stdlib.h>
#include <stdio.h>

int main()
{
	int valor;
	int resultado;
	
	
	printf("Digite um valor qualquer para obter o seu dobro:\n");
	scanf("%d",&valor);
	
	resultado=valor*2;
	
	printf("O dobro do valor inserido e: %d\n",resultado);
	system("pause");
	
	return 0;
}
