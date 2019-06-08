#include <iostream>
int dayCoding (int,int,int);
void calc (int,int,int,int,int,int,int);
using namespace std;

int main()
{
    char again = 'y';
    //this date must be date of first day in shift
    long int refDay=5, refMon=6, refYear=2019;
    long int s1Day,s2Day,h1Day,h2Day,h3Day,h4Day;
    long int day,mon,year;

    //calculate code of all shifts & holidays
    s1Day = dayCoding (refDay,refMon,refYear);
    refDay++;

    s2Day = dayCoding (refDay,refMon,refYear);
    refDay++;

    h1Day = dayCoding (refDay,refMon,refYear);
    refDay++;

    h2Day = dayCoding (refDay,refMon,refYear);
    refDay++;

    h3Day = dayCoding (refDay,refMon,refYear);
    refDay++;

    h4Day = dayCoding (refDay,refMon,refYear);

    while (again=='y' || again=='Y')
    {
        cout << "Enter day : "; cin >> day;
        cout << "Enter month : "; cin >> mon;
        cout << "Enter year : "; cin >> year;

        day = dayCoding (day,mon,year);
        calc (day,s1Day,s2Day,h1Day,h2Day,h3Day,h4Day);
        cout << endl << "Do you want to try again ? y/n : ";
        cin >> again;
    }
    return 0;
}

//calculate code of any date passing
int dayCoding (int day, int mon, int year)
{
    mon--; //minus one month because it adding days to month before
    while (year!=0)
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

void calc (int day, int s1Day, int s2Day, int h1Day, int h2Day, int h3Day, int h4Day)
{
    while (day>h4Day) day-=6;
    while (day<s1Day) day+=6;

    if (day==s1Day) cout << "First day shift";
    else if (day==s2Day) cout << "Second day shift";
    else if (day==h1Day) cout << "First day holiday";
    else if (day==h2Day) cout << "Second day holiday";
    else if (day==h3Day) cout << "Third day holiday";
    else if (day==h4Day) cout << "Fourth day holiday";
}
