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

void PrintInvertedPattern(int Number)
{
    cout<<"\n\t\tThe Shape\t\t\n";
    for (int i = Number; i >0; i--)
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
    int Number = ReadNumber("Please Enter the positive Number : ");
    PrintInvertedPattern(Number);
    return 0;
}
