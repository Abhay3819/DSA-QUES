//sum of all element in array
#include<iostream>
using namespace std;
int sum(int arr[], int n){
    int sum= 0;
    for(int i=0;i<n;i++){
        sum = sum + arr[i];
    }
    return sum;

}
int main()
{
//    int size;
//    cin >> size;
   int arr[7] ;
   int n = sizeof(arr)/ sizeof(arr[0]);
   for(int i=0;i<n;i++){
    cin>> arr[i];
   }
   
   cout<< "sum of all element " << sum(arr,n);
   return 0;
}