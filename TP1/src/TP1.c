/*
 ============================================================================
 Name        : TP1.c
 Author      : Luciano Martinez Acebo
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include "funciones.h"



int main(void)
{
	setbuf(stdout, NULL);
	int opcion;
	int kilometros;
	float aerolineas;
	float latam;
	float debitoLatam;
	float totalDebitoLatam;
	float creditoLatam;
	float totalCreditoLatam;
	float debitoAerolineas;
	float totalDebitoAerolineas;
	float creditoAerolineas;
	float totalCreditoAerolineas;
	float diferenciaPrecio;
	float precioBitcoinLatam;
	float precioBitcoinAerolineas;
	float precioUnitarioLatam;
	float precioUnitarioAerolineas;
	int bandera1 = 0;
	int bandera2 = 0;
	int bandera3 = 0;
	int bandera5 = 0;

	do
	{
		printf("\n1-Ingresar Kilometros\n2-Ingresar Precio Vuelos \n3-Calcular todos los costos \n4-Informar Resultados \n5-Carga de datos forzada \n6-Salir\n");
		scanf("%d",&opcion);

		switch(opcion)
		{
			case 1:
			kilometros = PedirEnteroPositivo("Ingrese los kilometros: ","Error ingreso cero o un numero no positivo, reingrese los kilometros: ");
			bandera1 = 1;
			break;

			case 2:
			latam = PedirEnteroPositivo("Ingrese precio Latam: ","Error ingreso cero o un numero no positivo, reingrese los precios de Latam: ");
			aerolineas = PedirEnteroPositivo("Ingrese los precio Aerolineas: ","Error ingreso cero o un numero no positivo, reingrese los precios de Aerolineas: ");
			bandera2 = 1;
			break;

			case 3:
			if((bandera1 == 1 && bandera2 == 1) || bandera5 == 1)
			{
			precioUnitarioLatam = precioKilometro(latam, kilometros);
			debitoLatam = debito(latam);
			totalDebitoLatam = latam - debitoLatam;
			creditoLatam = credito(latam);
			totalCreditoLatam = latam + creditoLatam;
			precioBitcoinLatam = bitcoin(latam);
			precioUnitarioAerolineas = precioKilometro(aerolineas, kilometros);
			debitoAerolineas = debito(aerolineas);
			totalDebitoAerolineas = aerolineas - debitoAerolineas;
			creditoAerolineas = credito(aerolineas);
			totalCreditoAerolineas = aerolineas + creditoAerolineas;
			precioBitcoinAerolineas = bitcoin(aerolineas);
			diferenciaPrecio = aerolineas - latam;
			bandera3 = 1;
			}
			else
			{
				printf("\nerror ingrese opcion 1, 2 o 5 \n");
			}
			break;

			case 4:
			if(bandera3 == 1)
			{
			printf("\nKMs Ingresados: %d Km\n", kilometros);
			printf("\nPrecio Aerolineas: $ %.2f \na) Precio con tarjeta de debito: $ %.2f \nb) Precio con tarjeta de credito: $ %.2f \nc) precio pagado con bitcoin: %.2f BTC \nd) Mostrar Precio Unitario: $ %.2f \n", aerolineas , totalDebitoAerolineas, totalCreditoAerolineas, precioBitcoinAerolineas, precioUnitarioAerolineas );
			printf("\nPrecio Latam: $ %.2f \na) Precio con tarjeta de debito: $ %.2f \nb) Precio con tarjeta de credito: $ %.2f \nc) precio pagado con bitcoin: %.2f BTC \nd) Mostrar Precio Unitario: $ %.2f \n", latam , totalDebitoLatam, totalCreditoLatam,precioBitcoinLatam , precioUnitarioLatam );
			printf("\nLa diferencia de precio es: $ %.2f \n", diferenciaPrecio);
			}
			else
			{
				printf("\nerror ingrese opcion 3 \n");
			}
			break;

			case 5:
				kilometros = 7090;
				aerolineas = 162965;
				latam = 159339;
				bandera5 = 1;
			break;

			case 6:
			printf("chau\n");
			break;

			default:
			printf("error no ingreso una opcion correcta\n");
			break;

		}


	}while(opcion != 6);


	return EXIT_SUCCESS;
}


