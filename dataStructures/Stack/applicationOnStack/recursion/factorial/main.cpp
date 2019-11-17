//factorial
#include "factorial.cpp"

int main ()
{
    int x;
    cout << "Enter number that you want to get factorial: ";
    cin >> x;
    cout << "Factorial of "<< x << " = " << firstVersion(x)<<endl;
    cout << "Factorial of "<< x << " = " << secondVersionSmarter(x)<<endl;
    cout << "Factorial of "<< x << " = " << fact(x)<<endl;

    return 0;
}
