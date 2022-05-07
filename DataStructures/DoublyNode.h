#ifndef DOUBLY_NODE_H
#define DOUBLY_NODE_H

#include "Node.h"

class DoublyNode
{

public:

	int data;
	DoublyNode* previous;
	DoublyNode* next;

	DoublyNode()
		:data{0}, next{nullptr}, previous{nullptr}
	{}

	DoublyNode(int d)
		:data{ d }, next{ nullptr },previous{nullptr}
	{}
};

#endif