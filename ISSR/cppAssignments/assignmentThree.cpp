#include <iostream>
using namespace std;
void lecThree_Page8 ();
void lecThree_Page9 ();
void lecThree_Page12_Q1 ();
void lecThree_Page12_Q2_A ();
void lecThree_Page12_Q2_B ();

int main()
{
    int choose = 0;
    cout << "1- Lec 3 Page 8" << endl << "2- Lec 3 Page 9" << endl;
    cout << "3- Lec 3 Page 12 Q1" << endl << "4- Lec 3 Page 12 Q2 A" << endl << "5- Lec 3 Page 12 Q2 B" << endl;
    cout << "Choose Exercise that you want to run it : ";
    cin >> choose;

    if (choose == 1) lecThree_Page8 ();
    else if (choose == 2) lecThree_Page9 ();
    else if (choose == 3) lecThree_Page12_Q1 ();
    else if (choose == 4) lecThree_Page12_Q2_A ();
    else if (choose == 5) lecThree_Page12_Q2_B ();
    else cout << "Error !";
    return 0;
}


void lecThree_Page8 ()
{
    long number , result;
    cout << "Enter an integer number: ";
    cin >> number;
    result = number; //equal result with number that user entered

    if (result < 0) //if the result is negative
    result = -1* result ; //change the result to a positive result

    cout << "The absolute value of " << number << " is " << result << endl;
}

void lecThree_Page9 ()
{
    double hours = 0.0, wages = 0.0 , RATE = 0.0;

    cout << "pls enter the number of hours u worked & RATE: ";
    cin >> hours >> RATE;

    if (hours > 40.0) wages = 40.0 * RATE + 1.5 * RATE * (hours - 40.0);
    else wages = hours * RATE;

    cout <<"your wage is: "<< wages <<endl;
}

void lecThree_Page12_Q1 ()
{
    int checkNumber;
    cout << "Pls enter integer number : ";
    cin >> checkNumber;

    if (checkNumber == 0) cout << "This number neither even nor odd";
    else if ((checkNumber % 2) == 0) cout << "This number is even ";
    else cout << "This number is odd";
}

void lecThree_Page12_Q2_A ()
{
    cout << "This program is error " << endl;
    cout << "if score >= 60" << endl << "cout << \"passing\" << endl" << endl;
    cout << "Correction is by adding () in this phrase (score >= 60)" << endl;
    cout << "if (score >= 60)" << endl << "cout << \"passing\" << endl" << endl;
}

void lecThree_Page12_Q2_B ()
{
    int x;
    cout << "Enter an integer number: "; //this >> is error in cout
    cin >> x; //this << is error in cin

    if(x == 100) cout << "This number is equal 100\n"; //there is no ; after if
    else if(x > 100) cout << "This number is greater than 100\n";
    else if(x < 100) cout << "This number is less than 100\n";
} //there is no ; after }
