//Prime(abhajay):- yadi koi bhi number apne aane wale pahale sankhyao se wale number se % karane par 0 ke equal(n%i==0) aaye to vah prime number hota hai (like 4,6,8,9,10 etc)
//Nonprime(bhajay):- yadi koi bhi number apne aane wale pahale sankhyao se wale number se % karane par 0 ke not equal(n%i!=0) aaye to vah prime number hota hai (like 1,3,5,7 etc)
#include<iostream>
using namespace std;
bool isprime(int n){
    if(n<=1){
        return false;
    }
    for(int i=2; i<n; i++){
        if(n%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cin>>n;
    if(isprime(n)){
       cout<<"It is a Prime Number";
    }
    else{
       cout<<"It is a Not Prime Number";
    }
}
