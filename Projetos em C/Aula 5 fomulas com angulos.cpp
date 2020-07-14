#include <stdlib.h>
#include <stdio.h>
#include <math.h>

int main (){
	float alcance, velocidade, angGra, angRad;
	printf("Entre com o valor do angulo em graus:\n");
	scanf("%f",&angGra);
	printf("Entre com o valor da velocidade:\n");
	scanf("%f",&velocidade);
	angRad = angGra *M_PI/180;
	alcance = (pow(velocidade,2)*sin(2*angRad))/9.8;
	if ((alcance>=300) && (alcance<=350))
		printf("%.2f, acertou o alvo!\n",alcance);
	else
		printf("%.2f, errou o alvo!\n",alcance);
	system ("pause");
	return 0;
}
