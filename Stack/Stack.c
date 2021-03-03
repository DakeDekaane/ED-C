#include <stdlib.h>
#include <stdbool.h>
#include "Stack.h"

Stack* createStack() {
	Stack* stack = malloc(sizeof(Stack));
	stack->top = NULL;
	return stack;
}

bool push(Stack* stack, int value) {
	if(stack == NULL) {
		return false;
	}
	Node* node = initNode(value);
	if(node == NULL){
		return false;
	}
	node->next = stack->top;
	stack->top = node;
	return true;
}

int pop(Stack* stack) {
	if (stack == NULL) {
		return -2;	//Kind of 'error' value. Adjust if necessary.
	}
	if(!isEmpty(stack)){
		Node* aux = stack->top;
		stack->top = stack->top->next;
		aux->next = NULL;
		return aux->value;
	}
	return -1; //Kind of 'error' value. Adjust if necessary.
}

bool isEmpty(Stack* stack) {
	if (stack == NULL) {
		return false;
	}
	if(stack->top == NULL) {
		return true;
	}
	return false;
}

int peek(Stack* stack) {
	if(!isEmpty(stack)){
		return stack->top->value;	
	}
	return -1;
}










