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

float MySqrt(float Number)
{
    return pow(Number, .5);
}

int main()
{

    float Number = ReadNumber("Please enter Number To sqrt it : ");

    cout << "=========================================" << endl;

    cout << "My Sqrt Result : " << MySqrt(Number) << endl;

    cout << "C++ Sqrt Result: " << sqrt(Number) << endl;

    return 0;
}
