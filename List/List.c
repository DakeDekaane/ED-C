#include <stdlib.h>
#include <stdbool.h>
#include "List.h"

List* createList(){
	List* list = malloc(sizeof(List));
	list->head = list->tail = NULL;
	list->num_nodes = 0;
	return list;
}

bool insertFront(List* list, int value) {
	if (list == NULL) {
		return false;
	}
	Node* node = initNode(value);
	if (node == NULL) {
		return false;
	}
	if(isEmpty(list)) {
		list->head = list->tail = node;
	}
	else {
		node->next = list->head;
		list->head = node;
	}
	list->num_nodes++;
	return true;
}

bool insertBack(List* list, int value) {
	if (list == NULL) {
		return false;
	}
	Node* node = initNode(value);
	if (node == NULL) {
		return false;
	}
	if(isEmpty(list)) {
		list->head = node;
	}
	else {
		list->tail->next = node;
	}
	list->tail = node;
	list->num_nodes++;
	return true;
}

bool insertAt(List* list, int position, int value) {
	if (list == NULL) {
		return false;
	}
	if(position > list->num_nodes) {
		return false;
	}
	else if (position == 0) {
		insertFront(list,value);
	}
	else if (position == list->num_nodes){
		insertBack(list,value);
	}
	else {
		Node* node = initNode(value);
		Node* aux = list->head;
		for (int i = 0; i < position - 1; i++) {
			aux = aux->next;
		}
		node->next = aux->next;
		aux->next = node;
		list->num_nodes++;
	}
}

int removeFront(List* list) {
	if (list == NULL) {
		return -2;	//Kind of 'error' value. Adjust if necessary.
	}
	if(isEmpty(list)) {
		return -1; //Kind of 'error' value. Adjust if necessary.
	}
	Node* aux = list->head;
	if(list->head == list->tail) {
		list->head = list->tail = NULL;
	}
	else if(!isEmpty(list)){
		list->head = list->head->next;
		aux->next = NULL;
	}
	list->num_nodes--;
	int value = aux->value;
	free(aux);
	return value;
}

int removeBack(List* list) {
	if (list == NULL) {
		return -2;	//Kind of 'error' value. Adjust if necessary.
	}
	if(isEmpty(list)) {
		return -1; //Kind of 'error' value. Adjust if necessary.
	}
	Node* aux = list->head;
	if(list->head == list->tail) {
		list->head = list->tail = NULL;
	}
	else if(!isEmpty(list)) {
		Node* scout = list->head;
		while (scout->next != list->tail) {
			scout = scout->next;
		}
		aux = list->tail;
		scout->next = NULL;
		list->tail = scout;
	}
	list->num_nodes--;
	int value = aux->value;
	free(aux);
	return value;
}

int removeFrom(List* list, int position) {
	if (list == NULL) {
		return -2;	//Kind of 'error' value. Adjust if necessary.
	}
	if(isEmpty(list)) {
		return -1; //Kind of 'error' value. Adjust if necessary.
	}
	if(position > list->num_nodes) {
		return -3; //Kind of 'error' value. Adjust if necessary. (smth like -9999999)
	}
	if(position == 0) {
		return removeFront(list);
	}
	else if(position == list->num_nodes - 1) {
		return removeBack(list);
	}
	else {
		Node* aux;
		Node* scout = list->head;
		for (int i = 0; i < position - 1; i++) {
			scout = scout->next;
		}
		aux = scout->next;
		scout->next = aux->next;
		aux->next = NULL;
		list->num_nodes--;
		int value = aux->value;
		free(aux);
		return value;
	}
}

bool isEmpty(List* list) {
	if (list == NULL) {
		return false;
	}
	if(list->head == NULL && list->tail == NULL) {
		return true;
	}
	return false;
}

int getFrom(List* list, int position){
	if (list == NULL) {
		return -2;	//Kind of 'error' value. Adjust if necessary.
	}
	if(position > list->num_nodes) {
		return -1;
	}
	Node* aux = list->head;
	for(int i = 0; i < position; i++) {
		aux = aux->next;
	}
	return aux->value;
}















