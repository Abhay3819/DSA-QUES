#include<iostream>
using namespace std;
// when we search the element we must insilize the number of column

bool ispresent(int arr[][4],int target,int low,int col){
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            if(arr[row][col]==target){
                return 1;
            }
        }
        
}
return 0;
}

// for print row wise sum
void printsum(int arr[][4],int row,int col){
    for(int row=0;row<3;row++){
        int sum=0;
        for(int col=0;col<4;col++){
            sum=sum+ arr[row][col];
      }
      cout<< sum <<" ";
    }
    cout<<endl;

}


int main(){
    // create array 2D
    int arr[3][4];

    // for taking input

        // row wise input
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cin>> arr[row][col];
      }
    }
        // col wise input
    // for(int col=0;col<4;col++){
    //     for(int row=0;row<3;row++){
    //         cin>> arr[row][col];
    //     }
    // }
         

    // for print the output
    for(int row=0;row<3;row++){
        for(int col=0;col<4;col++){
            cout<< arr[row][col] << " ";
        }
        cout<<endl;
    }
    cout<<"Enter the element for search "<< endl;
    int target;
    cin>>target;
    
    if(ispresent(arr,target,3,4) ){
        cout<<"Element found"<<endl;
    }
    else{
        cout<<"Element not found"<<endl;
    }
    cout<< "sum of row wise is "<< endl;
    printsum(arr,3,4);
    return 0;
}