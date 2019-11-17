//Fibonacci position calculation
#include "fibonacciPositionCalc.cpp"

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
