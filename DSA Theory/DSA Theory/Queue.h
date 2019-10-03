#pragma once

#include<iostream>
#include"Stack.h"

using namespace std;


class cqueue : protected cstack
{
protected:
	cnode* tail;

public:

	cqueue() :tail(NULL) {}

	cqueue(cnode*& ptr) : cstack(ptr), tail(top) {}

	cqueue(const cqueue& src) :cstack((cstack&)src)
	{
		tail = top;
		while (tail)
		{
			if (!tail->next)
			{
				break;
			}
			tail = tail->next;
		}
	}


	cqueue& operator = (const cqueue& obj)
	{

		if (this == &obj)
		{
			return *this;
		}
		if (true)
		{
			cqueue temp;
			temp.top = top;
			temp.tail = tail;

		}
		if (true)
		{
			cqueue temp = obj;
			top = temp.top;
			tail = temp.tail;
			temp.top = NULL;
			temp.tail = NULL;
		}
		return *this;
	}


	bool IsNotEmpty() const
	{
		return cstack::isNotEmpty();
	}

	bool IsEmpty() const
	{
		return cstack::isEmpty();
	}

	cqueue& add(cnode*& ptr)
	{
		if (tail)
		{
			tail->next = ptr;
			tail = tail->next;

		}
		else
		{
			tail = top = ptr;
		}

		tail->next = NULL;
		ptr = NULL;

		return *this;

	}



	cnode* remove()
	{
		if (!tail->next)
		{
			tail = NULL;

		}
		return cstack::pop();
	}

	void print()
	{
		cstack::print();
	}




};
