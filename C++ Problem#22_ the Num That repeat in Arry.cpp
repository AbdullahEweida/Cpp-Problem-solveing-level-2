#include <iostream>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber(int &num,string Message)
{
    do
    {
        cout << Message ;
        cin >> num;

    } while (num < 0);

    return (num);
}

void ReadTheElemnetsOfArry(int Num,int Arri[100])
{
    for (int i = 0; i <= Num-1; i++)
    {
        cout<<"Enter Element { "<<i+1<<" } : ";
        cin>> Arri[i];
    }
}

void PrintArri(int Num,int Arri[100])
{
    int CheckNumber;
    CheckNumber=ReadPositiveNumber(CheckNumber,"Enter the Number you want to check : ");
    cout<<"---------------------------"<<endl;
    cout<<"Original array : ";
    int count=0;
    for (int i = 0; i <= Num-1; i++)
    {
        cout<<Arri[i]<<" ";
        if (Arri[i]==CheckNumber)
        {
            count++;
        }
    }
    cout<<endl;
    cout<<CheckNumber<<" is repeated "<<count<<" time(s)"<<endl;
}

int main()
{
    int Num;
    Num=ReadPositiveNumber(Num,"Enter Positive Number for size of Element : ");
    int Arri[100];
    ReadTheElemnetsOfArry(Num, Arri);
    PrintArri( Num, Arri);
    return 0;
}
