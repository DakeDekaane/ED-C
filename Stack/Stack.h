#ifndef STACK_H	
#define STACK_H value

#include <stdbool.h>
#include "../Node.h"

typedef struct Stack {
	Node* top;
} Stack;

/**
	Create a Stack
	@return Pointer to the created stack
**/
Stack* createStack();

/**
	Insert an element to the stack
	@param Stack: Pointer to the stack.
	@param value: true if success, false if failed to insert
**/
bool push(Stack* stack, int value);

/**
	Removes an element from the stack
	@param Stack: Pointer to the stack.
	@return: Removed value.
**/
int pop(Stack* stack);

/** 
	Determine if the stack is empty
	@param cola: Pointer to the stack.
	@return: true if empty, false otherwise
**/
bool isEmpty(Stack* stack);

/** 
	Get the value in the top of the stack
	@param Stack: Pointer to the stack.
	@return: Stored value in the top of the stack.
**/
int peek(Stack* stack);
//void empty();

#endif