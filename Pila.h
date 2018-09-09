##ifndef PILA_H
#define PILA_H value

#include "Nodo.h"

typedef struct Pila {
	Nodo* top;
} Pila;

typedef enum boolean {
	false,
	true
} boolean;

/**
	Crea una pila
	@return Apuntador a la pila creada
**/
Pila* crearPila();

/**
	Apila un elemento
	@param pila: Pila en la cual se desea apilar
	@param dato: true si se apiló con éxito, false en caso contrario.
**/
boolean push(Pila* pila, int dato);

/**
	Desapila un elemento
	@param pila: Pila de la cual se desea desapilar
	@return: Apuntador a nodo con el dato desapilar.
**/
int pop(Pila* pila);

/** 
	Determina si la cola está vacía o no.
	@param cola: Cola deseada.
	@return: true si la cola está vacía, false en caso contrario.
**/
boolean isEmpty(Pila* pila);

/** 
	Obtiene el dato al tope de la pila
	@param pila: Pila de la cual se desea obtener el dato
	@return: Dato contenido en el tope de la pila.
**/
int tope(Pila* pila);
//void empty();

#endif