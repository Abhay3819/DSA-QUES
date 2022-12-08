// Esme kuch misteks hai lec dekh ke sahi karna hai
#include<iostream>
using namespace std;
int number(int n1){
    int ap=1,n;
    for(int i=1;i<=n;i++)
    {
       ap=(3*i+7);
   }
   return ap;
}
int main()
{
    int n;
    cin >> n;
    int term = number(//n);
    cout<< "answer is" << term << endl;
}