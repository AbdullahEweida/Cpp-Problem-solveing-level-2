#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>
using namespace std;

void ReadArrayLength(int &length)
{
    do
    {
        cout<<"Enter the length of array : ";
        cin>>length;
    } while (length<0);
    
}

void ReadTheElements(int Array[100],int length)
{
    cout<<"---------------------------------------------------"<<endl;
    for (int i = 0; i < length; i++)
    {
        cout<<"Enter The Element "<<i+1<<" in Array : ";
        cin>>Array[i];
    }
}

bool CheckTheElements(int Array[100],int length)
{
    for (int i = 0; i < length; i++)
    {
        if (Array[i]==Array[length-1-i])
        {
            continue;
        }
        return false;
    }
    return true;
    
}

void PrintArray(int Array[100],int length)
{
    cout<<"-----------------The Array Element-----------------"<<endl;
    for (int i = 0; i < length; i++)
    {
        cout<<Array[i]<<"  ";
    }
    cout<<endl;
}

void PrintResult(int Array [100],int length)
{
    cout<<"-----------------------The OutPut------------------"<<endl;
    cout<<"The Result is : ";
    if (CheckTheElements(Array,length)==false)
    {
        cout<<"No, Array is NOT Palindrome ."<<endl;
    }
    else
    {
        cout<<"Yes, Array is  Palindrome ."<<endl;
    }
} 

int main()
{
    int Array[100];
    int length;
    ReadArrayLength(length);
    ReadTheElements(Array,length);
    PrintArray(Array,length);
    PrintResult(Array,length);
    return 0;
}
