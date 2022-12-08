#include<iostream>
using namespace std;
int main()
{
   int n,i=1;    // i=row, j=colum
   cin>>n;       //for taking input
   
   while(i<=n)
   {
     int j=1;
    while(j<=n-i+1)
    { 
      
       cout<<"*";  //for print output
       j++;      
    }
      cout<<endl;
      i++;
   }
}