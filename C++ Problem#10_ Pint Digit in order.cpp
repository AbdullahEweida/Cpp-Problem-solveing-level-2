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

int CheckTheDigit(int &Number)
{
    int Reverse=0;
    int Sum = 0;
    while (Number > 0)
    {
        int Remainder = 0;
        Remainder = Number % 10;
        Number = Number / 10;
        Reverse=(Remainder+Reverse)*10;
    }
    Number=Reverse/10;
    return Number;
}

void PrintDigits(int Number)
{
    cout<<"--------------The Digits------------------"<<endl;
    Number=CheckTheDigit(Number);
    while (Number > 0)
    {
        int Remainder = 0;
        Remainder = Number % 10;
        Number = Number / 10;
        cout<<Remainder<<endl;
    }
}

int main()
{
    int Number = ReadNumber("Please Enter the positive Number : ");
    PrintDigits(Number);
    return 
