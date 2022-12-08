// Combination of any number(nCr)
#include<iostream>
using namespace std;
int fact (int n){
    int fact=1;
    for(int i =1; i<=n; i++){
     fact = fact * i;
    }
    return fact;
}
int nCr(int n, int r){
    int demo= fact(n);
    int nume= fact(r)*fact(n-r);
    return demo/nume;

}
int main() {
    int n,r;
    cin >> n >> r ;
    
    cout<< "answer is" << nCr(n,r) << endl;
    return 0;
}