#pragma once

#include<iostream>
#include"Queue.h"

using namespace std;


class cPriorityQue : public cqueue
{
public:
	cPriorityQue() {}

	cPriorityQue(cnode*& ptr) :cqueue(ptr) {}

	cPriorityQue(const cPriorityQue& src) :cqueue((cqueue&)src) {}
	//Declared a method to add node in the with priority
	cPriorityQue& add(cnode*& ptr)
	{
		if (!top)
		{
			top = tail = ptr;
			tail->next = NULL;
			ptr = NULL;
		}
		else if (top->getPriority() < ptr->getPriority())
		{
			cstack::push(ptr);
		}
		else if (tail->getPriority() >= ptr->getPriority())
		{
			cqueue::add(ptr);
		}
		else
		{
			cnode* rptr = top;

			while (rptr->getPriority() >= ptr->getPriority())
			{
				rptr = rptr->next;
			}
			ptr->next = rptr->next;
			rptr->next = ptr;
			ptr = NULL;
		}
		return *this;
		
	}

	cPriorityQue* remove()
	{
		cqueue::remove();
	}

	void print()
	{
		cqueue::print();
	}



};
