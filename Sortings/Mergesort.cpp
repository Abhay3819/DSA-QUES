#include<iostream>
using namespace std;
void merge(int arr1[],int n,int arr2[],int m,int arr3[]){
     int i=0,j=0,k=0;
     while(i<n && j<m){
        if(arr1[i]<arr2[j]){
            arr3[k++]=arr1[i++];
        }
        else{
            arr3[k++]=arr2[j++];
        }
     }
     // copy kar do  inya j me jo bachcha ho use k me
     while(i<n){
        arr3[k++]=arr1[i++];
     }
     while(j<m){
        arr3[k++]=arr2[j++];
     }
}
void print(int ans[],int size){
    for(int i=0;i<size;i++){
        cout<< ans[i] << " ";
    }
}
int main(){
    int arr1[5]={1,5,8,11,15};
    int arr2[3]={3,6,9};
    int arr3[8]={0};
    merge(arr1,5,arr2,3,arr3);
    print(arr3,8);
    return 0;
}