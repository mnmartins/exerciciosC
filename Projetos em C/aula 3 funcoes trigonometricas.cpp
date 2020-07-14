#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
	float angGraus,angRadianos,seno,cosseno;
	printf("Qual o valor do angulo?\n");
	scanf("%f",&angGraus);
	angRadianos = angGraus*M_PI/180;
	/* M_PI é o valor que utiliza a constante de Pi*/
	seno = sin(angRadianos);
	cosseno = cos(angRadianos);
	printf("sen(%.2f) = %f\n",angGraus,seno);
	printf("cos(%.2f) = %f\n",angGraus,cosseno);
	
	system("pause");
	return 0;
}
