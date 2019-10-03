#pragma once

#include<iostream>
#include"Node.h"

using namespace std;
class cstack
{
protected:
	cnode* top;

public:

	cstack() : top(NULL) {}

	cstack(cnode*& ptr) : top(ptr)
	{
		top->next = NULL;
		ptr = NULL;
	}


	cstack(const cstack& src)
	{
		this->top = src.top;
		if (src.top)
		{
			cnode* sptr, * dptr;
			dptr = top = new cnode(*src.top);
			sptr = src.top->next;
			while (sptr)
			{
				dptr->next = new cnode(*sptr);
				sptr = sptr->next;
				dptr = dptr->next;

			}
			dptr->next = NULL;

		}
	}

	cstack& operator = (const cstack& obj)
	{
		if (this == &obj)
		{
			return *this;
		}
		if (true)
		{
			cstack temp;
			temp.top = top;

		}
		if (true)
		{
			cstack temp = obj;
			top = temp.top;
			temp.top = NULL;
			return *this;
		}
	}

	bool isNotEmpty() const
	{
		if (top)
		{
			return true;
		}
		else
		{
			return false;
		}

	}
	bool isEmpty() const
	{
		if (top)
		{
			return false;
		}
		else
		{
			return true;
		}

	}

	cstack& push(cnode*& ptr)
	{
		ptr->next = top;
		top = ptr;
		ptr = NULL;
		return *this;
	}

	cnode* pop()
	{
		cnode* ptr = top;
		top = top->next;
		ptr->next = NULL;
		return ptr;
	}

	void print() const
	{
		if (!top)
		{
			cout << "the following structure is empty " << endl;
		}
		else
		{
			cnode* ptr = top;
			while (ptr)
			{
				ptr->print();
				ptr = ptr->next;
			}
		}

	}

	~cstack()
	{
		cnode* ptr = top;
		while (ptr)
		{
			ptr = ptr->next;
			delete top;
			top = ptr;
		}

	}


};