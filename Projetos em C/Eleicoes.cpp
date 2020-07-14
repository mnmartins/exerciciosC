#include<stdlib.h>
#include<stdio.h>
/*Eleições 2018: 
> Leia os votos do candidato A
> Leia dos votos do candidato B
> Leia a quantidade total de votos brancos e nulos
> Mostre o total de eleitores
> Informe quem vence a eleição
> Informe quantos porcento dos eleitores precisou convencer para vencer
porcento = (votos vencedores/total válido)*100*/

int main() {
	float A, B, brancosenulos,TE;
	printf ("Entre com o total de votos do candidato A:\n");
	scanf ("%f", &A);
	printf ("Entre com o total de votos do candidato B:\n");
	scanf ("%f", &B);
	printf ("Entre com o total de votos nulos e brancos:\n");
	scanf ("%f", &brancosenulos);
	TE = A + B + brancosenulos;
	printf ("O total de eleiores e %.0f.\n",TE);

	if (A>B) {
		printf("Candidato A vence.\n");
		printf ("O Candidato A precisou convencer %.1f porcento dos eleitores.\n",A/TE*100);
	}
		else {
			if (B>A) {
				printf ("Candidato B vence.\n");
				printf ("O Candidato B precisou convencer %.1f porcento dos eleitores.\n",B/TE*100);
			}
			else {
				printf ("Nao houve vencedor.\n");
			}
		}
	
	
	return 0;
}
