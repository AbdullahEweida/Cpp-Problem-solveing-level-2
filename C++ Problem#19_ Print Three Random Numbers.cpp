#include <iostream>/*دي للادخال والاخراج*/
#include <cmath>   /*فيها كل الدوال الرياضيه*/
#include <math.h>  /*يوجد بها الرقم باي*/
#include "string"  /*عشان تحويلات النصوص ل ارقام وهكذا*/
#include <cstdlib> /*دي عشان العشواؤية*/
using namespace std;

int ReadToAndFrom(string Massege)
{
    int Number;
    cout << Massege;
    cin >> Number;
    return Number;
}

int RandomNumber(int From, int To)
{
    int RandNumber = rand() % (To - From + 1) + From;
    return RandNumber;
}

int main()
{
    srand((unsigned)time(NULL));
    int From = ReadToAndFrom("Enter the number that start : ");
    int To = ReadToAndFrom("Enter the number that End : ");
    cout << "----------------------------------" << endl;
    cout << RandomNumber(From, To) << endl;
    cout << RandomNumber(From, To) << endl;
    cout << RandomNumber(From, To) << endl;
    return 0;
}
