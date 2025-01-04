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

void PrintNumberPattern(int Number)
{
    cout<<"\n\t\tThe Shape\t\t\n";
    for (int i = 1; i <=Number; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            cout<<i;
        }
        cout<<"\n";
    }
    
}

int main()
{
    PrintNumberPattern(ReadNumber("Please Enter the positive Number : "));
    return 0;
}
