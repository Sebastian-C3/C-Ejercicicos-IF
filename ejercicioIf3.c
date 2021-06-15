#include <stdio.h>

const int LLEGO_TEMPRANO = 900;
const int LLEGO_TARDE = 930;

int main()
{
	int horaLlegada = 0;

	printf("\n--------------------BOT Anunciador---------------------");
	printf("\nIngrese el horario en el que llego (en formato militar)\n");
	scanf("%i", &horaLlegada);

	if (horaLlegada<LLEGO_TEMPRANO)
	{
		printf("\nEl alumno llego Muy temprano\n");
	}else if (horaLlegada>=LLEGO_TEMPRANO && horaLlegada<=LLEGO_TARDE)
	{
		printf("\nEl alumno llego en horario\n");
	}else{
		printf("\nEl alumno llego tarde >:(\n");
	}




	return 0;
}