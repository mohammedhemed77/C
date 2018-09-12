#include <iostream>
using namespace std;

void Page_68_Ex_17 (void);
void Page_69_Ex_20 (void);

int main()
{
    int select = 0;
    cout << "select the exercises that you want to run : ";
    cin >> select;

    switch (select)
    {
    case (1): Page_69_Ex_20 (); break;
    case (2): Page_68_Ex_17 (); break;
    default: cout << "Error";
    }

    return 0;
}


void Page_68_Ex_17 (void)
{
    for (int line=5;line>=1;line--)
    {
        for (int space=5;space>line;space--)
            cout << " ";
        for (int x=1;x<=line;x++)
            cout << line << " ";

        cout << endl;
    }
    main();
}

void Page_69_Ex_20 (void)
{
    for (int l1=1;l1<=5;l1++)
    {
        for (int s1=1;s1<=5-l1;s1++)
            cout << " ";
        for (int a1=1;a1<=2*l1-1;a1++)
            cout << "*";

        cout << endl;
    }

    for (int l2=4;l2>=1;l2--)
    {
        for (int s2=5;s2>=l2+1;s2--)
            cout << " ";
        for (int a2=1;a2<=2*l2-1;a2++)
            cout << "*";

        cout << endl;
    }
    main();
}
/*
  Shape	    	   Lines		Spaces    Stars
    *                L1		      4 	    1
   ***               L2  	      3  	    3
  *****              L3		      2			5
 *******             L4  	      1		    7
*********            L5	          0		    9
 *******             L6  	      1		    7
  *****              L7		      2			5
   ***               L8  	      3  	    3
    *                L9		      4 	    1
*/
