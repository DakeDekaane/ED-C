#include <stdio.h>
#include "Queue/Queue.h"

int main() {
	
	Queue* q = createQueue();

	for(int i = 0; i < 10; i++) {
		queue(q,i * 10);
	}

	printf("El valor en el frente de la cola es: %d\n", peekFront(q));
	printf("El valor en el final de la cola es: %d\n", peekBack(q));

	int numero = dequeue(q);

	printf("Numero desencolado: %d\n", numero);

	printf("El valor en el frente de la cola es: %d\n", peekFront(q));

	return 0;	
}