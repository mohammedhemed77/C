#include <math.h>
#include "stackArrayBasedImplementation.cpp"

//check char that send is in between 0 and 9
bool isDigit(char c)
{
    return (c>='0'&&c<='9');
}

double oper(double opOne,double opTwo,char operand)
{
	switch (operand)
	{
        case '+': return opOne+opTwo;		break;
        case '-': return opOne-opTwo;		break;
        case '*': return opOne*opTwo;		break;
        case '/': return opOne/opTwo;		break;
        case '^': return pow(opOne,opTwo);	break;
	}
}

double evaluate(char *postfix)
{
	char ele;
	int i=0;
	double opOne, opTwo, val=0;

	Stack s;
	initialStack(&s);

 	for(i;(ele=*(postfix+i))!='\0';i++)
		if (isDigit(ele))
			push((double)ele-'0',&s); //minus 0 ascii code and cast to double

		else
		{
			pop(&opTwo,&s);
			pop(&opOne,&s);
			val=oper(opOne,opTwo,ele);
			push(val,&s);
		}
	pop (&val,&s);
	return val;
}
