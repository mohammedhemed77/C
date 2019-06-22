//factorial
#include <iostream>
using namespace std;
int fact (int );

int main ()
{
    int x=5;
    cout << "factorial of "<< x << " = " << fact(x);
    return 0;
}

int fact (int x)
{
    if (x==0)
        return 1;
    else
        return x*fact(x-1);
}