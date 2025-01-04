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

void PrintLetterPattern(int Number)
{
    cout << "\n\t\tThe Shape\t\t\n";
    int M=0;
    for (int i = 65 ; i <= 65 + Number-1; i++)
    {
        for (int j = 1; j <= i-64; j++)
        {
            cout << char(i);
            M++;
        }
        cout << "\n";
    }
}

int main()
{
    PrintLetterPattern(ReadNumber("Please Enter the positive Number : "));
    return 0;
}
