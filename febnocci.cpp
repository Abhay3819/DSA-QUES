#include<iostream>
using namespace std;
int main()
{
    int i,n=10,a=0,b=1;
    cout<< a << " " << b << " ";
    for(i=0;i<n;i++)
    {
        int z=a+b;
        cout<<z<<" ";
        a=b;
        b=z;
    }


}