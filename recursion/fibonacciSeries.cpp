//Fibonacci series
#include <iostream>
using namespace std;
int calcFib(int, int, int );

int main()
{
    int num1;
    int num2;
    int pos;
    cout << "Enter the first Fibonacci number: "; cin >> num1;
    cout << "\nEnter the second Fibonacci number: "; cin >> num2;
    cout << "\nEnter the position of the desired Fibonacci number: "; cin >> pos;

    cout<<"\nThe Fibonacci number at position "<< pos <<" is: "<< calcFib(num1, num2, pos) << endl;
    return 0;
}

int calcFib(int num1, int num2, int pos)
{
    if (pos == 1)
        return num1;

    else if (pos == 2)
        return num2;

    else
        return calcFib(num1, num2, pos-1) + calcFib(num1, num2, pos-2);
}
