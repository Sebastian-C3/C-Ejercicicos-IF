#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool tengoVerdura = false;
	bool tengoAgua = false;
	bool tengoCondimento = false;
	bool tengoCuboCaldo = false;
	int numeroBool = 0;

	printf("\nIndique si tiene los siguientes ingredientes 0-No 1-Si\n");
	printf("\nAgua:");
	scanf("%i", &numeroBool);
	tengoAgua = numeroBool;
	printf("Verduras:");
	scanf("%i", &numeroBool);
	tengoVerdura = numeroBool;
	printf("Condimentos:");
	scanf("%i", &numeroBool);
	tengoCondimento = numeroBool;
	printf("Cubo de caldo:");
	scanf("%i", &numeroBool);
	tengoCuboCaldo = numeroBool;

	printf("\nAgua %i - Verduras %i, Condimentos %i, Cubo de caldo %i", tengoAgua, tengoVerdura, tengoCondimento, tengoCuboCaldo);

	if (tengoAgua && tengoVerdura && (tengoCondimento || tengoCuboCaldo))
	{
		printf("\nPuedo preparar sopa, a coninar!\n");
	}else{
		printf("\nUps...\n");
	}

	return 0;
}