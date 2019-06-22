//multiply by repeated addition
#include <iostream>
using namespace std;
int multiply (int ,int );

int main()
{
    int m=5 , n=3;
    cout << "result = " << multiply(m,n);
    return 0;
}

int multiply (int m, int n)
{
    if (n == 0)
        return 0;

    else if (n == 1)
        return m;

    else
        return m + multiply (m,n-1);
}
