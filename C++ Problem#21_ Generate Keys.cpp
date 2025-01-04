#include <iostream>
#include<cstdlib>
#include<string>
using namespace std;

enum CharType { small = 1, capital = 2, digit = 3, spacial = 4 };

int ReadPositiveNumber(string Message)
{

	int num;
	do
	{
		cout << Message;
		cin >> num;

	} while (num < 0);

	return (num);

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

void GenerateKeys(int HowMany)
{
	for (int i = 1; i <= HowMany; i++)
	{

		cout << "Key Number [" << i << "] is : " << GenerateKey() << endl;

	}

}

void Print(int HowMany)
{

	cout << endl;
	for (short c = 1; c <= HowMany; c++)
	{
		float k = 1;
		cout << "Key [" << c << "] is: ";
		for (short i = 1; i <= 16; i++)
		{
			cout << (char)RandomeNumber(65, 90);
			if (i == 4 * k && i!=16)
			{
			    cout << "-";
				k++;
			}
		}
		cout << endl;
	}

}

int main()
{
    srand((unsigned)time(NULL));

	Print(ReadPositiveNumber("Please Enter How Many Key You Want?"));
	GenerateKeys(ReadPositiveNumber("Please Enter How Many Key You Want?"));
	return 0;
	
}
