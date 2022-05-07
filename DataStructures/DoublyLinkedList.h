#ifndef DOUBLY_LINKED_LIST_H
#define DOUBLY_LINKED_LIST_H

#include "DoublyNode.h"

class DoublyLinkedList
{
	int m_data{ 0 };
	DoublyNode* m_head;

public:

	DoublyLinkedList()
		: m_head{ nullptr }
	{}

	void insert_at_head(int data);

	void print();

	void print_reverse();

};

#endif

