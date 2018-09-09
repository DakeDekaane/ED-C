#include <stdio.h>
#include "Pila.h"

int main() {
	
	Pila* p1 = crearPila();

	push(p1,10);
	printf("El elemento en el tope de la pila es: %d", tope(p1));
	
	push(p1,12);
	printf("El elemento en el tope de la pila es: %d", tope(p1));

	int dato = pop(p1);
	printf("El elemento sacado fue: %d", dato);
	printf("El elemento en el tope de la pila es: %d", tope(p1));

}