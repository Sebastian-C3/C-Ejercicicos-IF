#include <stdio.h>

const int LLEGO_TEMPRANO = 900;
const int LLEGO_TARDE = 930;

int main()
{
	int horaLlegada = 0;
	char nombreAlumno[21] = "def_nombre";

	printf("\n--------------------BOT Anunciador---------------------");
	printf("\nIngrese su nombre: ");
	scanf("%[^\n]", &nombreAlumno);
	printf("\nIngrese el horario en el que llego (en formato militar)\n");
	scanf("%i", &horaLlegada);

	if (horaLlegada<LLEGO_TEMPRANO)
	{
		printf("\nEl alumno llego Muy temprano\n");
	}else if (horaLlegada>=LLEGO_TEMPRANO && horaLlegada<=LLEGO_TARDE)
	{
		printf("\nEl alumno %s llego en horario\n", nombreAlumno);
	}else{
		printf("\nEl alumno %s llego tarde >:(\n", nombreAlumno);
	}




	return 0;
}
