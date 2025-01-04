#include <iostream>
#include <cmath>
#include<array>
#include <cstdlib>
using namespace std;

bool AddNumber()
{
    short AddOrNot;
    cout<<"Do you want to add Number ? {0}No , {1}Yes : ";
    cin>>AddOrNot;
    cout<<"-------------------------------------------------"<<endl; 
    if (AddOrNot==1)
    {
        return true;
    }
    else
    {
        return false;
    }
}

void ReadPositiveNumber(string Message,int Array[100],int &Count)
{
    Count=0;
    do
    {
        cout << Message;
        cin >> Array[Count];
        Count++;   
    } while (AddNumber() == true);
}

void PrintResult(int Array[100],int Count)
{
    cout<<"Array Length : "<<Count<<endl;
    cout<<"Array element : ";
    for (int i = 0; i < Count; i++)
    {
        cout<<Array[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    int Array[100];
    int Count;
    ReadPositiveNumber("Please Enter a Number : ",Array,Count);
    PrintResult(Array,Count);
    return 0;
}
