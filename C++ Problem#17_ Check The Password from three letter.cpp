#include <iostream>
#include <cmath>
#include <math.h>
#include "string"
using namespace std;

string ReadNumber(string Massege)
{
    string Password;
    cout << Massege;
    cin >> Password;
    return Password;
}

bool PrintLetterPattern(string Password)
{
    string Word="";
    int counter=0;
    for (int i = 65; i <=90; i++)
    {
        for (int j = 65; j <=90; j++)
        {
            for (int n = 65; n <=90; n++)
            {
                counter++;
                Word=Word+char(i);
                Word=Word+char(j);
                Word=Word+char(n);
                cout<<"{ "<<counter<<" } "<<Word<<endl;
                if (Word==Password)
                {
                    cout<<"\nPassword is "<<Password<<"\n";
                    cout<<"Found after "<<counter<<" Trial(s)\n";
                    return true;
                }
                Word = "";
            }
            
        }
        
    }
    return false;
    
}

int main()
{
    PrintLetterPattern(ReadNumber("Please Enter The Three Letter : "));
    return 0;
}
