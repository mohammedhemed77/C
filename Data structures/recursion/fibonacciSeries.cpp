//Fibonacci series calculation
#include <iostream>
using namespace std;
int fibSeriesCalc(int );

int main()
{
    int num;
    cout<<"Enter the Fibonacci number: "; cin>>num;
    cout<<"\nResult = "<<fibSeriesCalc(num);
    return 0;
}

int fibSeriesCalc(int num)
{
    int first=0, sec=1, current;

    if(num<=0)
        return 0;

    else if(num==1)
        return 1;

    else //num here equal 2 or more so i start with 2
        {
            for(int i=2;i<=num;i++)
            {
                current=first+sec;
                first=sec;
                sec=current;
            }
            return current;
        }
}
