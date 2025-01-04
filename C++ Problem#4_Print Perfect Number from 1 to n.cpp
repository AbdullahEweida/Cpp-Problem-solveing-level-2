#include <iostream>
#include <cmath>
#include<math.h>
#include "string"
using namespace std;

int ReadNumber(string Massege)
{
    int Number;
    do
    {
        cout<<Massege;
        cin>>Number;
    } while (Number<0);
    return Number;
}

void CheckTheNumbers(int Number)
{
    int sum = 0;
    int M=Number/2;
    for (int j = 1; j <= M; j++)
    {
        if (Number % j==0)
        {
            sum+=j;
        }
    }
    if (sum==Number)
    {
        cout<<Number<<endl;
    }
}
void Numbers(int Number)
{
    cout<<"\n\n\t\t\t The Perfect Numbers \t\t\n\n";
    for (int i = 1; i <=Number ; i++)
    {
        CheckTheNumbers(i);
    }
    
}

int main()
{
    Numbers(ReadNumber("Please enter the positve number for end the loop : "));
    return 0;
}
