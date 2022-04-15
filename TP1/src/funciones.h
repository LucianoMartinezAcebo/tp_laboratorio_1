/*
 * funciones.h
 *
 *  Created on: 9 abr. 2022
 *      Author: Luciano
 */

#ifndef FUNCIONES_H_
#define FUNCIONES_H_
/**
 * @brief sirve para validar los numeros positivos, no permite ingresar numeros que sean 0 o negativo
 * @param mensaje pide numero para ingresar
 * @param error valida si el numero es positivo y si no lo es pide un reingreso
 * @return devuelve el valor correcto ingresado
 */
int PedirEnteroPositivo(char mensaje[],char error[]);
/**
 * @brief sirve para sacar el descuento de una tarjeta de debito al 10%
 * @param aerolinea es la variable que se utiliza para determinar el precio de la aerolinia
 * @return devuelve el descuento de acuerdo al precio ingresado
 */
float debito(float aerolinea);
/**
 * @brief sirve para sacar el interes de una tarjeta de credito al 25%
 * @param aerolinea es la variable que se utiliza para determinar el precio de la aerolinia
 * @return devuelve el interes de acuerdo al precio ingresado
 */
float credito(float aerolinea);
/**
 * @brief sirve para saber cual es el precio unitario basado en el precio por aerolinea y kilometro ingresado
 * @param aerolinea es la variable que se utiliza para determinar el precio de la aerolinia
 * @param kilometro es la variable que determina los kilometros ingresados
 * @return devuelve la division entre el precio de la aerolinia y los kilometros ingresados como resultado
 */
float precioKilometro(float aerolinea , int kilometro);
/**
 * @brief sirve para determinar cuantos bitcoin equivale el precio en pesos de la aerolinea que se ingreso
 * @param aerolinea es la variable que se utiliza para determinar el precio de la aerolinia
 * @return devuelve la division entre el precio de la aerolinia en pesos y el valor unitario de un bitcoin en pesos dando como resultado lo que equivale el precio en bitcoin
 */
float bitcoin(float aerolinea);


#endif /* FUNCIONES_H_ */
