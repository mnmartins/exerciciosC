#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int main ()
{
	int i;
	char* nome;
	printf ("Digite seu nome:\n");
	gets (nome);
	for (i=0; i<=10; i++)
	{
		printf ("%s\n",nome);
	}
	system ("pause");
	return 0;
}
