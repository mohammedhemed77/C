//factorial
#include <iostream>
using namespace std;
int fact (int );

int main ()
{
    int x;
    cout << "Enter number that you want to get factorial: "; cin >> x;
    cout << "Factorial of "<< x << " = " << fact(x);
    return 0;
}

int fact (int x)
{
    if (x==0 || x==1)
        return 1;
    else
        return x*fact(x-1);
}
