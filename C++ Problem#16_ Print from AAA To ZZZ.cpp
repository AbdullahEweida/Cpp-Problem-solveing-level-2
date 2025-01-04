#include <iostream>
#include <cmath>
#include <math.h>
#include "string"
using namespace std;

void PrintFromAAAToZZZ()
{
    for (int i = 65; i <=90; i++)
    {
        for (int j = 65; j <=90; j++)
        {
            for (int n = 65; n <=90; n++)
            {
                cout<<char(i)<<" "<<char(j)<<" "<<char(n)<<endl;
            }
            
        }
        
    }
    
}

int main()
{
    PrintLetterPattern();
    return 0;
}
