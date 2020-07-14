#include<stdlib.h>
#include<stdio.h>

int main(){
	int numero,resto;
	printf ("Entre com um numero:\n");
	scanf("%d",&numero);
	resto = numero % 2;
	if(resto==0){
		printf("numero par\n");
	}
	else{
		printf("numero impar\n");
	}
	system("pause");
	return 0;
}
