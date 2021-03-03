#include <stdio.h>
#include "Stack/Stack.h"

int main() {
	
	Stack* s1 = createStack();

	push(s1,10);
	printf("El elemento en el tope de la pila es: %d\n", peek(s1));
	
	push(s1,12);
	printf("El elemento en el tope de la pila es: %d\n", peek(s1));

	int value = pop(s1);
	printf("El elemento sacado fue: %d\n", value);
	printf("El elemento en el tope de la pila es: %d\n", peek(s1));

}