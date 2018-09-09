#include <stdio.h>
#include "Lista.h"

int main() {
	Lista* l1 = crearLista();

	for(int i = 0; i < 5; i++) {
		insertFront(l1,i*3);
	}

	for(int i = 0; i < 5; i++) {
		insertBack(l1,i*5);
	}

	insertAt(l1,5,100);

	removeFront(l1);
	removeBack(l1);
	removeFrom(l1,3);

	printf("Elementos: ");
	for(int i = 0; i < l1->num_nodos; i++) {
		printf("%d ",getFrom(l1,i));
	}

}







