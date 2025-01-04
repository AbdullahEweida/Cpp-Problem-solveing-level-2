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

void ReverseArray(int &num,int From,int To,int Array1[100],int Array2[100])
{
    for (int i = 0; i <= num-1; i++)
    {
        Array2[(num-1)-i]=Array1[i];
    }
    
}

void PrintReverseArray(int &num,int From,int To,int Array2[100])
{
    for (int i = 0; i <= num-1; i++)
    {
        cout<<Array2[i]<<" ";
    }
    cout<<endl;
}

int main()
{
    srand((unsigned)time(NULL));
    
    int Num=0;

    Num = ReadPositiveNumber(Num,"Enter Positive Number for size of Element : ");

    int Array1[100];
    ReadArrays("Array 1 elements between 1 to 100",Num,1,100,Array1);

    int Array2[100];
    
    ReverseArray(Num,1,100,Array1,Array2);

    cout<<"\t\tReverse Array\t\t"<<endl;

    PrintReverseArray(Num,1,100,Array2);

    return 0;
}
