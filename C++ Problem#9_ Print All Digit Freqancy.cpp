#include <iostream>
#include <cmath>
#include <math.h>
#include "string"
using namespace std;

int ReadNumber(string Massege)
{
    int Number;
    do
    {
        cout << Massege;
        cin >> Number;
    } while (Number < 0);
    return Number;
}

int CheckTheDigit(int Number,int Digit)
{
    int Sum = 0;
    while (Number > 0)
    {
        int Remainder = 0;
        Remainder = Number % 10;
        Number = Number / 10;
        if (Remainder == Digit)
        {
            Sum += 1;
        }
    }
    return Sum;
}

void PrintTheDigits(int Number)
{
    cout << "---------------------------------------------------" << endl;
    for (int Digit = 0; Digit <= 9; Digit++)
    {
        int DigitFreguancy=0;
        DigitFreguancy=CheckTheDigit(Number,Digit);
        if (DigitFreguancy>0)
        {
         cout << "Digit " << Digit << " Frequency is " <<DigitFreguancy<< " Time(s)" << endl;   
        }
    }
}

int main()
{
    int Number = ReadNumber("Please Enter the positive Number : ");
    PrintTheDigits(Number);
    return 0;
}
