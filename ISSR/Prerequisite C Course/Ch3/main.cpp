#include <iostream>
using namespace std;
void page_62_Ex_2 (void);

int main()
{
    int select = 0;
    cout << "select the exercises that you want to run : ";
    cin >> select;

    switch (select)
    {
    case (1): page_62_Ex_2 (); break;
    default: cout << "Error";
    }

    return 0;
}

void page_62_Ex_2 (void)
{
       for (int lines = 1 ; lines <= 5 ; lines++)
    {

        for (int spaces = 5-lines ; spaces >0 ;  spaces--) cout<<" ";

            for (int stars = 1 ; stars <= ((lines*2)-1) ; stars++) cout<<"*";

        cout << endl ;
    }
}
/*
  Shape	    	   Lines		Spaces    Stars
    *                L1		      4 	    1
   ***               L2  	      3  	    3
  *****              L3		      2			5
 *******             L4  	      1		    7
*********            L5	          0		    9
*/
