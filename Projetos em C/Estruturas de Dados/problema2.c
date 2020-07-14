#include <stdio.h>
#include <stdlib.h>
#define TAM 10

int recebe_notas (float *, int *);


int main () {
	float notas[TAM];
	int apr[TAM];
	int i;
	
	for(i=0; i<TAM; i++) {
		printf("Insira o valor das notas: \n");
		scanf("%f", &notas[i]);	
	}
	
	
	
	return 0;
}

int recebe_notas (float *notas, int *apr);
int i;

for (i=0; i<TAM; i++) {
	if (*(notas+i) >= 6.0)  //notacao de ponteiro notas +i, notacao de vetor notas[i]
		*(apr+i)=1;
	else
		*(apr+i)=0;
		
}

