#ifndef LIST_H
#define LIST_H

#include <stdbool.h>
#include "../Node.h"

typedef struct List {
	Node* head;
	Node* tail;
	int num_nodes;
} List;


/**
	Create a list
	@return Pointer to the created list.
**/
List* createList();

/**
	Insert an element at the front
	@param list: Pointer to the list
	@param value: Value to store
	@return true if success, false otherwise
**/
bool insertFront(List* list, int value);

/**
	Insert an element at the back
	@param list: Pointer to the list
	@param value: Value to store
	@return true if success, false otherwise
**/
bool insertBack(List* list, int value);

/**
	Insert an element at a given position
	@param list: Pointer to the list
	@param position: Position where the value will be stored
	@param value: Value to store
	@return true if success, false otherwise
**/
bool insertAt(List* list, int position, int value);

/**
	Remove an element from the front.
	@param list: Pointer to the list
	@param value: Value to store
**/
int removeFront(List* list);

/**
	Removes an element from the back.
	@param list: Pointer to the list
	@return Removed value
**/
int removeBack(List* list);

/**
	Remove an element from the given position
	@param list: Pointer to the list
	@param position: Position where the value will be removed.
	@return Removed value
**/
int removeFrom(List* list, int position);

/** 
	Determine if the list is empty
	@param list: Pointer to the list
	@return Removed value
**/
bool isEmpty(List* list);

/** 
	Get the value from a given position
	@param list: Pointer to the list
	@param position: Position where the value will be retrieved
	@return: Stored value
**/
int getFrom(List* list, int position);

//getFront
//getBack
//empty

#endif