#include <iostream>
#include <cmath>
#include<array>
#include <cstdlib>
using namespace std;
enum CheckNum{Prime,NotPrime};

int ReadPositiveNumber(int &Num,string Message)
{
    do
    {
        cout << Message;
        cin >> Num;

    } while (Num < 0);
    return Num;
}

void FillArray(int Arrlength,int Array[100],int From,int To)
{
    cout<<"\nArray elements : "<<endl;
    for (int i = 0; i < Arrlength; i++)
    {
        Array[i]= rand()%(To-From+1)+From;
        cout<<Array[i]<<" ";
    }
    cout<<"\n--------------------------------------"<<endl;
}

void AddArray(int Array2 [100],int &count,int Num)
{
    count++;
    Array2 [count-1]=Num;
}

CheckNum checkNum(int Array2 [100],int Num,int Arrlength,int &count)
{
    int M=Num/2;
    for (int i = 2; i <= M; i++)
    {
        if (Num%i==0)
        {
            return CheckNum::NotPrime;
        }
    }
    AddArray(Array2,count,Num);
    return CheckNum::Prime;
}


void PrintArray2(int Array2[100],int &Count)
{
    cout<<"Array 2 Odd numbers : "<<endl;
    for (int i = 0; i < Count; i++)
    {
        cout<<Array2[i]<<" ";
    }
    cout<<endl;
}


void ReadArray2(int Array1[100],int Arrlength,int Array2[100],int &count)
{
    for (int i = 0; i < Arrlength; i++)
    {
        checkNum(Array2,Array1[i],Arrlength,count);
    }
    PrintArray2(Array2,count);
}

int main()
{
    srand((unsigned)time(NULL));
    int Array1[100];
    int Arrlength;
    int count=0;
    Arrlength = ReadPositiveNumber(Arrlength,"Enter Positive Number for size of Element : ");
    FillArray(Arrlength,Array1,1,100);
    int Array2[100];
    ReadArray2( Array1, Arrlength, Array2, count);
   
    return 0;
}
