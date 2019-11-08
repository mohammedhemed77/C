#include "stackLinkedBasedImplementation.cpp"

//user function
void display(int ele)
{
	cout<<"Element = "<<ele<<"\t";
}

int main()
{
    //declare variables
	Stack s;
	int returnEle,counter=0,sizeOfStack;
	intialStack(&s);


	cout<<"stack before any operation"<<endl;
	traverseStack(&display,&s);
	sizeOfStack=stackSize(&s);
    cout<<"\nstack size= "<<sizeOfStack<<endl;


	for(counter;counter<10;counter++)
	{
	    if(!(isFull(&s)))
	        push(rand()%10,&s);

	    cout<<"\nstack after push"<<endl;
        traverseStack(&display,&s);
        sizeOfStack=stackSize(&s);
        cout<<"\nstack size= "<<sizeOfStack<<endl;
	}


	clearStack(&s);
	cout<<"\nstack after clear"<<endl;
	traverseStack(&display,&s);
	sizeOfStack=stackSize(&s);
	cout<<"\nstack size= "<<sizeOfStack<<endl;

    if(!(isEmpty(&s)))
    {
        stackTop(&returnEle,&s);
        cout<<"\nstack top= "<<returnEle<<"\n";
    }

	counter=0;
	while(!(isEmpty(&s)))
	{
	    counter++;
	    pop(&returnEle,&s);
		cout<<"\npop:"<<counter<<"= "<<returnEle<<endl;

        cout<<"stack after pop"<<endl;
        traverseStack(&display,&s);
        sizeOfStack=stackSize(&s);
        cout<<"\nstack size= "<<sizeOfStack<<endl;
	}
	return 0;
}