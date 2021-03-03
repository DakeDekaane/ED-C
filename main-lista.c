#include <stdio.h>
#include "List/List.h"

int main() {
	List* l1 = createList();

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
	for(int i = 0; i < l1->num_nodes; i++) {
		printf("%d ",getFrom(l1,i));
	}

}







