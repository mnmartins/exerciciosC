#include <stdio.h>
#define TAM 10

int *recebe_notas(float *, int *);
void conta_notas(int *, int *, int *);
int percent_aprov(int, int, float *, float *);

int main()
{
    float n[TAM];
    int apr[TAM];
    int *APR;
    int aprovados = 0, reprovados = 0;
    int i;

    for(i = 0; i < TAM; i++)
    {
        printf("Digite a nota %d: ", i);
        scanf("%f", &n[i]);
    }

    APR = recebe_notas(n, apr);
    conta_notas(&APR[0], &aprovados, &reprovados);
    int metade;
    float p_apr, p_rep;
    metade = percent_aprov(aprovados, reprovados, &p_apr, &p_rep);

    printf("\n\n\n");
    printf("Quantidade de aprovados: %d\n", aprovados);
    printf("Quantidade de reprovados: %d\n", reprovados);
    printf("Percentual de aprovados: %.2f%%\n", p_apr);
    printf("Percentual de reprovados: %.2f%%\n", p_rep);

    if(metade == 1)
        printf("Mais da metade da turma foi aprovada!\n");
    else
        printf("Menos da metade da turma foi aprovada!\n");



    return 0;
}

int *recebe_notas(float *n, int *apr)
{
    int i;

    for(i = 0; i < TAM; i++)
    {
        if(n[i] >= 6)
            apr[i] = 1;
        else
            apr[i] = 0;
    }

    return apr;
}

void conta_notas(int *apr, int *aprovados, int *reprovados)
{
    int i;

    for(i = 0; i < TAM; i++)
    {
        if(apr[i] == 1)
            *aprovados = *aprovados + 1;
        else
            *reprovados = *reprovados + 1;
    }

}

int percent_aprov(int aprovados, int reprovados, float *p_apr, float *p_rep)
{
    *p_apr = (aprovados/TAM)*100;
    *p_rep = (reprovados/TAM)*100;

    if(*p_apr >= 50)
        return 1;
    else
        return 0;
}
