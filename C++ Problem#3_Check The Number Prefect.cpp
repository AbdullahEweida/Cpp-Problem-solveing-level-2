#include <iostream>
#include <cmath>
#include<math.h>
#include "string"
using namespace std;

enum Number{Perfect,NotPerfect};

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

Number CheckTheNumber(int Sum ,int number)
{
    if (Sum==number)
    {
        return Number::Perfect;
    }
    else
    {
        return Number::NotPerfect;
    }
}

void TheNumbers(int number)
{
    int sum = 0;
    int M=number/2;
    for (int i = 1; i <= M; i++)
    {
        if (number % i==0)
        {
            sum+=i;
        }
    }
    if ( CheckTheNumber(sum,number) == Number::Perfect)
    {
        cout<<"\n\n\t\t The Number Is Perfect \n\n\t\t";
    }
    else
    {
        cout<<"\n\n\t\t The Number Is Not Perfect \n\n\t\t";
    }
}

int main()
{
    TheNumbers(ReadNumber("Please enter the positve number : "));
    return 0;
}
