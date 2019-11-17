#include "towerOfHanoi.cpp"

int main()
{
    int diskNo, start=1, finish=3, temp=2;
    cout<<"Enter number of disks: ";
    cin>>diskNo;
    moveDisks(diskNo,start,finish,temp);
    return 0;
}
