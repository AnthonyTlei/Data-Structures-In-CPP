#ifndef STACK_H
#define STACK_H

class Stack
{
public:

	virtual bool isEmpty() = 0;
	virtual int top() = 0;
	virtual void push(int) = 0;
	virtual void pop() = 0;
	virtual void print() = 0;

	virtual ~Stack() {}

};

#endif