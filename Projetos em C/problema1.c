#include <stdio.h>
#define MAX 10

int fneuronio(float *, float *, float);

int main()
{
    float e[MAX], p[MAX], T;
    int i;
    int valor;

    for(i = 0; i < MAX; i++)
    {
        printf("Digite o elemento %d do vetor de entrada: ", i);
        scanf("%f", &e[i]);
    }

    for(i = 0; i < MAX; i++)
    {
        printf("Digite o elemento %d do vetor de pesos: ", i);
        scanf("%f", &p[i]);
    }

    printf("Digite o limiar T: ");
    scanf("%f", &T);

    valor = fneuronio(e, p, T);
    //valor = fneuronio(&e[0], &p[0], T);

    if(valor == 1)
        printf("Neuronio ativado!\n");
    else
        printf("Neuronio inibido!\n");


    return 0;
}

int fneuronio(float *e, float *p, float T)
{
    float somap = 0;
    int i;

    //somap = e[1]*p[1] + e[2]*p[2] + e[3]*p[3] + e[4]*p[4] + e[5]*p[5] + e[6]*p[6] + e[7]*p[7] + e[8]*p[8] + e[9]*p[9];

    for(i = 0; i < MAX; i++)
    {
        somap = somap + (*(e + i)) * (*(p + i));
        //somap = somap + e[i]*p[i];
    }

    if(somap >= T)
        return 1;
    else
        return 0;
}
