#include <stdio.h>
#include <string.h> // contiene la función strcmp para comprar los valores ascii uno a uno

const char USUARIO_GUARDADO_1[15] = "Erick";
const char CONTRASENIA_GUARDADA_1[15] = "123";
const char USUARIO_GUARDADO_2[15] = "Cosme";
const char CONTRASENIA_GUARDADA_2[15] = "456";
const char USUARIO_GUARDADO_3[15] = "Fulanito";
const char CONTRASENIA_GUARDADA_3[15] = "789";

int main()
{

	char usuarioIngresado[15] = "def_usuario";
	char contraseniaIngresada [15]= "def_contrasenia";

	printf("Ingrese su usuario\n");
	scanf(" %s", &usuarioIngresado);
	printf("Ingrese su contrasenia\n");
	scanf(" %s", &contraseniaIngresada);

	//printf("\nusuario:%s - contrasenia:%s \n", usuarioIngresado, contraseniaIngresada);

	if (strcmp(usuarioIngresado, USUARIO_GUARDADO_1) == 0 && strcmp(contraseniaIngresada, CONTRASENIA_GUARDADA_1) == 0)
	{
		printf("\nBienvenido %s! :) \n", usuarioIngresado);

	}else if (strcmp(usuarioIngresado, USUARIO_GUARDADO_2) == 0 && strcmp(contraseniaIngresada, CONTRASENIA_GUARDADA_2) == 0)
	{
		printf("\nBienvenido %s! :) \n", usuarioIngresado);

	}else if (strcmp(usuarioIngresado, USUARIO_GUARDADO_3) == 0 && strcmp(contraseniaIngresada, CONTRASENIA_GUARDADA_3) == 0)
	{
		printf("\nBienvenido %s! :) \n", usuarioIngresado);

	}else{
		printf("\nError, usuario y/o contrasenia incorrectos");
	}

}