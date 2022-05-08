#ifndef LINKED_LIST_STACK_H
#define LINKED_LIST_STACK_H

#include "LinkedList.h"
#include "Stack.h"
#include <iostream>

class LinkedListStack : public Stack
{
	LinkedList* list;
	
public:

	LinkedListStack()
		: list{new LinkedList}
	{}

	bool isEmpty();
	int top();
	void push(int);
	void pop();
	void print();

	virtual ~LinkedListStack() { delete list; }

};


#endif
