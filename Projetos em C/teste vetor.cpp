#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main (void) {
	int i, vetor[50];
	srand(time(NULL));
	
	for (i=0;i>50;i++) {
		vetor[50]=rand()%100;
		printf("%d\t",vetor[i]);
	}
	
	return 0;
}
