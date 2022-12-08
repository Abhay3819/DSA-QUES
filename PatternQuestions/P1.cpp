#include<iostream>
using namespace std;
int main()
{
   int n,j,i=1,count=i;    // i=row, j=colum
   cin>>n;       //for taking input
   while(i<=n)
   {
    int space =n-i;
    while(space)
    {
      cout<<" ";
      space--;
    }
     int j=1;
     int value=i;
     while(j<=i)
    { 
      
       cout<<j;  //for print output
       
       j++;      
    }
      cout<<endl;
      i++;
   }
}