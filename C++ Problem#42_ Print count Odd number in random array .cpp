#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void ArrayLength(int &length)
{
    do
    {
        cout<<"Enter the length of array : ";
        cin>>length;
    } while (length<0);
    
}

void FillTheElements(int Array[100],int length,int From,int To)
{
    for (int i = 0; i < length; i++)
    {
        Array[i]=rand()%(To-From+1)+From;
    }
}

void PrintArray(int Array[100],int length)
{
    FillTheElements(Array,length,1,100);   
    cout<<"-----------------The Array Element-----------------"<<endl;
    for (int i = 0; i < length; i++)
    {
        cout<<Array[i]<<"  ";
    }
    cout<<endl;
}

int CheckTheOddNumber(int Array[100],int length)
{
    int count=0;
    for (int i = 0; i < length; i++)
    {
        if (Array[i] % 2 != 0)
        {
            count++;
        }
        
    }
    return count;
}

void PrintTheCount(int Count)
{
    cout<<"-------------------The Output----------------------"<<endl;
    cout<<"Odd Number count is : "<<Count<<endl;
}

int main()
{
    int Array[100];
    int length;
    ArrayLength(length);
    PrintArray(Array,length);
    PrintTheCount(CheckTheOddNumber(Array,length));
    return 0;
}

