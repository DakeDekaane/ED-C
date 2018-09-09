#include <stdlib.h>
#include "Nodo.h"

Nodo* crearNodo(){
	Nodo* nodo = malloc(sizeof(Nodo));
	return nodo;
}

Nodo* iniciarNodo(int dato){
	Nodo* nodo = crearNodo();
	nodo->dato = dato;
	nodo->siguiente = NULL;
	return nodo;
}
