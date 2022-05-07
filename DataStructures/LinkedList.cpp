#include "LinkedList.h"

void LinkedList::push_back(int data)
{
	Node* newNode = new Node(data);

	if (m_head == nullptr)
	{
		m_head = newNode;
		return;
	}

	Node* temp = m_head;
	while (temp->next != nullptr)
	{
		temp = temp->next;
	}
	temp->next = newNode;

	++m_size;
}

void LinkedList::insert_at_begin(int data)
{
	Node* newNode = new Node(data);

	newNode->next = m_head;
	m_head = newNode;

	++m_size;
}

void LinkedList::insert_at_index(int index, int data)
{

	if (index == 0) 
	{
		LinkedList::insert_at_begin(data);
		return;
	}

	if (index > m_size)
	{
		std::cout << "Index cannot be greater than the size of the List\n";
		return;
	}

	Node* newNode = new Node(data);
	Node* temp = m_head;

	for (int i=0; i < index-1; ++i) 
	{
		temp = temp->next;
	}

	if (temp == nullptr)
	{
		std::cout << "Index greater than size of the list\n";
		return;
	}

	newNode->next = temp->next;
	temp->next = newNode;

	++m_size;
}

void LinkedList::delete_at_index(int index)
{
	Node* temp = m_head;
	if (index == 0)
	{
		m_head = m_head->next;
		delete temp;
		--m_size;
		return;
	}

	if (index > m_size-1)
	{
		std::cout << "Index cannot be greater than the size of the List\n";
		return;
	}

	if (index == m_size-1)
	{
		Node* temp = m_head;
		Node* deleted = m_head;
		for (int i = 0; i < index - 1; ++i)
		{
			temp = temp->next;
		}
		deleted = temp->next;
		temp->next = nullptr;
		delete deleted;
		--m_size;
		return;
	}

	if (index < 0)
	{
		std::cout << "Invalid Index\n";
		return;
	}
	
	Node* deleted = m_head;
	for (int i = 0; i < index - 1; ++i)
	{
		temp = temp->next;
	}

	deleted = temp->next;

	temp->next = temp->next->next;

	delete deleted;

	--m_size;
}

void LinkedList::reverse_iterative()
{
	if (m_head == nullptr)
	{
		std::cout << "Cannot reverse empty list\n";
		return;
	}

	Node* temp = m_head;
	Node* previous = nullptr;
	Node* next = m_head->next;

	while (temp->next != nullptr)
	{
		temp->next = previous;
		previous = temp;
		temp = next;
		next = next->next;
	}

	temp->next = previous;
	m_head = temp;

}

void LinkedList::reverse_recursive(Node* p)
{
	if (p->next == nullptr)
	{
		m_head = p;
		return;
	}

	reverse_recursive(p->next);
	Node* n = p->next;
	n->next = p;
	p->next = nullptr;
}

void LinkedList::print()
{
	if (m_head == nullptr) {
		std::cout << "List empty" << std::endl;
		return;
	}

	Node* temp = m_head;
	while (temp != nullptr)
	{
		std::cout << temp->data << ' ';
		temp = temp->next;
	}
	std::cout << '\n';
}

void LinkedList::print_recursive(const Node* node)
{
	if (node == nullptr) return;
	std::cout << node->data << ' ';
	print_recursive(node->next);
}

void LinkedList::print_recursive_reverse(const Node* node)
{
	if (node == nullptr) return;
	print_recursive_reverse(node->next);
	std::cout << node->data << ' ';
}
