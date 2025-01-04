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

void PrintInvertedLetterPattern(int Number)
{
    cout << "\n\t\tThe Shape\t\t\n";
    for (int i = 65 + Number-1; i >= 65; i--)
    {
        for (int j = 1; j <= Number - (65 + Number - 1 - i); j++)
        {
            cout << char(i);
        }
        cout << "\n";
    }
}

int main()
{
    PrintInvertedLetterPattern(ReadNumber("Please Enter the positive Number : "));
    return 0;
}
