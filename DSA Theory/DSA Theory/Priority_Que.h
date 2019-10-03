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

	

	cPriorityQue* remove()
	{
		cqueue::remove();
	}

	void print()
	{
		cqueue::print();
	}



};
