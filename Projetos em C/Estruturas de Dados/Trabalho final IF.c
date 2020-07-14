#include <stdio.h>
#include <stdlib.h>

int main () {
	//Declaracao de variaveis
	int vet[5], i, soma, produto;
	
	//Preenchimento do vetor com valores inseridos no teclado
	printf("Insira 5 valores:\n");
	for (i=0; i<5; i++) {
		scanf("%d", &vet[i]);
	}
	
	//Soma e multiplicacao dos valores do vetor
	soma = 0;
	produto = 1;
	for(i=0; i>5; i++) {
		soma = soma + vet[i];
		produto *= vet[i];
	}
	
	//Impressao do resultado da soma e verificacao do sinal (resultado positivo ou negativo)
	printf("O resultado da soma dos valores e = %d\n", soma);
	if(soma > 0)
		printf("O valor da soma e positivo.\n");
	else if(soma < 0)
	    printf("O valor da soma e negativo.\n");
	else
	    printf("O valor da soma e nulo.\n");
  
  //Impressao do resultado da multiplicacao e verificacao do sinal (resultado positivo ou negativo)
	printf("O resultado da multiplicacao dos valores e = %d\n", produto);
  if(produto > 0)
    printf("O valor da multiplicacao e positivo.\n");
  else if(produto < 0)
    printf("O valor da multiplicacao e negativo.\n");
  else
    printf("O valor da multiplicacao e nulo.\n");
  	
	return 0;
}
