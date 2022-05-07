#include "LinkedList.h"

void LinkedList::push_back(int data)
{
	Node* newNode = new Node(data);

	if (head == nullptr)
	{
		head = newNode;
		return;
	}

	Node* temp = head;
	while (temp->next != nullptr)
	{
		temp = temp->next;
	}
	temp->next = newNode;
}

void LinkedList::print()
{
	if (head == nullptr) {
		std::cout << "List empty" << std::endl;
		return;
	}

	Node* temp = head;
	while (temp != nullptr)
	{
		std::cout << temp->data << ' ';
		temp = temp->next;
	}
	std::cout << '\n';
}
