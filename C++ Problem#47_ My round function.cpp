#include <iostream>
#include <cmath>
using namespace std;

float ReadNumber(string Message)
{

    float num;
    cout << Message;
    cin >> num;
    return (num);
}

int MyRound(float Number)
{
    float Remainder = 0;
    Remainder = abs(Number - (int)Number);
    if (Number < 0)
    {
        if (Remainder >= .5)
        {
            return (Number + Remainder) - 1;
        }
        else
        {
            return (Number + Remainder);
        }
    }
    else
    {
        if (Remainder >= .5)
        {
            return (Number - Remainder) + 1;
        }
        else
        {
            return (Number - Remainder);
        }
    }
}

int main()
{

    float Number = ReadNumber("Please enter Number To round it : ");

    cout << "=========================================" << endl;

    cout << "My Round Result : " << MyRound(Number) << endl;

    cout << "C++ Round Result: " << round(Number) << endl;

    return 0;
}
