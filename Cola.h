#ifndef COLA_H
#define COLA_H

#include "Nodo.h"

typedef struct Cola {
	Nodo* front;
	Nodo* back;
} Cola;

/**
	Crea una cola
	@return Apuntador a la cola creada
**/
Cola* crearCola();

/**
	Encola un elemento
	@param cola: Cola en la cual se desea encolar
	@param dato: Dato a encolar
**/

void queue(Cola* cola, int dato);

/**
	Desencola un elemento
	@param cola: Cola de la cual se desea desencolar
	@return: Apuntador a nodo con el dato desencolado.
**/
Nodo* dequeue(Cola* cola);

/** 
	Obtiene el dato al inicio de la cola
	@param cola: Cola de la cual se desea obtener el dato
	@return: Apuntador al nodo inicial.
**/
Nodo* getFront(Cola* cola);

/** 
	Obtiene el dato al final de la cola
	@param cola: Cola de la cual se desea obtener el dato
	@return: Apuntador al nodo final.
**/
Nodo* getBack(Cola* cola);


/** 
	Determina si la cola está vacía o no.
	@param cola: Cola deseada.
	@return: 1 si la cola está vacía, 0 en caso contrario.
**/
int isEmpty(Cola* cola);

#endif