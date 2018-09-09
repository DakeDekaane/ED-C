#ifndef NODO_H
#define NODO_H

typedef struct Nodo {
	int dato;
	struct Nodo* siguiente;
}Nodo;

/**
	Crea una nodo para una estructura de datos.
	@return Apuntador a la nodo creado
**/
Nodo* crearNodo();

/**
	Crea una nodo y lo inicializa con un valor.
	@param dato: Dato con el que se inicializa el nodo.
	@return Apuntador a la nodo creado
**/
Nodo* iniciarNodo(int dato);

#endif