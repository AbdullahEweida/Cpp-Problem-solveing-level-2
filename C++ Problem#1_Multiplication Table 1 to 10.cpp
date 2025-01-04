#include <iostream>
#include <cmath>
#include<math.h>
#include "string"
using namespace std;

void Draw()
{
    cout<<"\n\n\t\t\t Multipliaction From 1 to 10 \n\n";
    for (int i = 1; i <=10 ; i++)
    {
        cout<<"\t"<<i;
    }cout<<endl;
    cout << "\n___________________________________________________________________________________\n";
}

string PrintTableBody(int i)
{
    if (i<10)
    {
        return " |";/*عشان رقم عشرة هيكون في خانة زيادة وهي العشرات فالشكل هيبوظ*/
    }
    else return "|";
}

void PrintMultipliactionTable()
{
    Draw();/*حطينا الهدير لوحده علشان منفصل*/
    for (int i = 1; i <=10; i++)
    {
        cout<<i<<PrintTableBody(i)<<"\t";/*\t دي هنا مش تحت مع عملية الضرب عشان بالرغم من اول عدد هيكون مظبوط بس الباقي هيكون اتنين من بين كل رقم */

        for (int j = 1; j <= 10; j++)
        {
            cout<<i*j<<"\t"; /* والباقي مضبوط\t كدا هيكون اول رقم عنده */   
        }

        cout<<endl;
    }
    
}

int main()
{
    PrintMultipliactionTable();
    return 0;
}
