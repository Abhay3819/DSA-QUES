//(Reverse Element)
#include<iostream>
using namespace std;
void reverse(int arr[],int n){
    int start=0;
    int end = n-1;
    while(start<=end){
        swap(arr[start],arr[end]);
        start++;
        end--;
    }

}
void printArray(int arr[],int n){
    for (int i=0;i<n;i++){
        cout << arr[i]<< " ";
    }
    cout << endl;
}
int main(){
    int arra[8]={1,2,3,4,5,6,7,8};
    int arrb[7]={7,6,5,4,3,2,1};
    reverse(arra,8);
    reverse(arrb,7);
    printArray (arra,8);
    printArray (arrb,7);
    return 0;
}