#ifndef COLA_H
#define COLA_H

#include <stdbool.h>
#include "../Node.h"

typedef struct Queue {
	Node* front;
	Node* back;
} Queue;

/**
	Create a queue
	@return Pointer to the creted queue
**/
Queue* createQueue();

/**
	Insert an element
	@param queue: Pointer to the queue
	@param value: Value to insert
	@return true if success, false otherwise
**/

bool queue(Queue* queue, int value);

/**
	Removes an element
	@param queue: Pointer to the queue
	@return: Removed value
**/
int dequeue(Queue* queue);

/** 
	Get the value stored at the front
	@param queue: Pointer to the queue
	@return: Stored value
**/
int peekFront(Queue* queue);

/** 
	Get the value stored at the back
	@param queue: Pointer to the queue
	@return: Stored value
**/
int peekBack(Queue* queue);


/** 
	Determine if queue is empty
	@param queue: Pointer to the queue
	@return: true if empty, false otherwise
**/
bool isEmpty(Queue* queue);

#endif