#include <stdio.h>
#include <stdbool.h>

int main()
{
	bool estadoLluvia = false;
	bool estadoParaguas = false;
	int numeroBool = 0;

	printf("\nEsta lloviendo? 0-No 1-Si\n");
	scanf("%i", &numeroBool);
	estadoLluvia = numeroBool;

	if (estadoLluvia)
	{
		printf("\nPreparaste el Paraguas? 0-No 1-Si\n");
		scanf("%i", &numeroBool);
		estadoParaguas = numeroBool;
		if (estadoParaguas)
		{
			printf("\nEsta lloviendo pero tenes el paraguas, sali tranqui\n");
		}else{
			printf("\nEsta lloviendo y no tenes el paraguas, empeza a correr\n");
		}
	}else{
		printf("\nNo llueve :D sali tranquilo\n");
	}
	return 0;
}