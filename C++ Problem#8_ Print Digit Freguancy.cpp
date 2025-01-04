#include <iostream>
#include <cmath>
#include<math.h>
#include "string"
using namespace std;

int ReadNumber(string Massege)
{
    int Number;
    do
    {
        cout<<Massege;
        cin>>Number;
    } while (Number<0);
    return Number;
}

void PrintTheDigits(int Digit,int Number)
{
    cout<<"---------------------------------------------------"<<endl;
    int Sum =0;
    while (Number>0)
    {
        int Remainder=0;
        Remainder=Number%10;
        Number=Number/10;
        if (Remainder==Digit)
        {
            Sum+=1;
        }
        
    }
    cout<<"Digit "<<Digit<<" Frequency is "<<Sum<<" Time(s)"<<endl;
}

int main()
{
    int Number= ReadNumber("Please Enter the positive Number : ");
    int Digit=  ReadNumber("Please Enter The Digit : ");
    PrintTheDigits(Digit,Number);
    return 0;
}
