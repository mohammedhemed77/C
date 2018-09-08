#include <iostream>
using namespace std;
int main ()
{
 int x , counter = 0;
    int r [8] = {0,0,0,0,0,0,0,0};
    cout << "enter the number : ";
    cin >> x;

    while (x != 0)
    {
        r[counter] = x % 2;
        x /= 2;
        counter++;
    }

    for (int c = 7 ; c >= 0 ; c--)
        cout << r[c];
}