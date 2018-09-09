#ifndef LISTA_H
#define LISTA_H

#include "Nodo.h"

typedef struct Lista {
	Nodo* head;
	Nodo* tail;
	int num_nodos;
} Lista;


/**
	Crea una lista
	@return Apuntador a la lista creada
**/
Lista* crearLista();

/**
	Inserta un elemento al inicio de la lista
	@param lista: Lista en la cual se desea insertar el dato
	@param dato: Dato a insertar

**/
void insertFront(Lista* lista, int dato);

/**
	Inserta un elemento al final de la lista
	@param lista: Lista en la cual se desea insertar el dato
	@param dato: Dato a insertar

**/
void insertBack(Lista* lista, int dato);

/**
	Inserta un elemento en la posición deseada en la lista
	@param lista: Lista en la cual se desea insertar el dato
	@param pos: Posición 
	@param dato: Dato a insertar

**/
void insertAt(Lista* lista, int pos, int dato);

/**
	Remueve el elemento al inicio de la lista.
	@param lista: Lista de la cual se remover el dato.
	@return: Dato removido.
**/
int removeFront(Lista* lista);

/**
	Remueve el elemento al final de la lista.
	@param lista: Lista de la cual se remover el dato.
	@return: Dato removido.
**/
int removeBack(Lista* lista);

/**
	Remueve el elemento en la posición indicada de la lista.
	@param lista: Lista de la cual se remover el dato.
	@param pos: Posición a remover
	@return: Dato removido.
**/
int removeFrom(Lista* lista, int pos);

/** 
	Determina si la lista está vacía o no.
	@param lista: Lista deseada.
	@return: 1 si la lista está vacía, 0 en caso contrario.
**/
int isEmpty(Lista* lista);

/** 
	Obtiene el dato en la posición deseada de la lista.
	@param lista: Lista de la cual se desea obtener el dato
	@param pos: Posición deseada
	@return: Dato en la posición indicada
**/
int getFrom(Lista* lista, int pos);

//getFront
//getBack
//empty

#endif