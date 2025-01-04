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

int MyFloor(float Number)
{
    float Remainder = 0;
    Remainder = abs(Number - (int)Number);
    if (Number < 0)
    {
        return (Number + Remainder) - 1;
    }
    else
    {
        return (Number - Remainder);
    }
}

int main()
{

    float Number = ReadNumber("Please enter Number To floor it : ");

    cout << "=========================================" << endl;

    cout << "My floor Result : " << MyFloor(Number) << endl;

    cout << "C++ floor Result: " << floor(Number) << endl;

    return 0;
}
