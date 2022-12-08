#include<iostream>
using namespace std;
int main()
{
   // for print 1st space
   int n,j,i=1;    // i=row, j=colum
   cin>>n;       //for taking input
   while(i<=n)
   {
    int space =n-i;
    while(space)
    {
      cout<<" ";
      space--;
    }
       // for print 2nd space
     int j=1;
     int value=i;
     while(j<=i)
    { 
       cout<<j;  //for print output 
       j++;      
    }
         // for print 3rd space
      int start =i-1;
      while (start)
      {
        cout<<start;
        start--;
      }
      cout<<endl;
      i++;
   }
}