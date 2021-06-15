/*
	EJ 6 IF
	Crear un programa que calcule el costo final dependiendo de si los 2 productos
	a comprar son del mismo tipo, si es afiliado y si esta en oferta
	si son dos productos iguales
		el segundo a un 50% de descuento
	si el producto esta en oferta
		descuento del 15% solo afiliados
		descuento del 5% no afiliados
	es afiliado si lleva más de 6 meses usando el servicio del local
	Finalmente informar el precio a pagar
*/

#include <stdio.h>
#include <stdbool.h>

const float DESC_PROD_IGUAL = 0.5;
const float DESC_PROD_AFILIADO = 0.85;
const float DESC_PROD_NO_AFILIADO = 0.95;
const int CANT_PROD_DESC = 2;
const int TIEMPO_MIN_AFILIADO = 6;

int main()
{
	
	bool productoOferta = false;
	bool productoIgual = false;
	int numeroBool = 0;
	int tiempoServicio = 0;
	float precioProdA = 0;
	float precioProdB = 0;
	float precioSubTotal = 0;
	float precioTotal = 0;

	printf("\nLleva 2 productos iguales? 0-No 1-Si\n");
	scanf("%i", &numeroBool);
	productoIgual = numeroBool;

	if (productoIgual)
	{
		printf("\nIngrese el precio del producto: ");
		scanf("%f", &precioProdA);
		precioSubTotal = (precioProdA*CANT_PROD_DESC)-(precioProdA*DESC_PROD_IGUAL);

	}else{
		printf("\nIngrese el precio de los 2 productos separados por una coma: ");
		scanf("%f, %f", &precioProdA, &precioProdB);
		precioSubTotal=precioProdA+precioProdB;
	}

	printf("\nCuantos meses lleva de cliente en la tienda?\nMeses: ");
	scanf("%i", &tiempoServicio);

	printf("\nLleva productos en oferta? 0-No 1-Si\n");
	scanf("%i", &numeroBool);
	productoOferta = numeroBool;

	if (productoIgual && productoOferta && tiempoServicio>TIEMPO_MIN_AFILIADO)
	{
		/* 50%+15% */
		printf("\nSe realizara un 50+15 de descuento por llevar 2 productos iguales en oferta y ser cliente afiliado\n");
		printf("Sub total: $%.2f", precioProdA*CANT_PROD_DESC);
		printf("\nDescuento 2do: $%.2f", precioProdA*DESC_PROD_IGUAL);
		precioTotal = precioSubTotal * DESC_PROD_AFILIADO;
		printf("\nDescuento Afiliado: $%.2f", precioSubTotal - precioTotal);
		printf("\nPrecio a pagar con descuento: $%.2f", precioTotal);

	}else if (productoIgual && productoOferta && tiempoServicio<=TIEMPO_MIN_AFILIADO){
		printf("\nSe realizara un 50+5 de descuento por llevar 2 productos iguales en oferta y no ser cliente afiliado\n");
		printf("Sub total: $%.2f", precioSubTotal);
		printf("\nDescuento 2do: $%.2f", precioProdA*DESC_PROD_IGUAL);
		precioTotal = precioSubTotal * DESC_PROD_NO_AFILIADO;
		printf("\nDescuento Afiliado: $%.2f", precioSubTotal - precioTotal);
		printf("\nPrecio a pagar con descuento: $%.2f", precioTotal);
	}

	if (productoIgual == 0 && productoOferta && tiempoServicio>TIEMPO_MIN_AFILIADO)
	{
		printf("\nSe realizara un 15 de descuento por llevar 2 productos distintos en oferta y ser cliente afiliado\n");
		printf("Sub total: $%.2f", precioSubTotal);//200
		precioTotal = precioSubTotal * DESC_PROD_AFILIADO;
		printf("\nDescuento afiliado: $: %.2f", precioSubTotal - precioTotal);
		printf("\nPrecio a pagar con descuento: $%.2f", precioTotal);

	}else if (productoIgual == 0 && productoOferta && tiempoServicio<=TIEMPO_MIN_AFILIADO){
		printf("\nSe realizara un 5 de descuento por llevar 2 productos distintos en oferta y no ser cliente afiliado\n");
		printf("Sub total: $%.2f", precioSubTotal);//200
		precioTotal = precioSubTotal * DESC_PROD_NO_AFILIADO;
		printf("\nDescuento afiliado: $: %.2f", precioSubTotal - precioTotal);
		printf("\nPrecio a pagar con descuento: $%.2f", precioTotal);
	}

	if ( productoOferta == 0)
	{
		printf("\nPrecio a pagar : $%.2f", precioSubTotal);
	}

	return 0;
}