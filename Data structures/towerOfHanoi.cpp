#include <iostream>
using namespace std;

void moveDisks(int diskNo,int start,int finish,int temp)
{
    //first version
    /*if(diskNo>0)
    {
        moveDisks(diskNo-1,start,temp,finish);
        cout<<"Move disk number "<<diskNo
        <<" from "<<start<<" to "<<finish<<" using "<< temp<<endl;
        moveDisks(diskNo-1,temp,finish,start);
    }*/

//*************************************************************************************
//*************************************************************************************
//*************************************************************************************

    //smarter version
    /*this swap delete last recursion that made to transport disks from temp to finish
    function that need swap is top function not inner*/
    while(diskNo>0)
    {
        moveDisks(diskNo-1,start,temp,finish);
        cout<<"Move disk number "<<diskNo
            <<" from "<<start<<" to "<<finish<<" using "<<temp<<endl;

        diskNo--;
        start+=temp;
        temp=start-temp;
        start-=temp;
    }
}

int main()
{
    int diskNo, start=1, finish=3, temp=2;
    cout<<"Enter number of disks: ";
    cin>>diskNo;
    moveDisks(diskNo,start,finish,temp);
    return 0;
}
