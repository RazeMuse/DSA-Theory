#include<iostream>
#include"Node.h"
#include"Stack.h"
#include"Queue.h"
#include"Priority_Que.h"

using namespace std;

int main()
{	//Declaring nodes and setting data and priority
	cnode* n1 = new cnode();
	n1->setData(20);
	n1->setPriority(4);
	cnode* n2 = new cnode();
	n2->setData(70);
	n2->setPriority(10);
	cnode* n3 = new cnode();
	n3->setData(100);
	n3->setPriority(1);

	//Adding nodes into priority queue
	cout << "Adding values to first queue " << endl;
	cPriorityQue q1;
	q1.add(n1);
	q1.add(n2);
	q1.add(n3);
	q1.print();
	cout << "From the second que " << endl;
	cPriorityQue q2(q1);
	q2.print();


	
	
	
	


}
