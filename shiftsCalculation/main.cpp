#include <iostream>
long long dayCoding (long long &,long long &,long long &);
void calc (long long &,long long &,long long &,long long &,long long &,long long &,long long &);
void calcDay (long long &);

using namespace std;

int main ()
{
    char again = 'y';
    //this date must be date of first day in shift
    long long refDay=5, refMon=6, refYear=2019;
    long long s1Day,s2Day,h1Day,h2Day,h3Day,h4Day;
    long long day,mon,year;

    //calculate code of all shifts & holidays
    s1Day = dayCoding (refDay,refMon,refYear);
    s2Day = s1Day + 1;
    h1Day = s1Day + 2;
    h2Day = s1Day + 3;
    h3Day = s1Day + 4;
    h4Day = s1Day + 5;

    while (again=='y' || again=='Y')
    {
        cout << "Enter day: "; cin >> day;
        cout << "Enter month: "; cin >> mon;
        cout << "Enter year: "; cin >> year;
        cout << "-------------------------------" << endl;

        if (day>31 || day<=0 || mon>12 || mon<=0 || year<=0)
            cout << "Error in entering date";
        else
        {
            day = dayCoding (day,mon,year);
            calcDay (day);
            calc (day,s1Day,s2Day,h1Day,h2Day,h3Day,h4Day);
        }

        cout << endl << "-------------------------------" << endl << "Do you want to try again ? y/n: ";
        cin >> again;
    }
    return 0;
}

//calculate code of any date passing
long long dayCoding (long long &day, long long &mon, long long &year)
{
    if (mon==1) //if month passed as January year minus by 1 and month became December
    {
        mon=12;
        year--;
    }
    else mon--; //minus one month because it adding days to month before

    while (year>0)
    {
        if (mon==1) day+=31;
        else if (mon==2 && year%4==0) day+=29;
        else if (mon==2 && year%4!=0) day+=28;
        else if (mon==3) day+=31;
        else if (mon==4) day+=30;
        else if (mon==5) day+=31;
        else if (mon==6) day+=30;
        else if (mon==7) day+=31;
        else if (mon==8) day+=31;
        else if (mon==9) day+=30;
        else if (mon==10) day+=31;
        else if (mon==11) day+=30;
        else if (mon==12) day+=31;
        if (mon==1)
        {
            mon=13;
            year--;
        }
        mon--;
    }
    return day;
}

void calc (long long &day, long long &s1Day, long long &s2Day, long long &h1Day, long long &h2Day, long long &h3Day, long long &h4Day)
{
    while (day>h4Day) day-=6;
    while (day<s1Day) day+=6;

    cout << "Work condition: ";
    if (day==s1Day) cout << "First day shift";
    else if (day==s2Day) cout << "Second day shift";
    else if (day==h1Day) cout << "First day holiday";
    else if (day==h2Day) cout << "Second day holiday";
    else if (day==h3Day) cout << "Third day holiday";
    else if (day==h4Day) cout << "Fourth day holiday";
    else cout << "Error in detect work condition";
}

void calcDay (long long &day)
{
    int temp=day%7;
    cout << "Day: ";

    switch (temp)
    {
        case 1: cout << "Sunday"; break;
        case 2: cout << "Monday"; break;
        case 3: cout << "Tuesday"; break;
        case 4: cout << "Wednesday"; break;
        case 5: cout << "Thursday"; break;
        case 6: cout << "Friday"; break;
        case 0:
        case 7: cout << "Saturday"; break;
        default : cout << "Error in detect day"; break;
    }
    cout << endl;
}
