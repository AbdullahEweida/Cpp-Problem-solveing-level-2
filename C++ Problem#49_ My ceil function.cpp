#include<iostream>
#include<cmath>
using namespace std;

float ReadNumber(string Message)
{

	float num;
	cout << Message ;
	cin >> num;
	return (num);

}

int MyCeil(float Number)
{
    float Remainder = 0;
    Remainder=abs(Number-(int)Number);
    if (Number<0)
    {
       return (Number+Remainder);
    }
    else
    {
        return (Number - Remainder)+1;
    }
    
}

int main()
{

	float Number = ReadNumber("Please enter Number To ceil it : ");

    cout<<"========================================="<<endl;

	cout << "My Ceil Result : " << MyCeil(Number) << endl;

	cout << "C++ Ceil Result: " << ceil(Number) << endl;

	return 0;

