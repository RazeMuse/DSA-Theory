#pragma once

#include<iostream>
using namespace std;
class cnode
{
	int data;
	int priority;
public:
	cnode* next;

	cnode()
	{
		data = 0;
		next = NULL;
		priority = 0;
	}

	cnode(int d) : data(d) , priority(0)
	{
		next = NULL;
	}

	int getData() const
	{
		return data;
	}

	void setData(int d)
	{
		this->data = d;
	}
	void setPriority(int p)
	{
		this->priority = p;
	}
	int getPriority()
	{
		return priority;
	}

	void print() const
	{
		cout << " The data is   " << data << "   and priority is " << priority << endl;
	}

};