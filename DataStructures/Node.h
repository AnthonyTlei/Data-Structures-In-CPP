#ifndef NODE_H
#define NODE_H

#include <iostream>

class Node
{
public:

	int data;
	Node* next;

	Node()
		:data{0}, next{nullptr}
	{}

	Node(int d)
		:data{d}, next{nullptr}
	{}
};

#endif