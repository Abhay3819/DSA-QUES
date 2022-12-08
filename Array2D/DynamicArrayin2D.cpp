// For taking the n user input for row and column in array2D we are use 2D pointer dynamic allocation using new keyword(int** arr = new int*[row];)
// And when we using 2D pointer dynamic allocation we must (releasing or free memory) using delete[] keyword
// In this programme we are take user input in array2D 

#include <iostream>
using namespace std;

int main() {

    int row;
    cin >> row;

    int col;
    cin >> col;

    //creating a 2D array
    int** arr = new int*[row];
    for(int i=0; i<row; i++) {
        arr[i] = new int[col];
    }

    //taking input
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cin >> arr[i][j];
        }
    }

    //taking output
    cout << endl;
    for(int i=0; i<row; i++) {
        for(int j=0; j<col; j++) {
            cout << arr[i][j] << " ";
        } cout << endl;
    }


    //releasing memory
    for(int i=0; i<row; i++) {
        delete [] arr[i];
    }   

    delete []arr;

    //how to create a 2D array dynamically
    //input/Output
    //memory free kaise karani hai 

    return 0;
}