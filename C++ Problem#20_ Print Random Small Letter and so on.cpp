#include <iostream>
#include <cstdlib>
using namespace std;

enum Random
{
    Digit = 1,
    SmallLetter,
    CapitalLetter,
    SpecialCharacter
};

void PrintTheList()
{
    cout << "\n\t\tChoose Random\t\t\n"
         << "---------------------------------------" << endl
         << "{1} Digit \n"
         << "{2} Small Letter \n"
         << "{3} Capital Letter \n"
         << "{4} Special Character \n"
         << "---------------------------------------" << endl
         << "Choose : ";
}

Random ReadNumber()
{
    int M;
    cin >> M;
    Random RandomNumber = (Random)M;
    return RandomNumber;
}

int RandomNumber(int From, int To)
{
    int RandomNumber = rand() % (To - From + 1) + From;
    return RandomNumber;
}

char Choose(int Number)
{
    cout<<"----------------------------------------"<<endl;
    if (Number == Random::Digit)
    {
        cout<<"The Random Digit is : ";
        return char(RandomNumber(48,57));
    }
    else if (Number == Random::SmallLetter)
    {
        cout<<"The Random Small Letter is : ";
        return char(RandomNumber(97,122));
    }
    else if (Number == Random::CapitalLetter)
    {
        cout<<"The Random Capital Letter is : ";
        return char(RandomNumber(65,95));
    }
    else if (Number == Random::SpecialCharacter)
    {
        cout<<"The Random Special Character  is : ";
        return char(RandomNumber(33,47));
    }
    else
    {
        return char(0) ;
    }
}

int main()
{
    srand((unsigned)time(NULL));
    PrintTheList();
    cout<<Choose(ReadNumber())<<endl;
    return 0;
}
