#include<iostream>
using namespace std;

int nos_digit(int n){
    if(n == 0)return 0;

    int out = nos_digit(n/10);
    
    return 1 + out;
}

int main(){
    int n;cin>>n;
    cout<<nos_digit(n)<<endl;

    return 0;
}