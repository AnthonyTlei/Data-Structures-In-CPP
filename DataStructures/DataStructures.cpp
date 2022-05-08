#include "LinkedList.h"
#include "DoublyLinkedList.h"
#include "LinkedListStack.h"

#include <iostream>
#include <stack>

void reverseStringWithStack(char* arr, int n)
{
	std::stack<char> S;

	for (int i = 0; i < n; ++i)
	{
		S.push(arr[i]);
	}

	for (int i = 0; i < n; ++i)
	{
		arr[i] = S.top();
		S.pop();
	}
}

void reverseWithPointers(char* C)
{
	int left = 0;
	int right = strlen(C) - 1;

	while (left < right)
	{
		std::swap(C[left], C[right]);

		++left;
		--right;
	}
}

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

void testReverseWithStack()
{
	char C[51] = "Hello World";
	std::cout << C << '\n';
	reverseStringWithStack(C, strlen(C));
	std::cout << C << '\n';

	LinkedList list;
	for (int i = 0; i < 5; i++)
	{
		list.push_back(i);
	}
	list.print();

	list.reverse_with_stack();
	list.print();
}

void testReverseWithPointers()
{
	char C[51] = "Hello World";
	std::cout << C << '\n';
	reverseWithPointers(C);
	std::cout << C << '\n';
}

int main()
{
	//testLinkedList();
	//testDoublyLinkedList();
	//testStack();
	//testReverseWithStack();
	//testReverseWithPointers();
	

	return 0;
}