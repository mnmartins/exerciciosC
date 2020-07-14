#include<stdlib.h>
#include<stdio.h>
#include<string.h>

int main () {
	float nota1, nota2, nota3, nota4;
	float media;
	char nomeAluno[50];
	printf("Qual o seu nome?\n");
	gets(nomeAluno);
	printf("%s, entre com as 4 notas:\n",nomeAluno);
	scanf("%f %f %f %f",&nota1, &nota2, &nota3, &nota4);
	media = (nota1 + nota2 + nota3 + nota4)/4;
	if(media>=6)
	printf("Media = %.1f. Aprovado\n",media);
	else
	printf("Media = %.1f. Reprovado\n",media);

	system("pause");
	return 0;
}
