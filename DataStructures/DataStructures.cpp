#include "LinkedList.h"
#include "DoublyLinkedList.h"

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

void testDoublyLinkedList()
{
	DoublyLinkedList list;

	for (int i = 0; i < 10; i++)
	{
		list.insert_at_head(i);
	}

	list.print();
	list.print_reverse();
}

int main()
{
	//testLinkedList();
	testDoublyLinkedList();
	

	return 0;
}