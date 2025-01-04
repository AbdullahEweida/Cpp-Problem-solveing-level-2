#include <iostream>
#include <cmath>
#include<array>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber(int &Num,string Message)
{
    do
    {
        cout << Message;
        cin >> Num;

    } while (Num < 0);
    return Num;
}

void ReadArrays(string Message2,int &num,int From,int To,int Array[100])
{
    cout<<"\t\t"<<Message2<<"\t\t"<<endl;
    for (int i = 0; i < num; i++)
    {
        Array[i]=i+1;
        cout<<Array[i]<<" ";
    }
    cout<<endl;
}

int RandomNumber(int From,int To)
{
    int Number;
    Number = rand()%(To-From+1)+From;
    return Number;
}

void Swap(int &Num1,int &Num2)
{
    int Temp;
    Temp=Num1;
    Num1=Num2;
    Num2=Temp;
}

void ShuffleArray(int Num,int Array[100])
{
    for (int i = 0; i < Num; i++)
    {
        Swap(Array[RandomNumber(1,Num)-1],Array[RandomNumber(1,Num)-1]);
    }
    
}

void PrintArrays(string Message2,int &num,int Array[100])
{
    cout<<"\t\t"<<Message2<<"\t\t"<<endl;
    for (int i = 0; i < num; i++)
    {
        cout<<Array[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    srand((unsigned)time(NULL));
    
    int Num=0;

    Num = ReadPositiveNumber(Num,"Enter Positive Number for size of Element : ");

    int Array[100];

    ReadArrays("Array 1 elements :",Num,1,100,Array);
    
    ShuffleArray( Num, Array);

    PrintArrays("Array Elements after shuffle : ",Num, Array);

    return 0;
}
