#include <iostream>
using namespace std;

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