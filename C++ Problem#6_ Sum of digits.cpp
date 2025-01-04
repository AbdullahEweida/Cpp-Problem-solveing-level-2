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

int PrintTheDigits(string Massege,int Number)
{
    int Sum =0;
    while (Number>0)
    {
        int Remainder=0;
        Remainder=Number%10;
        Number=Number/10;
        Sum+=Remainder;
    }
    cout<<"----------------------------------"<<endl;
    cout<<Massege;
    return Sum;
}

int main()
{
    cout<<PrintTheDigits("The Sum Of Digits = ",ReadNumber("Please Enter the positive Number : "))<<endl;
    return 0;
}
