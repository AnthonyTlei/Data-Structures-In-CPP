#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h"

#include <iostream>

class LinkedList
{
	Node* head;

public:

	LinkedList()
		: head{ nullptr }
	{}

	void push_back(int);

	void print();

	~LinkedList()
	{
		Node* current = head;
		Node* next;
		while (current != nullptr)
		{
			next = current->next;
			delete current;
			current = next;
		}
		head = nullptr;
	}
};

#endif