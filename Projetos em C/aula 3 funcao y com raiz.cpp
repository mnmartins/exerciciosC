#include<stdlib.h>
#include<stdio.h>
#include<math.h>

int main(){
	float x,y;
	printf("Entre com um valor:\n");
	scanf("%f",&x);
	y = (2*sqrt(x+1))/(3*pow(x,3));
	printf("y = %.2f\n",y);
	
	system("pause");
	return 0;
}
