#include <iostream>
#include<cstdlib> //rand() function
using namespace std;
#define MAXQUEUE 10

struct Queue
{
	int frontOfQueue;
	int rearOfQueue;
	int sizeOfQueue;
	int entry[MAXQUEUE];
};

void initialQueue(Queue *ptr)
{
	ptr->frontOfQueue=0;
	ptr->rearOfQueue=-1;
	ptr->sizeOfQueue=0;
}

void append(int ele,Queue *ptr)
{
	/*simple statement
	if(ptr->rearOfQueue==MAXQUEUE-1)
		ptr->rearOfQueue=0;
	else
		ptr->rearOfQueue++;*/

	/*if rearOfQueue++<MAXQUEUE result is rearOfQueue
	if rearOfQueue++==MAXQUEUE result is zero*/
	ptr->rearOfQueue=(ptr->rearOfQueue+1)%MAXQUEUE;

	ptr->entry[ptr->rearOfQueue]=ele; //put elemet in array
	ptr->sizeOfQueue++;
}

void serve(int *ele,Queue *ptr)
{
	*ele=ptr->entry[ptr->frontOfQueue];
	ptr->frontOfQueue=(ptr->frontOfQueue+1)%MAXQUEUE;
	ptr->sizeOfQueue--;
}

bool isFull(Queue *ptr)
{
	return (ptr->sizeOfQueue==MAXQUEUE);
}

bool isEmpty(Queue *ptr)
{
	return !(ptr->sizeOfQueue);
}

int queueSize(Queue *ptr)
{
	return ptr->sizeOfQueue;
}

void clearQueue(Queue *ptr)
{
	ptr->frontOfQueue=0;
	ptr->rearOfQueue=-1;
	ptr->sizeOfQueue=0;
}

void traverseQueue(void(*pf)(int),Queue *ptr)
{
	int pos,s;

	/*we can use another way for iteration
	stop iteration when (pos==ptr->rearOfQueue)*/
	for(pos=(ptr->frontOfQueue),s=0;s<(ptr->sizeOfQueue);s++) //iterating until (s1)==MAXQUEUE
	{
		(*pf)(ptr->entry[pos]);
		pos=(pos+1)%MAXQUEUE;
	}
}
