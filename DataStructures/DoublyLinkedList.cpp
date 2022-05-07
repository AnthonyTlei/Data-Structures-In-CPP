#include "DoublyLinkedList.h"

void DoublyLinkedList::insert_at_head(int data)
{
	DoublyNode* newNode = new DoublyNode(data);

	if (m_head == nullptr)
	{
		m_head = newNode;
		return;
	}

	newNode->next = m_head;
	m_head->previous = newNode;
	m_head = newNode;
	
}

void DoublyLinkedList::print()
{
	DoublyNode* temp = m_head;

	if (temp == nullptr)
	{
		std::cout << "Empty List\n";
		return;
	}

	while (temp != nullptr)
	{
		std::cout << temp->data << ' ';
		temp = temp->next;
	}
	std::cout << '\n';
}

void DoublyLinkedList::print_reverse()
{
	DoublyNode* temp = m_head;

	if (temp == nullptr)
	{
		std::cout << "Empty List\n";
		return;
	}

	while (temp->next != nullptr) temp = temp->next;

	while (temp != nullptr)
	{
		std::cout << temp->data << ' ';
		temp = temp->previous;
	}
	std::cout << '\n';
}
