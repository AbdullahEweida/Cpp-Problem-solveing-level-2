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

void PrintTheDigits(int Number)
{
    cout<<"\n\n\t\t The Digits \t\t\n\n";
    while (Number>0)
    {
        int Remainder=0;
        Remainder=Number%10;
        Number=Number/10;
        cout<<Remainder<<endl;
    }
    
}

int main()
{
    PrintTheDigits(ReadNumber("Please Enter the positive Number : "));
    return 0;
}
