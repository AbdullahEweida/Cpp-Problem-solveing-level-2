#include <iostream>
#include <cmath>
#include <math.h>
#include "string"
using namespace std;

enum DataNumber
{
    Prime,
    NotPrime
};

int ReadNumber()
{
    int Number;
    do
    {
        cout << "Enter The End of loop (Positive Number) : ";
        cin >> Number;
    } while (Number < 0);
    return Number;
}

DataNumber CheckTheNumber(int i)
{
    int number = i / 2;
    for (int j = 2; j <= number; j++)
    {
        if (i % j == 0)
        {
            return DataNumber::NotPrime;
        }
    }
    cout << i << endl;
    return DataNumber::Prime;
}

void NumberInLoop(int Number)
{
    cout << "\n\n\t\t The Numbers Is Prime \t\t\n\n";
    for (int i = 1; i <= Number; i++)
    {
        if (CheckTheNumber(i) == DataNumber::Prime)
        {
            cout << i << endl;
        }
    }
}

int main()
{
    NumberInLoop(ReadNumber());
    return 0;
}
