#include <iostream>
#include <iomanip>
using namespace std;
void hexaToBinary (char * , char *);
void binaryToDecimal (char *);
void decimalToBinary (double , char );
void floatingPointCalc (char , short * ,int);

int main ()
{
    char hexa[8]={'0'} , binary[32]={'0'} , decimalSign='0';
    int chooseSystem=0;
    double decimal=0.0;

    while (1)
    {
    cout << endl << endl
     << "1- Hexadecimal to decimal" << endl
     << "2- Binary to decimal" << endl
     << "3- Decimal to hexadecimal and binary"
     << endl;

    cout << "Choose system: ";
    cin >> chooseSystem;

    if (chooseSystem==1)
    {
        cout << endl << "Welcome to conversion from hexadecimal to decimal" << endl;
        cout << "Enter 8 hexadecimal numbers: ";
        for (int i=0 ; i<8 ; i++)
            cin >> *(hexa+i);
        hexaToBinary(hexa , binary);

        cout << endl << "Binary number = ";
        for (int y=0 ; y<32 ; y++) //display binary number
        {
            cout << binary[y];
            if (y==3 || y==7 || y==11 || y==15 || y==19 || y==23 || y==27)
                cout << " "; //space after every 4 bits
        }
    }

    else if (chooseSystem==2)
    {
        cout << endl << "Welcome to conversion from binary to decimal" << endl;
        cout << "Enter 32 binary numbers: ";
        for (int i=0 ; i<32 ; i++)
            cin >> *(binary+i);
        binaryToDecimal(binary);
    }

    else if (chooseSystem==3)
    {
        cout << endl << "Welcome to conversion from decimal to hexadecimal and binary " << endl;
        cout << "Enter signed decimal number: ";
        cin >> decimalSign >> decimal;
        decimalToBinary(decimal , decimalSign);
    }

    else
        cout << "Error !";
    }
    return 0;
}


void hexaToBinary (char *hexa , char *binary)
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


void binaryToDecimal (char *binary)
{
    //sign determination
    char sign;
    if (*binary=='1')
        sign='-';
    else
        sign='+';

    //convert exponent from binary to decimal
    int exponent=0;
    for (int i=8,power=1 ; i>0 ; i--)
    {
        exponent+=(binary[i]-48)*power; //minus 48 to convert char to int
        power*=2;
    }

    //subtract exponent using excess 127
    exponent-=127;

    //convert fraction from binary to decimal according to floating point
    double fraction=0.0 , divider=0.5;
    for (int i=(9+exponent) ; i<32 ; i++) //conversion start after (9+exponent)
    {
        fraction+=(binary[i]-48)*divider;
        divider/=2;
    }

    //convert integer number
    int intNum=0 , power=1;
    for (int i=(8+exponent) ; i>=9 ; i--) //conversion start from bit before floating point
    {
        intNum+=(binary[i]-48)*power; //minus 48 to convert char to int
        power*=2;
    }
    intNum+=power; //adding 1 to number by adding last value of power before break for loop
    cout << setprecision(100); //display precision
    cout << "Decimal number  = " << sign << intNum+fraction;
}


void decimalToBinary (double decimal , char decimalSign)
{
    short decimalToBinaryArr [32]={0};
    int integerDecimal=decimal , index=1 , radixPosition=0; //divide float number to integer and fraction
    double fractionDecimal=decimal-integerDecimal; //double-integer=fraction

    //convert fraction to binary
    for (index ; fractionDecimal!=0 ; index++)
    {
        fractionDecimal*=2;
        //array get integer only (reminder) because type of array is char and variable is double
        *(decimalToBinaryArr+index)=fractionDecimal;
        fractionDecimal-=decimalToBinaryArr[index];
    }
    //determine radix position from left in decimalToBinaryArr
    //minus 33 not 32 because index initialize by 1 not 0
    radixPosition=33-index;

    int shiftFraction=index-1; //back to last index in conversion
    index=31;

    //shift fraction in array from left to right
    for (shiftFraction ; shiftFraction!=0 ; shiftFraction--)
    {
       decimalToBinaryArr[index]=decimalToBinaryArr[shiftFraction];
       decimalToBinaryArr[shiftFraction]=0;
       index--;
    }

    //convert integer to binary
    for (index ; integerDecimal!=0 ; (integerDecimal/=2),index--)
        *(decimalToBinaryArr+index)=integerDecimal%2;

    floatingPointCalc(decimalSign , decimalToBinaryArr , radixPosition);
}


void floatingPointCalc (char decimalSign , short *decimalToBinaryArr , int radixPosition)
{
    bool sign=0;
    short exponentArr[8]={0} , fractionArr[23]={0};
    int formalRadix=0 , exponent=0 , binaryRepresent=0;

    //search for first 1 in decimalToBinaryArr from left to right and save its index
    for (int i=0 ; i<32 ; i++)
    {
        if (*(decimalToBinaryArr+i)==1)
        {
            formalRadix=i+1;
            break;
        }
    }

    //calculate exponent and convert it to binary
    exponent=(radixPosition-formalRadix)+127; //add excess 127
    for (int i=7 ; i>=0 ; (exponent/=2),i--)
        exponentArr[i]=exponent%2;

    //copy values of fraction from decimalToBinaryArr to fractionArr
    for (int index=0 ; index<23 ; index++)
    {
        fractionArr[index]=decimalToBinaryArr[formalRadix];
        formalRadix++;
        if (formalRadix==32) //let all values after index 31 equal zero
            break;
    }

    //determine sign
    switch (decimalSign)
    {
        case '+': sign=0; break;
        case '-': sign=1; break;
    }

    //display binary number
    cout << "Binary number = " << sign;
    for (int i=0 ; i<8 ; i++)
    {
        cout << exponentArr[i];
        if (i==2 || i==6)
            cout << " "; //space after every 4 bits
    }

    for (int i=0 ; i<23 ; i++)
    {
        cout << fractionArr[i];
        if (i==2 || i==6 || i==10 || i==14 || i==18)
            cout << " "; //space after every 4 bits
    }
}
