#include <iostream>
using namespace std;
int fact (int num);

int main()
{
    int num = 0;
    cout << "Enter number : ";
    cin >> num;
    int result = fact (num);
    cout <<"Fact = " << result;
    return 0;
}

int fact (int num)
{
    if (num == 1)
        return 1;
    else if (num == 0)
        return 1;
    return (num * fact(num - 1));
}
