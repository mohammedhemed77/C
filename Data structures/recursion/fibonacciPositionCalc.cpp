//Fibonacci position calculation
#include <iostream>
using namespace std;
int calcFibPos(int, int, int );

int main()
{
    int num1;
    int num2;
    int pos;
    cout<<"Enter the first Fibonacci number: "; cin>>num1;
    cout<<"\nEnter the second Fibonacci number: "; cin>>num2;
    cout<<"\nEnter the position of the desired Fibonacci number: "; cin>>pos;

    cout<<"\nThe Fibonacci number at position "<< pos <<" is: "<< calcFibPos(num1, num2, pos) << endl;
    return 0;
}

int calcFibPos(int num1, int num2, int pos)
{
    if(pos<0)
        return 0;

    else if(pos==1)
        return num1;

    else if(pos==2)
        return num2;

    else
        return calcFibPos(num1, num2, pos-1) + calcFibPos(num1, num2, pos-2);
}
