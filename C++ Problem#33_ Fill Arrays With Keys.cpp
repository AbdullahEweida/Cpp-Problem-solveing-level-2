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

short RandomeNumber(short From, short To)
{

    short Randome = rand() % (To - From + 1) + From;
    return Randome;

}

char GetRandomeCharcter(CharType Char)
{
	switch (Char)
	{
	case small:
		return RandomeNumber(97, 122);
	case capital:
		return RandomeNumber(65, 90);
	case spacial:
		return RandomeNumber(33, 47);
	case digit:
		return RandomeNumber(48, 57);
	}

}

string GenerateWord()
{
	string Word = "";
	Word += GetRandomeCharcter(capital);
	Word += GetRandomeCharcter(capital);
	Word += GetRandomeCharcter(capital);
	Word += GetRandomeCharcter(capital);
	return Word;
}

string GenerateKey()
{
	string Key = "";                          
	Key += GenerateWord() + "-";
	Key += GenerateWord() + "-";
	Key += GenerateWord() + "-";
	Key += GenerateWord();

	return Key;
}

void FillArrayWithKeys(string Array[100],int Num)
{
    for (int i = 0; i < Num; i++)
    {
        Array[i]=GenerateKey();
    }
    
}

void PrintArrayWithKeys(string Array[100],int Num)
{
    for (int i = 0; i < Num; i++)
    {
        cout<<"Array [ "<<i+1<<" ] : "<< Array[i]<<endl;
    }
    
}

int main()
{
    srand((unsigned)time(NULL));
    
    int Num=0;

    Num = ReadPositiveNumber(Num,"Enter Positive Number for size of Element : ");

    string Array1[100];
    cout<<"---------------------------------"<<endl;
    FillArrayWithKeys(Array1,Num);

    PrintArrayWithKeys(Array1, Num);

    return 0;
}
