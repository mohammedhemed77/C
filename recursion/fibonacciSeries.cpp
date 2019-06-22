//Fibonacci series
#include <iostream>
using namespace std;
int rFibNum (int a, int b, int n);

int main()
{
    int firstFibNum;
    int secondFibNum;
    int nth;
    cout << "Enter the first Fibonacci number: ";
    cin >> firstFibNum;
    cout << "\nEnter the second Fibonacci number: ";
    cin >> secondFibNum;
    cout << "\nEnter the position of the desired Fibonacci number: ";
    cin >> nth;
    cout<<"\nThe Fibonacci number at position "<<nth<<" is: "<<rFibNum(firstFibNum, secondFibNum, nth);
    return 0;
}

int rFibNum (int a, int b, int n)
{
    if (n == 1)
        return a;

    else if (n == 2)
        return b;

    else
        return rFibNum(a, b, n - 1) + rFibNum(a, b, n - 2);
}
