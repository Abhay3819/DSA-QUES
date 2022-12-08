#include<iostream>
using namespace std;
int main(){
    // for taking input
    int n;
    cin >> n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    // for sorting
    for(int i=0;i<n-1;i++){
       for(int j=0;j<n-i-1;j++){
           if(arr[j]>arr[j+1]){
               swap(arr[j],arr[j+1]);
           }
       }
   }
  
// print sorted array
for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}