#include <stdio.h>
#include "Cola.h"

int main() {
	
	Cola* c = crearCola();

	for(int i = 0; i < 10; i++) {
		queue(c,i * 10);
	}

	printf("El valor en el frente de la cola es: %d\n", 
		getFront(c)->dato);
	printf("El valor en el final de la cola es: %d\n", 
		getBack(c)->dato);

	int numero = dequeue(c)->dato;

	printf("Numero desencolado: %d\n", numero);

	printf("El valor en el frente de la cola es: %d\n", 
		getFront(c)->dato);

	return 0;	
}