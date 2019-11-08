#include <iostream>
using namespace std;

int fact(int x)
{
    return (x==0||x==1) ? 1 : x*fact(x-1);

    /*if (x==0 || x==1)
        return 1;
    else
        return x*fact(x-1);*/
}

int firstVersion(int n)
{
    int res=n;
    if(n==0||n==1)
        return 1;

    else if(n<0)
        return 0;

    else
        for(int i=1; i<n; i++)
            res*=(n-i);
        return res;
}

int secondVersionSmarter(int n)
{
    int res=1;
    if(n==0||n==1)
        return 1;

    else if(n<0)
        return 0;

    else
        for(n; n>1; n--)
            res*=n;
    return res;
}