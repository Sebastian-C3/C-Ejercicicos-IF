#include <stdio.h>
#include <string.h> // contiene la función strcmp para comprar los valores ascii uno a uno

const char USUARIO_GUARDADO[15] = "Erick";
const char CONTRASENIA_GUARDADA[15] = "123";

int main()
{

	char usuarioIngresado[15] = "def_usuario";
	char contraseniaIngresada [15]= "def_contrasenia";

	printf("Ingrese su usuario\n");
	scanf(" %s", &usuarioIngresado);
	printf("Ingrese su contrasenia\n");
	scanf(" %s", &contraseniaIngresada);

	//printf("\nusuario:%s - contrasenia:%s \n", usuarioIngresado, contraseniaIngresada);

	if (strcmp(usuarioIngresado, USUARIO_GUARDADO) && strcmp(contraseniaIngresada, CONTRASENIA_GUARDADA)) //si al comparar los valores ascii son iguales, la función devuelve 0, si no 1
	{
		printf("\nError, usuario y/o contrasenia incorrectos");
	}else{
		
		printf("\nBienvenido %s! :) \n", usuarioIngresado);
	}
	return 0;

}