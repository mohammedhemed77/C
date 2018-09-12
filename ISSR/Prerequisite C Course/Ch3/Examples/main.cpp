#include <iostream>
using namespace std;

void page_62_Ex_2 (void);
void Page_63_Ex_3 (void);

int main()
{
    int select = 0;
    cout << "select the exercises that you want to run : ";
    cin >> select;

    switch (select)
    {
    case (1): page_62_Ex_2 (); break;
    case (2): Page_63_Ex_3(); break;
    default: cout << "Error";
    }

    return 0;
}


void page_62_Ex_2 (void)
{
    for (int line=1 ; line<=5 ; line++)
    {
        for (int space=3;space>=line-1;space--)
            cout << " ";
        for (int a=1;a<=2*line-1;a++)
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

*/

void Page_63_Ex_3 (void)
{
    cout << "+" << " ";
    for (int i=1;i<=5;i++)
        cout << i << " ";

    cout << endl;

    for (int x=1;x<=5;x++)
    {
        cout << x << " ";
        for (int y=1;y<=5;y++)
            cout << y+x << " ";

        cout << endl;
    }
    main();
}
