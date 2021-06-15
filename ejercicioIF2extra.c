#include <stdio.h>

int main()
{
	int numIngresadoA = 0;
	int numIngresadoB = 0;

	printf("\nIngrese un numero\n");
	scanf("%i", &numIngresadoA);
	printf("\nIngrese otro numero para saber si son multiplos\n");
	scanf("%i", &numIngresadoB);

	if (numIngresadoA % numIngresadoB == 0 || numIngresadoB % numIngresadoA == 0)
	{
		printf("\n%i y %i son multiplos\n", numIngresadoA, numIngresadoB);
	}else{
		printf("\n%i y %i no son multiplos\n", numIngresadoA, numIngresadoB);
	}

	return 0;
}