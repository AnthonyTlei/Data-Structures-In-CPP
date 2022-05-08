#ifndef LINKED_LIST_H
#define LINKED_LIST_H

#include "Node.h"

#include <iostream>

class LinkedList
{
	Node* m_head;
	int m_size{ 1 };

public:

	LinkedList()
		: m_head{ nullptr }
	{}

	void push_back(int);

	void insert_at_head(int);

	void insert_at_index(int, int);

	void delete_at_index(int);

	void reverse_iterative();
	void reverse_recursive(Node*);

	const int size() const { return m_size; }
	const Node* head() const { return m_head; }
	Node* head() { return m_head; }

	void print();

	void print_recursive(const Node* node);
	
	void print_recursive_reverse(const Node* node);

	bool isEmpty();

	~LinkedList()
	{
		Node* current = m_head;
		Node* next;
		while (current != nullptr)
		{
			next = current->next;
			delete current;
			current = next;
		}
		m_head = nullptr;
	}
};

#endif