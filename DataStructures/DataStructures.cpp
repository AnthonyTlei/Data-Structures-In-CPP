#include "LinkedList.h"

#include <iostream>

void testLinkedList()
{
	LinkedList list;

	for (int i = 0; i < 5; i++)
	{
		list.push_back(i);
	}

	list.print();
}

int main()
{
	

	

	return 0;
}