#include "LinkedList.h"
#include "DoublyLinkedList.h"
#include "LinkedListStack.h"

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

void testStack()
{
	LinkedListStack stack;
	for (int i = 0; i < 5; i++)
	{
		stack.push(i);
	}
	stack.print();
	stack.pop();
	stack.print();
	std::cout << stack.top() << '\n';
}

int main()
{
	//testLinkedList();
	//testDoublyLinkedList();
	testStack();
	

	return 0;
}