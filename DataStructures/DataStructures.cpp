#include "LinkedList.h"

#include <iostream>

void testLinkedList()
{
	LinkedList list;

	for (int i = 0; i < 10; i++)
	{
		list.push_back(i);
	}
	list.print();

	list.reverse_recursive(list.head());

	list.print();

}

int main()
{
	testLinkedList();

	

	return 0;
}