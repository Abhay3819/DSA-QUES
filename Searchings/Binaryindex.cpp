//first and last  element of binary search
#include<iostream>
using namespace std;
int firstoccurance(int arr[] , int n , int key){
    int start=0;
    int end=n-1;
    int mid = (start+end)/2;
    int ans=-1;
    while(start<=end){
        if(key==arr[mid]){
            ans=mid;
            end=mid-1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else  {
            end=mid-1;
        }
         mid = (start+end)/2;
    }
    return ans;
}
int lastoccurance(int arr[] , int n , int key){
    int start=0;
    int end=n-1;
    int mid = (start+end)/2;
    int ans=-1;
    while(key==arr[mid]){
        if(start=end){
            ans=mid;
            start=mid+1;
        }
        else if(key>arr[mid]){
            start=mid+1;
        }
        else {
            end=mid-1;
        }
         mid = (start+end)/2;
    }
    return ans;
}

int main(){
    int even[8]={0,2,3,3,3,3,3,4};
    // int odd[7]={0,2,3,3,3,3,3};
    // int evenkey,oddkey;
    
    
    cout<< "First index of 3 is " << firstoccurance(even,8,3) << endl;
    
    cout<< "Last index of 3 is " << lastoccurance(even,8,3) << endl;
    cout<< "Total index of 3 is " << (lastoccurance(even,8,3) - firstoccurance(even,8,3))+1 << endl;
}