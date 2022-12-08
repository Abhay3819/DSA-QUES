// max and min element search in given array
#include<iostream>
using namespace std;
int getmin(int arr[],int n ){
    int min =INT16_MAX;
    for (int i=0;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
    }
    return min;
}
int getmax(int arr[],int n ){
    int max= INT16_MIN;
    for (int i=0;i<n;i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    return max;
}
int main()
{
    int size;
    cin >> size ;
    int arr[100];
    for(int i=0;i<size;i++){
        cin >> arr[i];
    }
    cout<< "max element in array" << getmax(arr,size);
    cout<< "min element in array" << getmin(arr,size);
    return 0;
}