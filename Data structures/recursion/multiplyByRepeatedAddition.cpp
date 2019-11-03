//multiply by repeated addition
#include <iostream>
using namespace std;
int multiply(int ,int );

int main()
{
    int x, y;
    cout << "Enter two numbers: "; cin >> x >> y;
    cout << "result = " << multiply(x,y);
    return 0;
}

int multiply(int x, int y)
{
    if (x == 0 || y==0)
        return 0;

    else if (x==1)
        return y;

    else if (y==1)
        return x;

    else
        return x + multiply(x,y-1);
}
