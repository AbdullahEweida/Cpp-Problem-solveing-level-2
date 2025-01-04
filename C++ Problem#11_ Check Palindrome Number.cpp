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

int ReverseDigit(int Number)
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
    Reverse=Reverse/10;
    return Reverse;
}

void PrintDigits(int Number,int Reverse)
{
    cout<<"--------------------------------------"<<endl;
    if (Number==Reverse)
    {
        cout<<"\n\n\t\tYes , it is a palindrome number\t\t\n\n";
    }
    else
    {
        cout<<"\n\n\t\tNo , it is NOT a palindrome number\t\t\n\n";
    }
    
}

int main()
{
    int Number = ReadNumber("Please Enter the positive Number : ");
    PrintDigits(Number,ReverseDigit(Number));
    return 0;
}
