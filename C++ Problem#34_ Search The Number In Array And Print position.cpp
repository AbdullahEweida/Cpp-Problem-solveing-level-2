#include <iostream>
#include <cmath>
#include<array>
#include <cstdlib>
using namespace std;

enum CharType {small,capital,spacial,digit};

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
    cout<<"\n\t\tArray elements\t\t\n\t";
    for (int i = 0; i < Arrlength; i++)
    {
        Array[i]= rand()%(To-From+1)+From;
        cout<<Array[i]<<" ";
    }
    cout<<"\n--------------------------------------"<<endl;
}



void PrintNumberThatSearched(int NumSearched,int Position)
{
    cout<<"Number you are looking for is : "<<NumSearched<<endl;
    cout<<"The Number found at position : "<<Position<<endl;
    cout<<"The Number found it's order : "<<Position+1<<endl;
}

bool SearchTheNumber(int Arrlength,int Array[100],int NumSearched)
{
    for (int i = 0; i < Arrlength; i++)
    {
        if (Array[i]==NumSearched)
        {
            PrintNumberThatSearched(NumSearched,i);
            return true;
        }
    }
    return false;
}

void NumberNotFound(int SearchTheNumber,int NumSearched)
{
    if (SearchTheNumber==false)
    {
        cout<<"Number you are looking for is : "<<NumSearched<<endl;
        cout<<"The number is not found  :-("<<endl;
    }
    
}

int main()
{
    srand((unsigned)time(NULL));
    int Array[100];
    int Arrlength;

    Arrlength = ReadPositiveNumber(Arrlength,"Enter Positive Number for size of Element : ");

    FillArray(Arrlength,Array,1,100);

    int NumSearched=ReadPositiveNumber(NumSearched,"Please enter a number to search for : ");
    
    cout<<"--------------------------------------"<<endl;

    NumberNotFound(SearchTheNumber(Arrlength,Array,NumSearched),NumSearched);
    return 0;

