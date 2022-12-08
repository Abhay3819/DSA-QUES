// given array must be sorted
#include<iostream>
using namespace std;
int binarysearch(int arr[],int n,int key){
    int start=0;
    int end=n-1;
    int mid=(start+end)/2; 
    // for saving bound of int we are use below formula
    // int mid=start + (end-start)/2; 
    while(start<=end){   
        if(arr[mid]==key){
            return mid;
        }
        if(key>arr[mid]){
            start=mid+1;
        }
        else{
            end=mid-1;
        }
        mid=(start+end)/2;
    }
    return -1;
}
int main(){
    int even[6]={2,3,4,5,6,9};
    int odd[5]={12,13,14,15,19};
    int evenkey,oddkey;
    cin >> evenkey ;
    cin >> oddkey;
    int evenindex=binarysearch(even,6,evenkey);
    cout<< "even index of search key is" << evenindex << endl;
    int oddindex=binarysearch(odd,5,oddkey);
    cout<< "odd index of search key is" << oddindex << endl;
}