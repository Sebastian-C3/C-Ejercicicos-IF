#include <stdio.h>
#include <stdbool.h>

const int TIEMPO_ENTREGA = 90;

int main()
{
	int diasEntrega = 0;
	int numeroBool = 0;
	bool estadoEntrega = false;
	bool entregaPaquete = false;

	printf("\nIngrese si llego el paquete 0-Nunca me llego / 1-Llego\n");
	scanf("%i", &numeroBool);
	entregaPaquete = numeroBool;

	if (entregaPaquete)
	{
		printf("\nIndique tiempo que demoro en llegar el pedido: ");
		scanf("%i", &diasEntrega);

		if (diasEntrega > TIEMPO_ENTREGA)
		{
			printf("\nEl paquete llego tarde\nEstrellas: *");
		}else{
			printf("\nIndique estado en el que llego el paquete 0-Malo 1-Bueno\n");
			scanf("%i", &numeroBool);
			estadoEntrega = numeroBool;

			if (diasEntrega == TIEMPO_ENTREGA)
			{
				printf("\nEl paquete llego a timepo y en ");
			}else{
				printf("\n El paquete llego antes y en ");
			}

			if (estadoEntrega)
			{
				printf("buen estado\n");
				printf("Estrellas: ***");
			}else{
				printf("mal estado\n");
				printf("Estrellas: **");
			}
		}
	}else{
		printf("\nEl paquete nunca llego\n");
		printf("Estrellas : 0\n");
	}
	return 0;
}