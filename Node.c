#include <stdlib.h>
#include "Node.h"

Node* createNode(){
	Node* node = malloc(sizeof(Node));
	return node;
}

Node* initNode(int value){
	Node* node = createNode();
	node->value = value;
	node->next = NULL;
	return node;
}
