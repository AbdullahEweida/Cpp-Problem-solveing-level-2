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
    for (int i = 0; i <= num - 1; i++)
    {
        Array[i] = rand() % (To - From + 1) + From;
        cout<<Array[i]<<" ";
    }
    cout<<endl;
}

void SumArrays(string Message,int Num ,int SumArray[100],int Arri[100],int Arr2[100])
{
    cout<<"\t\t"<<Message<<"\t\t"<<endl;
    for (int i = 0; i < Num; i++)
    {
        SumArray[i]=Arri[i]+Arr2[i];
        cout<<SumArray[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    srand((unsigned)time(NULL));
    
    int Num=0;

    Num = ReadPositiveNumber(Num,"Enter Positive Number for size of Element : ");

    int Arri[100];
    ReadArrays("Array 1 elements :",Num,1,100,Arri);
    
    int Arr2[100];
    ReadArrays("Array 1 elements :",Num,1,100,Arr2);

    int SumArray[100];
    SumArrays("Sum of array1 and array2 elements : ", Num , SumArray, Arri, Arr2);
    return 0;
}
