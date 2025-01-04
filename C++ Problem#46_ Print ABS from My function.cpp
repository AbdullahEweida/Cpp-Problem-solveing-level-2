#include <iostream>
#include <cstdlib>
#include <cmath>
#include <string>
using namespace std;

void ReadNum(float &Num)
{    
    cout<<"Enter the number to calculate ABS value : ";
    cin>>Num;   
}

float MyAbsFunction(float Num)
{
    if (Num<0)
    {
        return Num/-1;
    }
    else
    {
        return Num;
    }
}

int main()
{
    float Num;
    ReadNum(Num);
    cout<<"My abs Result : "<<MyAbsFunction(Num)<<"\n";
    cout<<"C++ abs Result : "<<abs(Num)<<"\n";
    return 0;
}

