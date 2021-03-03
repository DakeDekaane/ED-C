#include <stdlib.h>
#include <stdbool.h>
#include "Queue.h"

Queue* createQueue() {
	Queue* queue = malloc(sizeof(Queue));
	queue->front = NULL;
	queue->back = NULL;
	return queue;
}

bool queue(Queue* queue, int value) {
	if (queue == NULL) {
		return false;
	}
	Node* node = initNode(value);
	if (node == NULL) {
		return false;
	}
	if(isEmpty(queue)) {
		queue->front = node;
	}
	else {
		queue->back->next = node;
	}
	queue->back = node;
	return true;
}

int dequeue(Queue* queue) {
	if (queue == NULL) {
		return -2;	//Kind of 'error' value. Adjust if necessary.
	}
	if(isEmpty(queue)) {
		return -1;	//Kind of 'error' value. Adjust if necessary.
	}
	Node* aux = queue->front;
	if(queue->front == queue->back) {
		queue->front = queue->back = NULL;
	}
	else if(!isEmpty(queue)){
		queue->front = queue->front->next;
		aux->next = NULL;
	}
	int value = aux->value;
	free(aux);
	return value;
}

int peekFront(Queue* queue) {
	if (queue == NULL) {
		return -2;	//Kind of 'error' value. Adjust if necessary.
	}
	return queue->front->value;
}

int peekBack(Queue* queue) {
	if (queue == NULL) {
		return -2;	//Kind of 'error' value. Adjust if necessary.
	}
	return queue->back->value;	
}

bool isEmpty(Queue* queue) {
	if (queue == NULL) {
		return false;
	}
	if(queue->front == NULL && queue->back == NULL) {
		return true;
	}
	return false;
}
