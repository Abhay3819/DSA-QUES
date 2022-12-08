// It based on LIFO
#include<iostream>
#include<stack>
using namespace std;
int main(){

    //creation
    stack<int> s;
    //push
    s.push(4);
    s.push(5);
    //pop
    s.pop();
    
    cout << " Top " << s.top() << endl;
    if(s.empty()){
        cout<<"empty"<<endl;
    }
    else{
        cout<<" non empty "<<endl;
    }
    
    // Size
    cout<< " its size " << s.size() <<endl;
}