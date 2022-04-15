/*
 * funciones.c
 *
 *  Created on: 9 abr. 2022
 *      Author: Luciano
 */

#include <stdio.h>
#include <stdlib.h>

float debito(float aerolinea)
{
	float descuento;

	descuento = aerolinea * 0.1;

	return descuento;
}

float credito(float aerolinea)
{
	float descuento;

	descuento = aerolinea * 0.25;

	return descuento;
}

float precioKilometro(float aerolinea , int kilometro)
{
	float precioUnitario;
	precioUnitario = aerolinea / kilometro;
	return precioUnitario;
}

float bitcoin(float aerolinea)
{
	float bitcoin;
	bitcoin = aerolinea / 4606954.55;
	return bitcoin;

}

int PedirEnteroPositivo(char mensaje[],char error[])
{
    int numero;

    printf("%s",mensaje);
    scanf("%d", &numero);

    while(numero < 1)
    {
        printf("%s",error);
        scanf("%d", &numero);
    }

    return numero;
}

