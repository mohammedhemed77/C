#includes <iostream>
using namespace std;

int main()
{
float arr [50];
    float sum = 0.0, x = 0.0;

    for (int i = 0 ; i < 50 ; i++)
    {
        arr [i] = i;
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int c = 0 ; c < 50 ; c++)
        sum += arr[c];

    cout << "Sum : " << sum << endl;
    cout << "Average : " << sum/50 << endl;

    x = arr[49];
    arr[49] = arr[0];
    arr[0] = x;

    for (int i = 0 ; i < 50 ; i++)
    {
        cout << arr[i] << " ";
    }
}