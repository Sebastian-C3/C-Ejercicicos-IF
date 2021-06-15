#include <stdio.h>

int main()
{
	int numIngresado = 0;

	printf("\nIngrese un numero para saber si es par o impar\n");
	scanf("%i", &numIngresado);

	if (numIngresado % 2 == 0)
	{
		printf("\nEl numero %i en par!\n", numIngresado);
	}else{
		printf("\nEl numero %i en impar!\n", numIngresado);
	}

	return 0;
}