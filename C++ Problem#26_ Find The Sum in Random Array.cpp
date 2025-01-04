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
int Sum(int Num, int Arri[100])
{
    int Sum = 0;
    for (int i = 0; i <= Num; i++)
    {
        Sum+=Arri[i];
    }
    return Sum;
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
    cout << "The Sum of Array Is : " << Sum(Num, Arri) << endl;
    return 0;
}
