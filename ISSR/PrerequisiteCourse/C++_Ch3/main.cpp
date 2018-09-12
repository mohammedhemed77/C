#include <iostream>
using namespace std;

void Page_64_Ex_1 (void);
void Page_64_Ex_2 (void);
void Page_64_Ex_3 (void);
void Page_65_Ex_4 (void);
void Page_65_Ex_5 (void);
void Page_65_Ex_6 (void);
void Page_66_Ex_7 (void);
void Page_66_Ex_8 (void);
void Page_67_Ex_9 (void);
void Page_67_Ex_10 (void);
void Page_67_Ex_11 (void);
void Page_67_Ex_12 (void);
void Page_67_Ex_13 (void);
void Page_68_Ex_14 (void);
void Page_68_Ex_15 (void);
void Page_68_Ex_16 (void);
void Page_68_Ex_17 (void);
void Page_69_Ex_18 (void);
void Page_69_Ex_19 (void);
void Page_69_Ex_20 (void);
void Page_70_Ex_21 (void);
void Page_70_Ex_22 (void);
void Page_70_Ex_23 (void);
void Page_71_Ex_24 (void);

int main()
{
    int select = 0;
    cout << "select the exercises that you want to run : ";
    cin >> select;

    switch (select)
    {
    case (1): Page_64_Ex_1 (); break;
    case (2): Page_64_Ex_2 (); break;
    case (3): Page_64_Ex_3 (); break;

    case (4): Page_65_Ex_4 (); break;
    case (5): Page_65_Ex_5 (); break;
    case (6): Page_65_Ex_6 (); break;

    case (7): Page_66_Ex_7 (); break;
    case (8): Page_66_Ex_8 (); break;

    case (9): Page_67_Ex_9 (); break;
    case (10): Page_67_Ex_10 (); break;
    case (11): Page_67_Ex_11 (); break;
    case (12): Page_67_Ex_12 (); break;
    case (13): Page_67_Ex_13 (); break;

    case (14): Page_68_Ex_14 (); break;
    case (15): Page_68_Ex_15 (); break;
    case (16): Page_68_Ex_16 (); break;
    case (17): Page_68_Ex_17 (); break;

    case (18): Page_69_Ex_18 (); break;
    case (19): Page_69_Ex_19 (); break;
    case (20): Page_69_Ex_20 (); break;

    case (21): Page_70_Ex_21 (); break;
    case (22): Page_70_Ex_22 (); break;
    case (23): Page_70_Ex_23 (); break;

    case (24): Page_71_Ex_24 (); break;

    default: cout << "Error";
    }

    return 0;
}


void Page_64_Ex_1 (void)
{
    cout << "_____________"  << endl << "Page_64_Ex_1" << endl << "_____________" << endl;
    main();
}

void Page_64_Ex_2 (void)
{
    cout << "_____________"  << endl << "Page_64_Ex_2" << endl << "_____________" << endl;
    main();
}

void Page_64_Ex_3 (void)
{
    cout << "_____________"  << endl << "Page_64_Ex_3" << endl << "_____________" << endl;
    main();
}

void Page_65_Ex_4 (void)
{
    cout << "_____________"  << endl << "Page_65_Ex_4" << endl << "_____________" << endl;
    main();
}

void Page_65_Ex_5 (void)
{
    cout << "_____________"  << endl << "Page_65_Ex_5" << endl << "_____________" << endl;
    main();
}

void Page_65_Ex_6 (void)
{
    cout << "_____________"  << endl << "Page_65_Ex_6" << endl << "_____________" << endl;
    main();
}

void Page_66_Ex_7 (void)
{
    cout << "_____________"  << endl << "Page_66_Ex_7" << endl << "_____________" << endl;
    main();
}

void Page_66_Ex_8 (void)
{
    cout << "_____________"  << endl << "Page_66_Ex_8" << endl << "_____________" << endl;
    main();
}

void Page_67_Ex_9 (void)
{
    cout << "_____________"  << endl << "Page_67_Ex_9" << endl << "_____________" << endl;
    main();
}

void Page_67_Ex_10 (void)
{
    cout << "_____________"  << endl << "Page_67_Ex_10" << endl << "_____________" << endl;
    main();
}

void Page_67_Ex_11 (void)
{
    cout << "_____________"  << endl << "Page_67_Ex_11" << endl << "_____________" << endl;
    main();
}

void Page_67_Ex_12 (void)
{
    cout << "_____________"  << endl << "Page_67_Ex_12" << endl << "_____________" << endl;
    main();
}

void Page_67_Ex_13 (void)
{
    cout << "_____________"  << endl << "Page_67_Ex_13" << endl << "_____________" << endl;
    main();
}

void Page_68_Ex_14 (void)
{
    cout << "_____________"  << endl << "Page_68_Ex_14" << endl << "_____________" << endl;
    main();
}

void Page_68_Ex_15 (void)
{
    cout << "_____________"  << endl << "Page_68_Ex_15" << endl << "_____________" << endl;
    main();
}

void Page_68_Ex_16 (void)
{
    cout << "_____________"  << endl << "Page_68_Ex_16" << endl << "_____________" << endl;
    main();
}

void Page_68_Ex_17 (void)
{
    cout << "_____________"  << endl << "Page_68_Ex_17" << endl << "_____________" << endl;
    for (int line=5 ; line>=1 ; line--)
    {
        for (int space=5 ; space>line ; space--)
            cout << " ";
        for (int x=1 ; x<=line ; x++)
            cout << line << " ";

        cout << endl;
    }
    main();
}

void Page_69_Ex_18 (void)
{
    cout << "_____________"  << endl << "Page_69_Ex_18" << endl << "_____________" << endl;
    main();
}

void Page_69_Ex_19 (void)
{
    cout << "_____________"  << endl << "Page_69_Ex_19" << endl << "_____________" << endl;
    main();
}

void Page_69_Ex_20 (void)
{
    cout << "_____________"  << endl << "Page_69_Ex_20" << endl << "_____________" << endl;
    for (int l1=1 ; l1<=5 ; l1++)
    {
        for (int s1=1 ; s1<=(5-l1) ; s1++)
            cout << " ";
        for (int a1=1 ; a1<=(2*l1-1) ; a1++)
            cout << "*";

        cout << endl;
    }

    for (int l2=4 ; l2>=1 ; l2--)
    {
        for (int s2=5 ; s2>=(l2+1) ; s2--)
            cout << " ";
        for (int a2=1 ; a2<=(2*l2-1) ; a2++)
            cout << "*";

        cout << endl;
    }
    main();
}

void Page_70_Ex_21 (void)
{
    cout << "_____________"  << endl << "Page_70_Ex_21" << endl << "_____________" << endl;
    main();
}

void Page_70_Ex_22 (void)
{
    cout << "_____________"  << endl << "Page_70_Ex_22" << endl << "_____________" << endl;
    main();
}

void Page_70_Ex_23 (void)
{
    cout << "_____________"  << endl << "Page_70_Ex_23" << endl << "_____________" << endl;
    main();
}

void Page_71_Ex_24 (void)
{
    cout << "_____________"  << endl << "Page_71_Ex_24" << endl << "_____________" << endl;
    main();
}
