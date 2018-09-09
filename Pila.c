#include <stdlib.h>
#include "Pila.h"

Pila* crearPila() {
	Pila* pila = malloc(sizeof(Pila));
	pila->top = NULL;
	return pila;
}

enum boolean push(Pila* pila, int dato) {
	Nodo* nodo = iniciarNodo(dato);
	if(nodo == NULL){
		return false;
	}
	nodo->next = pila->top;
	pila->top = nodo;
	return true;
}

int pop(Pila* pila) {
	if(!isEmpty(pila)){
		Nodo* aux = pila->top;
		pila->top = pila->top->next;
		aux->next = NULL;
		return aux->dato;
	}
	return -1; //Valor definido por nosotros.
}

enum boolean isEmpty(Pila* pila) {
	if(pila->top == NULL) {
		return true;
	}
	return false;
}

int tope(Pila* pila) {
	if(!isEmpty(pila)){
		return pila->top->dato;	
	}
	return -1;
}










