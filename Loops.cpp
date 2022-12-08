#include<iostream>
using namespace std;
int main()
{
    for ( int i = 0; i<5; i++)    // best use for print even or odd
    {
        for ( int j=i; j<=5; j++)
        {
            if(i+j==10)
            {
              break;
            }
         cout<< i << " " << j << endl;
       
        } 
    }
}
    