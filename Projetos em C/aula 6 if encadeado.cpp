#include <stdlib.h>
#include <stdio.h>

int main(){
	float A1, A2, media, exame, novaMedia;
	printf("Entre com as notas do aluno:\n");
	scanf("%f %f",&A1,&A2);
	media = (A1+A2)/2;
	if (media>=6)
		printf("Aprovado.\n");
	else 
		printf("Exame.\n");
		printf("Digite o valor da nota do exame:\n");
		scanf("%f",&exame);
			novaMedia = (media + exame)/2;
			if (novaMedia>=6)
				printf("Aprovado.\n");
			else
				printf("Reprovado.\n");
	
	system("pause");
	return 0;
}
