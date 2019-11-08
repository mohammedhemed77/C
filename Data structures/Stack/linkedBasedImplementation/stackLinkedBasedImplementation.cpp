#include <iostream>
#include <stdlib.h> //NULL
#include<cstdlib> //rand() function
using namespace std;

//structure
struct stackNode
{
	int entry;
	stackNode *next;
};

struct Stack
{
	stackNode *top;
	int sizeOfStack;
};

//access mechanism
void initialStack(Stack *ptr)
{
	ptr->top=NULL;
	ptr->sizeOfStack=0;
}

int stackSize(Stack *ptr)
{
	return ptr->sizeOfStack;
}

bool isFull(Stack *ptr)
{
	return 0;
}

bool isEmpty(Stack *ptr)
{
	return !(ptr->top);
}

void push(int ele,Stack *ptr)
{
	stackNode *temPtr=(stackNode *)malloc(sizeof(stackNode)); //allocate memory size of (stackNode) that contain (pointer and variable) but (malloc) return void pointer so we cast it to (stackNode) type and put this in (temp) pointer
	temPtr->entry=ele; //put element in node using (temp) pointer
	temPtr->next=ptr->top; //make (next) pointer pointing to what (top) pointer pointed
	ptr->top=temPtr; //make (top) pointer pointing to the newest node that create now using (temp) pointer
	ptr->sizeOfStack++;
}

void pop(int *ele,Stack *ptr)
{
	stackNode *temPtr=ptr->top; //create (temp) pointer that point to what (top) pointer pointed
	*ele=ptr->top->entry; //use (top) pointer to put variable (entry) in address of variable that user pass to function
	ptr->top=ptr->top->next; //make (top) pointer pointing to what (next) pointer pointed
	free(temPtr); //make address that (temp) pointer point to available [free]
	ptr->sizeOfStack--;
}

void clearStack(Stack *ptr)
{
	stackNode *temPtr=ptr->top; //make (temp) pointer point to what (top) pointer pointed
	while(temPtr)
	{
		temPtr=temPtr->next; //make (temp) pointer point to next node
		free(ptr->top); //free memory that pointer (top) point to
		ptr->top=temPtr; //make (top) pointer point to next node that became the first node that pointer (temp) pointed to
	}
	ptr->sizeOfStack=0;
}

void stackTop(int *ele,Stack *ptr)
{
	*ele=ptr->top->entry;
}

void traverseStack(void(*pf)(int),Stack *ptr)
{
    stackNode *temPtr=ptr->top;
    while (temPtr)
    {
        (*pf)(temPtr->entry);
        temPtr=temPtr->next;
    }
}