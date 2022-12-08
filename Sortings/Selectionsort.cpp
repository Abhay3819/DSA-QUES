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
    for(int i=0;i<n;i++){
                                //int minIndex=i;
    for(int j=i+1;j<n;j++){
        if(arr[j]<arr[i]){
                                // minIndex=j;
    
        swap(arr[j],arr[i]);
    }
    }
}
  
// print sorted array
for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}