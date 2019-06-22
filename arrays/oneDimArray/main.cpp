#include <iostream>
using namespace std;

void readArray (int arr[] , int sizeOfArr)
{
    cout << "enter " << sizeOfArr << " numbers : ";
    for (int i=0 ; i<sizeOfArr ; i++)
        cin >> arr[i];
}

int sumArray (int *arr , int sizeOfArr)
{
    int sum=0;
    for (int i=0 ; i<sizeOfArr ; i++)
        sum+=arr[i];

    return sum;
}

int averageArray (int *arr , int sizeOfArr)
{
    int ave=0;
    for (int i=0 ; i<sizeOfArr ; i++)
        ave+=arr[i];

    return ave/sizeOfArr;
}

void reverseArray (int *arr , int sizeOfArr)
{
    cout << "array in reverse is: ";

    for (int i=(sizeOfArr-1) ; i>= 0 ; i--)
        cout << arr[i] << " ";
}

string searchArr (int arr[] , int sizeOfArr , int searchItem)
{
    bool found=false;
    int counter=0;

    while (found==false && counter<sizeOfArr)
    {
        for (int i=0 ; i<sizeOfArr ; i++)
        {
            if (searchItem==arr[i])
                found=true;
            else
                counter++;
        }
    }
    if (found)
        return "this item is exist.";
    else
        return "this item is not exist.";
}

int main ()
{
    int sizeOfArr=5 , searchItem=0;
    int arr[sizeOfArr];

    //read array
    readArray (arr , sizeOfArr);

    //print sum of array
    cout << "sum of array = " << sumArray (arr , sizeOfArr) << endl;

    //print average of array
    cout << "average of array = " << averageArray (arr , sizeOfArr) << endl;

    //print reverse of array elements
    reverseArray(arr , sizeOfArr);

    //search item in array
    cout << "\nenter number to check if it in array: ";
    cin >> searchItem;
    cout << "result: " << searchArr(arr,sizeOfArr,searchItem);
    return 0;
}
