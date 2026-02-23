#include <stdio.h>

int main()
{
	char NUM;
	printf("\n\tIngrese un n�mero entre -128 y 127: ");
	scanf("%d",&NUM);
	if (NUM&0x80)
		printf ("\n\tEl numero es negativo\n");
	else
		printf ("\n\tEl numero es positivo\n");
}
