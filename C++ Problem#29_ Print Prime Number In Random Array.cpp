#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;

enum ThePrimeOrNot
{
    Prime,
    NOtPrime
};

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
    cout << "Array 1 elements : " << endl;
    for (int i = 0; i < Num; i++)
    {
        cout << Arri[i] << " ";
    }
    cout << endl;
}
ThePrimeOrNot CheckTheNumberPrime(int Number)
{
    int M = round(Number / 2);
    for (int i = 2; i <= M; i++)
    {
        if (Number % i == 0)
        {
            return ThePrimeOrNot::NOtPrime;
        }
    }
    return ThePrimeOrNot::Prime;
}

void copyArray1ToArray2(int Num, int Arri[100], int Arr2[100])
{
    for (int i = 0; i < Num; i++)
    {
        switch (CheckTheNumberPrime(Arri[i]))
        {
        case ThePrimeOrNot::Prime:
            Arr2[i] = Arri[i];
            break;
        case ThePrimeOrNot::NOtPrime:
            Arr2[i] = 0;
            break;
        }
    }
}
void PrintArr2(int Num, int Arr2[100])
{
    cout << "Array 2 Elements after copy : " << endl;
    for (int i = 0; i < Num; i++)
    {
        if (Arr2[i] > 0)
        {
            cout << Arr2[i] << " ";
        }
    }
    cout << endl;
}

int main()
{
    srand((unsigned)time(NULL));
    int Num;
    Num = ReadPositiveNumber(Num, "Enter Positive Number for size of Element : ");
    int Arri[100];
    int Arr2[100];
    ReadTheElemnetsOfArray(Num, Arri);
    PrintArray(Num, Arri);
    copyArray1ToArray2(Num, Arri, Arr2);
    cout << "----------------------------------------" << endl;
    PrintArr2(Num, Arr2);
    return 0;
}
