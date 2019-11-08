#include <iostream>
#include<cstdlib> //rand() function
using namespace std;

struct queueNode
{
	int entry;
	queueNode *next;
};

struct Queue
{
	queueNode *frontOfQueue;
	queueNode *rearOfQueue;
	int sizeOfQueue;
};

void intialQueue(Queue *ptr)
{
	ptr->frontOfQueue=NULL;
	ptr->rearOfQueue=NULL;
	ptr->sizeOfQueue=0;
}

void append(int ele,Queue *ptr)
{
	//create new node where (ele) in (entry) and (next) point to NULL
	queueNode *temPtr=(queueNode *)malloc(sizeof(queueNode));
	temPtr->next=NULL;
	temPtr->entry=ele;
	
	//special case when queue is empty
	if(!ptr->rearOfQueue) //if rearOfQueue point to NULL make frontOfQueue point to new node
		ptr->frontOfQueue=temPtr; //1
	else
		ptr->rearOfQueue->next=temPtr;
	
	ptr->rearOfQueue=temPtr;//2
	//from 1 & 2 we make frontOfQueue & rearOfQueue point to new node
	ptr->sizeOfQueue++;
}

void serve(int *ele,Queue *ptr)
{
	queueNode temPtr=ptr->frontOfQueue;
	*ele=temPtr->entry; //put element in (*ele)
	
	ptr->frontOfQueue=temPtr->next;
	free(temPtr);
	
	//special case when queue have one node
	if(!ptr->front) //if frontOfQueue point to NULL means that queue became empty
		ptr->rearOfQueue=NULL; //make rearOfQueue point to NULL
	
	ptr->sizeOfQueue--;
}

bool isFull(Queue *ptr)
{
	return 0;
}

bool isEmpty(Queue *ptr)
{
	/*all this returns are correct 
	return !(ptr->frontOfQueue);
	return !(ptr->rearOfQueue);*/
	
	return !(ptr->sizeOfQueue);
}

int queueSize(Queue *ptr)
{
	return ptr->sizeOfQueue;
}

void clearQueue(Queue *ptr)
{
	while(ptr->frontOfQueue)
	{
		ptr->rearOfQueue=ptr->frontOfQueue->next;
		free(ptr->frontOfQueue);
		ptr->frontOfQueue=ptr->rearOfQueue;
	}
	ptr->sizeOfQueue=0;
}

void traverseQueue(void(*pf)(int),Queue *ptr)
{
	queueNode *temPtr=ptr->frontOfQueue;
	
	for(;temPtr;temPtr=temPtr->next)
		(*pf)(temPtr->entry);
}
