// for taking input and output we must first insilize the row and then colum
#include<iostream>
using namespace std;
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
    return 0;
}