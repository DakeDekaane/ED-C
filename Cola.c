#include <stdlib.h>
#include "Cola.h"

Cola* crearCola() {
	Cola* cola = malloc(sizeof(Cola));
	cola->front = NULL;
	cola->back = NULL;
	return cola;
}

void queue(Cola* cola, int dato) {
	Nodo* nodo = iniciarNodo(dato);
	if(isEmpty(cola)) {
		cola->front = nodo;
	}
	else {
		cola->back->siguiente = nodo;
	}
	cola->back = nodo;
}

Nodo* dequeue(Cola* cola) {
	if(isEmpty(cola)) {
		return NULL;
	}
	Nodo* aux = cola->front;
	if(cola->front == cola->back) {
		cola->front = cola->back = NULL;
	}
	else if(!isEmpty(cola)){
		cola->front = cola->front->siguiente;
		aux->siguiente = NULL;
	}
	return aux;
}

Nodo* getFront(Cola* cola) {
	return cola->front;
}

Nodo* getBack(Cola* cola) {
	return cola->back;	
}

int isEmpty(Cola* cola) {
	if(cola->front == NULL && cola->back == NULL) {
		return 1;
	}
	return 0;
}
