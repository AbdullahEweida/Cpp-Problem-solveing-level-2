#include <iostream>
#include <cstdlib>
using namespace std;

int ReadPositiveNumber(int &num, string Message)
{
    do
    {
        cout << Message;
        cin >> num;

    } while (num < 0);

    return (num);
}

void ReadTheElemnetsOfArray(int Num, int Arri[100])
{
    int From = ReadPositiveNumber(From, "Enter the Number that start : ");
    int To = ReadPositiveNumber(To, "Enter the Number that End : ");
    for (int i = 0; i <= Num - 1; i++)
    {
        Arri[i] = rand() % (To - From + 1) + From;
    }
}
void PrintArray(int Num, int Arri[100])
{
    cout << "--------------------------------------" << endl;
    for (int i = 0; i <= Num - 1; i++)
    {
        cout << "the element { " << i + 1 << " } : ";
        cout << Arri[i] << endl;
    }
}
int TheMaxNumberOfArray(int Num, int Arri[100])
{
    int MaxNumber = Arri[1];
    for (int i = 0; i <= Num; i++)
    {
        if (MaxNumber < Arri[i])
        {
            MaxNumber = Arri[i];
        }
    }
    return MaxNumber;
}

int main()
{
    srand((unsigned)time(NULL));
    int Num;
    Num = ReadPositiveNumber(Num, "Enter Positive Number for size of Element : ");
    int Arri[100];
    ReadTheElemnetsOfArray(Num, Arri);
    PrintArray(Num, Arri);
    cout << "----------------------------------------" << endl;
    cout << "The Maxium Number Is : " << TheMaxNumberOfArray(Num, Arri) << endl;
    return 0;
}
