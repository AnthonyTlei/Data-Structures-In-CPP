#include "LinkedListStack.h"

bool LinkedListStack::isEmpty()
{
    return list->isEmpty();
}

int LinkedListStack::top()
{
    return list->head()->data;
}

void LinkedListStack::push(int node)
{
    list->insert_at_head(node);
}

void LinkedListStack::pop()
{
    list->delete_at_index(0);
}

void LinkedListStack::print()
{
    list->print();
}
