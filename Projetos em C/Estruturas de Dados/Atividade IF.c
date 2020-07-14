#include <stdio.h>
#include <stdlib.h>
//Este é um programa que retorna o maior valor inserido no vetor v
int  main() {
	float valorQualquer;
	float v[10];
	int i;
	
	for (i=0; i<10; i++) {
		printf("Entre com o elemento %i do vetor:", i+1);
		scanf("%f", &v[i]);
	}	
	
	valorQualquer = v[0];
	for (i=0; i<10; i++) {
		if (v[i]>valorQualquer) {
			valorQualquer = v[i];
		}
	}
	
	printf("\nO valor encontrado acima e: %.1f", valorQualquer);
	
	return 0;
}
