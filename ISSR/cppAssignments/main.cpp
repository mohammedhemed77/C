#include <iostream>
using namespace std;
void questionOne();
void questionTwo();
void questionThree();

int main()
{
    //assignment one
    cout << "1- " << "\nHello world!" << endl;
    cout << "2- " << "\tHello world!" << endl;
    cout << "3- " << "\aHello world!" << endl;
    cout << "4- " << "Hello \b world!" << endl;
    cout << "5- " << "\rHello world!" << endl;
    cout << "6- " << "\\Hello world!" << endl;
    cout << "7- " << "\'Hello world!" << endl;
    cout << "8- " << "\"Hello world!" << endl;

    //assignment two
    questionOne();
    questionTwo();
    questionThree();
    return 0;
}

void questionOne()
{
    int x = 5;
    int y = 7;
    cout << x + y << " " << x * y;
    cout << endl;
}

void questionTwo()
{
    cout << "Hello World \n";
}

void questionThree()
{
    cout << "\"Run, Spot, run,\" she said.";
}
