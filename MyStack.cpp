#include "MyStack.h"

MyStack::MyStack():MyStack (20) {}

MyStack::MyStack(int size): _empty(-1), _top(-1)
{
		_full = size;
		_stack = new char[_full+1];
		_items = 0;
}

MyStack::~MyStack()
{
	if (isFull())
	{
		delete[] _stack;
	}
}

void MyStack::add(char ch)
{
	_stack[++_top] = ch;
	_items++;
}

char MyStack::get()
{
	if (!isEmpty())
	{
		_items--;
		return _stack[_top--];
	}
	return 0;
}

int MyStack::howManyChar()
{
	return _items;
}

bool MyStack::isFull()
{
	if (_top+1 ==_full)
	{
		return true;
	}
	return false;
}

bool MyStack::isEmpty()
{
	if (_top == _empty)
	{
		return true;
	}
	return false;
}

void MyStack::clear()
{
	_items = 0;
	_top = _empty;
}

char MyStack::lastIn()
{
	if (!isEmpty())
	{
		return _stack[_top];
	}
	return 0;
}

void MyStack::changeVolume(int size)
{
	
	char* newStack = new char[_full + size+1];
	for (int i = 0; i < _top+1; i++)
	{
		newStack[i] = _stack[i];
	}
	_top += size;
	delete[]_stack;
	_stack = newStack;

}
