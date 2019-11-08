#include <iostream>
using namespace std;
#define MAXSTACK 100

//stack structure
struct Stack
{
	double entry[MAXSTACK];
	int top;
};

//access mechanism
void initialStack(Stack *ptr)
{
	ptr->top=0;
}

//return size of stack
int stackSize(Stack *ptr)
{
	return ptr->top;
}

bool isFull(Stack *ptr)
{
	/*simple statement
	if (ptr->top==MAXSTACK)
	    return 1;
	else
	    return 0;*/
	return (ptr->top==MAXSTACK);
}

bool isEmpty(Stack *ptr)
{
	/*simple statement
	if(ptr->top==0)
	    return 1;
	else
	    return 0;*/
	return !(ptr->top);
}

//put element in stack
void push(double ele,Stack *ptr)
{
	/*simple statement
	ptr->entry[ptr->top]=ele;
	ptr->top++;*/
	ptr->entry[ptr->top++]=ele;
}

//get top element from stack
void pop(double *ele,Stack *ptr)
{
	/*(--) because when we push element
	we increment (top) so (top) have address of element that will come
	not last element

	simple statement
	ptr->top--;
	*ele=ptr->entry[ptr->top];*/

	*ele=(ptr->entry[--ptr->top]);
}

//make reset to stack
void clearStack(Stack *ptr)
{
	ptr->top=0;
	/*if user check that (stackEmpty) it will true
	because address in (top) will be zero
	but all data still in (entry) array but user can not access*/
}

//get top element without change in stack
void stackTop(double *ele,Stack *ptr)
{
	*ele=ptr->entry[ptr->top-1];
	/*why (top-1):
		because when we push element
		we increment (top) so (top) have address of element that will come
		not last element*/
}

void traverseStack(void(*pf)(double),Stack *ptr)
{
	for(int i=ptr->top;i>0;i--)
		(*pf)(ptr->entry[i-1]);
	/*why (i-1) in (*pf)(ptr->entry[i-1]);
	because (top) start with element that will come in future
	so we minus 1 to get last element push in stack*/
}