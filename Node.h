#ifndef NODO_H
#define NODO_H

typedef struct Node {
	int value;
	struct Node* next;
} Node;

/**
	Creates a node
	@return Pointer to the created node.
**/
Node* createNode();

/**
	Creates a node with a value
	@param value: Value stored in the node.
	@return Pointer to the created node.
**/
Node* initNode(int value);

#endif