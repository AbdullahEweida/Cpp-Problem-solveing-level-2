#include <iostream>
#include <cmath>
#include <math.h>
#include "string"
using namespace std;

string ReadTheText(string Massege)
{
    string Text;
    cout << Massege;
    cin >> Text;
    return Text;
}

string EncryptText(string &Text,short EncryptoinKey)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i]=char((int)Text[i]-EncryptoinKey);
    }
    return Text;
}

string DecryptText(string &Text,short EncryptoinKey)
{
    for (int i = 0; i <= Text.length(); i++)
    {
        Text[i]=char((int)Text[i]+EncryptoinKey);
    }
    return Text;
}

int main()
{   
    short EncryptionKey=2;
    string Text = ReadTheText("Please Enter the Text : ");
    cout<<"-----------------------------------------------"<<endl;
    cout<<"The Encrypt Text is : "<<EncryptText(Text,EncryptionKey)<<endl;
    cout<<"The Decrypt Text is : "<<DecryptText(Text,EncryptionKey)<<endl;
    return 0;
}
