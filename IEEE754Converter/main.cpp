#include <iostream>
using namespace std;
void hexaToDecimal (char * , char *);
void binaryToDecimal (char *);

int main ()
{
    int chooseSystem = 0;
    char hexa [8];
    char binary [32];

    while (1)
    {
    cout << endl << endl << "1- Hexadecimal to decimal" << endl << "2- Binary to decimal" << endl;
    cout << "Choose system: ";
    cin >> chooseSystem;

    if (chooseSystem == 1)
    {
        cout << endl << "Welcome to conversion from hexadecimal to decimal" << endl;
        cout << "Enter 8 hexadecimal numbers: ";
        for (int i=0 ; i<8 ; i++)
            cin >> *(hexa + i);
        hexaToDecimal(hexa , binary);

        cout << endl << "Binary number = ";
        for (int y=0 ; y<32 ; y++) //display binary number
        {
            cout << binary[y];
            if (y==3 || y==7 || y==11 || y==15 || y==19 || y==23 || y==27 || y==31)
                cout << " "; //space after every 4 bits
        }
    }

    else if (chooseSystem == 2)
    {
        cout << endl << "Welcome to conversion from binary to decimal" << endl;
        cout << "Enter 32 binary numbers: ";
        for (int i=0 ; i<32 ; i++)
            cin >> *(binary + i);
        binaryToDecimal (binary);
    }

    else
        cout << "Error !";
    }
    return 0;
}


void hexaToDecimal (char *hexa , char *binary)
{
    char equ [4];
    int binaryBits = 0;
    for (int index=0 ; index<8 ; index++)
    {
        switch (*(hexa+index))
        {
            case '0':
                equ [0] = '0';
                equ [1] = '0';
                equ [2] = '0';
                equ [3] = '0';
                break;

            case '1':
                equ [0] = '0';
                equ [1] = '0';
                equ [2] = '0';
                equ [3] = '1';
                break;

            case '2':
                equ [0] = '0';
                equ [1] = '0';
                equ [2] = '1';
                equ [3] = '0';
                break;

            case '3':
                equ [0] = '0';
                equ [1] = '0';
                equ [2] = '1';
                equ [3] = '1';
                break;

            case '4':
                equ [0] = '0';
                equ [1] = '1';
                equ [2] = '0';
                equ [3] = '0';
                break;

            case '5':
                equ [0] = '0';
                equ [1] = '1';
                equ [2] = '0';
                equ [3] = '1';
                break;

            case '6':
                equ [0] = '0';
                equ [1] = '1';
                equ [2] = '1';
                equ [3] = '0';
                break;

            case '7':
                equ [0] = '0';
                equ [1] = '1';
                equ [2] = '1';
                equ [3] = '1';
                break;

            case '8':
                equ [0] = '1';
                equ [1] = '0';
                equ [2] = '0';
                equ [3] = '0';
                break;

            case '9':
                equ [0] = '1';
                equ [1] = '0';
                equ [2] = '0';
                equ [3] = '1';
                break;

            case 'A': //10
                equ [0] = '1';
                equ [1] = '0';
                equ [2] = '1';
                equ [3] = '0';
                break;

            case 'B': //11
                equ [0] = '1';
                equ [1] = '0';
                equ [2] = '1';
                equ [3] = '1';
                break;

            case 'C': //12
                equ [0] = '1';
                equ [1] = '1';
                equ [2] = '0';
                equ [3] = '0';
                break;

            case 'D': //13
                equ [0] = '1';
                equ [1] = '1';
                equ [2] = '0';
                equ [3] = '1';
                break;

            case 'E': //14
                equ [0] = '1';
                equ [1] = '1';
                equ [2] = '1';
                equ [3] = '0';
                break;

            case 'F': //15
                equ [0] = '1';
                equ [1] = '1';
                equ [2] = '1';
                equ [3] = '1';
                break;
        }

        for (int i=0 ; i<4 ; i++)
        {
            *(binary + binaryBits) = equ [i];
            binaryBits++;
        }
    }
    binaryToDecimal(binary);
}


void binaryToDecimal(char *binary)
{
    // sign determination
    char sign;
    if (*binary == '1')
        sign = '-';
    else
        sign = '+';

    // exponent determination
    int exponent = 0;
    for (int i=8 , power=1 ; i>0 ; i--)
    {
        exponent += (binary[i]-48) * power; //minus 48 to convert char to int
        power *= 2;
    }

    // subtraction excess 127
    exponent -= 127;

    // fraction determination
    double fraction = 0.0 , divider = 0.5;
    for (int i=(9+exponent) ; i<32 ; i++) //conversion start after (9 + exponent)
    {
        fraction += (binary[i]-48) * divider;
        divider /= 2;
    }

    // convert integer number
    int intNum = 0 , power = 1;
    for (int i=(8+exponent) ; i>=9 ; i--) //conversion start from bit before floating point
    {
        intNum += (binary[i]-48) * power; //minus 48 to convert char to int
        power *= 2;
    }
    intNum += power; //adding 1 to number
    cout << "Decimal number  = " << sign << intNum+fraction;
}
