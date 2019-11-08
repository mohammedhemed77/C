#include <iostream>
using namespace std;

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