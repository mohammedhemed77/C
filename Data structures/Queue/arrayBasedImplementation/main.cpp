#include "queuesArrayBasedImplementation.cpp"

//user functions
void display(int ele)
{
	cout<<"Element = "<<ele<<"\t";
}

int main()
{
    //declare variables
    Queue q;
	int returnEle,counter=0,sizeOfQueue;
	initialQueue(&q);


	cout<<"Queue before any operation"<<endl;
	/*traverseQueue use to rotate to all elements in Queue by any function that user write
	we passing function address to passing elements in Queue to this address(function)*/
	traverseQueue(&display,&q);
	sizeOfQueue=queueSize(&q);
	cout<<"\nsize of queue= "<<sizeOfQueue<<endl;


	for(counter;counter<10;counter++)
	{
	    if(!(isFull(&q)))
	        append(rand()%10,&q);

        cout<<"\nqueue after append"<<endl;
        traverseQueue(&display,&q);
        sizeOfQueue=queueSize(&q);
        cout<<"\nsize of queue= "<<sizeOfQueue<<endl;
	}


/*	clearQueue(&q);
	cout<<"\nqueue after clear"<<endl;
	traverseQueue(&display,&q);
    sizeOfQueue=queueSize(&q);
    cout<<"\nsize of queue= "<<sizeOfQueue<<endl;

    if(!(isEmpty(&q)))
    {
        queueTop(&returnEle,&q);
        cout<<"\nqueue top= "<<returnEle<<"\n";
    }*/

	counter=0;
	while(!(isEmpty(&q)))
	{
	    counter++;
	    serve(&returnEle,&q);
		cout<<"\nserve:"<<counter<<"= "<<returnEle<<endl;

        cout<<"queue after serve"<<endl;
        traverseQueue(&display,&q);
        sizeOfQueue=queueSize(&q);
        cout<<"\nsize of queue= "<<sizeOfQueue<<endl;
	}
	return 0;
}
